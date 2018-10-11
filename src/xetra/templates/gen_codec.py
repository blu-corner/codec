#!/usr/bin/env python
##############################################################################
# IMPORTS & CONFIGURATION
###############################################################################

import os, sys, argparse
import xml.etree.ElementTree as ET
from datetime import datetime
from packet_h import *
from msg_packet_h import *
from codec_h import *
from codec_cpp import *

from venue_i import *

###############################################################################
# MAIN PROGRAM
###############################################################################

# parse arguments
parser = argparse.ArgumentParser(description='Generate Codec & Packet Files')
parser.add_argument('-v', dest='venue_xml', type=str, help='venue.xml')
parser.add_argument('-o', dest='output', type=str, default='./', help='output directory')
args = parser.parse_args()

# read venue and generate output dirs
input = ET.parse(args.venue_xml)
venue = input.getroot()

# some global information
output_dir = args.output
packets_dir = os.path.join(args.output, 'packets')
generation = datetime.now().strftime("%d/%m/%Y")

# generate dirs
if not os.path.exists(output_dir):
    os.makedirs(output_dir)
if not os.path.exists(packets_dir):
    os.makedirs(packets_dir)

# generate files
packet_h = os.path.join(packets_dir, 'xetraPackets.h')
compose_packet_h(packet_h, generation, venue)

msg_packet_h = os.path.join(packets_dir, 'xetra{0}Packet.h')
compose_msg_packet_h(msg_packet_h.format('Header'), generation, venue.find('header'), venue)

for group in venue.findall('group'):
    compose_msg_packet_h(msg_packet_h.format(group.attrib['name']), generation, group, venue)

for message in venue.findall('message'):
    compose_msg_packet_h(msg_packet_h.format(message.attrib['name']), generation, message, venue)

codec_h = os.path.join(output_dir, 'xetraCodec.h')
compose_codec_h(codec_h, venue)

codec_cpp = os.path.join(output_dir, 'xetraCodec.cpp')
compose_codec_cpp(codec_cpp, venue)

#codec_i = os.path.join(packet_dir, 'Xetra.i')
#compose_codec_i(codec_i, venue)
