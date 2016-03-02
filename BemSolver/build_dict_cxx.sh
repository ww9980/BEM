#!/bin/bash

rootcint -f dict.cxx -c   ExpLog.h bem.h LinkDef.h 
sed -i -e 's/instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TString> >()));/\/\/instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TString> >()));/' dict.cxx
