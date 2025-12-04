
/* String ToString() */

String * Assembly-CSharp.dll::GameSessionData::GameSessionData_ToString
                   (GameSessionData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__Common__MVGameMode);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_serverIP__0___profileID__1___pla);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  args = (Object__Array *)FUN_?(TypeInfo__System__Object,9);
  pSVar1 = (this->fields).serverIP;
  if (args != (Object__Array *)0x0) {
    if (pSVar1 != (String *)0x0) {
      lVar2 = FUN_?(pSVar1,(args->klass->_0).element_class);
      if (lVar2 == 0) {
        uVar3 = FUN_?();
        FUN_?(uVar3,0);
        pcVar4 = (code *)swi(3);
        pSVar1 = (String *)(*pcVar4)();
        return pSVar1;
      }
    }
    FUN_?(args,0,pSVar1);
    aiStackX_8[0] = (this->fields).profileID;
    lVar2 = FUN_?(uRam_?,aiStackX_8);
    if (lVar2 != 0) {
      lVar5 = FUN_?(lVar2,(args->klass->_0).element_class);
      if (lVar5 == 0) {
        uVar3 = FUN_?();
        FUN_?(uVar3,0);
        pcVar4 = (code *)swi(3);
        pSVar1 = (String *)(*pcVar4)();
        return pSVar1;
      }
    }
    FUN_?(args,1,lVar2);
    aiStackX_8[0] = (this->fields).planetID;
    lVar2 = FUN_?(uRam_?,aiStackX_8);
    if (lVar2 != 0) {
      lVar5 = FUN_?(lVar2,(args->klass->_0).element_class);
      if (lVar5 == 0) {
        uVar3 = FUN_?();
        FUN_?(uVar3,0);
        pcVar4 = (code *)swi(3);
        pSVar1 = (String *)(*pcVar4)();
        return pSVar1;
      }
    }
    FUN_?(args,2,lVar2);
    aiStackX_8[0] = (this->fields).gameMode;
    lVar2 = FUN_?(TypeInfo__MV__Common__MVGameMode,aiStackX_8);
    if (lVar2 != 0) {
      lVar5 = FUN_?(lVar2,(args->klass->_0).element_class);
      if (lVar5 == 0) {
        uVar3 = FUN_?();
        FUN_?(uVar3,0);
        pcVar4 = (code *)swi(3);
        pSVar1 = (String *)(*pcVar4)();
        return pSVar1;
      }
    }
    FUN_?(args,3,lVar2);
    pSVar1 = (this->fields).language;
    if (pSVar1 != (String *)0x0) {
      lVar2 = FUN_?(pSVar1,(args->klass->_0).element_class);
      if (lVar2 == 0) {
        uVar3 = FUN_?();
        FUN_?(uVar3,0);
        pcVar4 = (code *)swi(3);
        pSVar1 = (String *)(*pcVar4)();
        return pSVar1;
      }
    }
    FUN_?(args,4,pSVar1);
    aiStackX_8[0] = CONCAT31(aiStackX_8[0]._1_3_,(this->fields).embedded);
    lVar2 = FUN_?(uRam_?,aiStackX_8);
    if (lVar2 != 0) {
      lVar5 = FUN_?(lVar2,(args->klass->_0).element_class);
      if (lVar5 == 0) {
        uVar3 = FUN_?();
        FUN_?(uVar3,0);
        pcVar4 = (code *)swi(3);
        pSVar1 = (String *)(*pcVar4)();
        return pSVar1;
      }
    }
    FUN_?(args,5,lVar2);
    pSVar1 = (this->fields).token;
    if (pSVar1 != (String *)0x0) {
      lVar2 = FUN_?(pSVar1,(args->klass->_0).element_class);
      if (lVar2 == 0) {
        uVar3 = FUN_?();
        FUN_?(uVar3,0);
        pcVar4 = (code *)swi(3);
        pSVar1 = (String *)(*pcVar4)();
        return pSVar1;
      }
    }
    FUN_?(args,6,pSVar1);
    pSVar1 = (this->fields).sessionToken;
    if (pSVar1 != (String *)0x0) {
      lVar2 = FUN_?(pSVar1,(args->klass->_0).element_class);
      if (lVar2 == 0) {
        uVar3 = FUN_?();
        FUN_?(uVar3,0);
        pcVar4 = (code *)swi(3);
        pSVar1 = (String *)(*pcVar4)();
        return pSVar1;
      }
    }
    FUN_?(args,7,pSVar1);
    pSVar1 = (this->fields).newPlanetName;
    if (pSVar1 != (String *)0x0) {
      lVar2 = FUN_?(pSVar1,(args->klass->_0).element_class);
      if (lVar2 == 0) {
        uVar3 = FUN_?();
        FUN_?(uVar3,0);
        pcVar4 = (code *)swi(3);
        pSVar1 = (String *)(*pcVar4)();
        return pSVar1;
      }
    }
    FUN_?(args,8);
    pSVar1 = StringLiteral_serverIP__0___profileID__1___pla;
    PStack_6._arg0 = (Object *)0x0;
    PStack_6._arg1 = (Object *)0x0;
    PStack_6._arg2 = (Object *)0x0;
    PStack_6._args = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor_3(&PStack_6,args,(MethodInfo *)0x0);
    PStack_7._arg0 = PStack_6._arg0;
    PStack_7._arg1 = PStack_6._arg1;
    PStack_7._arg2 = PStack_6._arg2;
    PStack_7._args = PStack_6._args;
    pSVar1 = mscorlib.dll::System::String::String_FormatHelper
                       ((IFormatProvider *)0x0,pSVar1,&PStack_7,(MethodInfo *)0x0);
    return pSVar1;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar4)();
  return pSVar1;
}


/* GameSessionData() */

void Assembly-CSharp.dll::GameSessionData::GameSessionData__ctor
               (GameSessionData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_game_server_test);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_h5g9REtmi1LT7JY5);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_RegionNotDefined);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = iRam_?;
  (this->fields).serverIP = ::StringLiteral__;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).profileID = -1;
  (this->fields).planetID = -1;
  (this->fields).gameMode = 1;
  (this->fields).language = ::StringLiteral__;
  iVar7 = 0;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).language >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar7 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).embeddedSite = ::StringLiteral__;
  iVar1 = 0;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).embeddedSite >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).token = ::StringLiteral__;
  iVar7 = 0;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).token >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar7 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).sessionToken = ::StringLiteral__;
  iVar1 = 0;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).sessionToken >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).newPlanetName = StringLiteral_game_server_test;
  iVar7 = 0;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).newPlanetName >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar7 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).planetName = ::StringLiteral__;
  iVar1 = 0;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).planetName >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).planetImageURL = ::StringLiteral__;
  iVar7 = 0;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).planetImageURL >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar7 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).pingURL = ::StringLiteral__;
  iVar1 = 0;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).pingURL >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).disconnectURL = ::StringLiteral__;
  iVar7 = 0;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).disconnectURL >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar7 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).gameRewardURL = ::StringLiteral__;
  iVar1 = 0;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).gameRewardURL >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).gamePublishedURL = ::StringLiteral__;
  iVar7 = 0;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).gamePublishedURL >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar7 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).purchaseGoldURL = ::StringLiteral__;
  iVar1 = 0;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).purchaseGoldURL >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).loginURL = ::StringLiteral__;
  iVar7 = 0;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).loginURL >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar7 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).signupURL = ::StringLiteral__;
  iVar1 = 0;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).signupURL >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).idleURL = ::StringLiteral__;
  iVar7 = 0;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).idleURL >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar7 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).disconnectedURL = ::StringLiteral__;
  iVar1 = 0;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).disconnectedURL >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).playerProfileURL = ::StringLiteral__;
  iVar7 = 0;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).playerProfileURL >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar7 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).eliteUpgradeURL = ::StringLiteral__;
  iVar1 = 0;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).eliteUpgradeURL >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).region = StringLiteral_RegionNotDefined;
  iVar7 = 0;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).region >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar7 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).ezKey = StringLiteral_h5g9REtmi1LT7JY5;
  iVar1 = 0;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).ezKey >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).reauthURL = ::StringLiteral__;
  iVar7 = 0;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).reauthURL >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar7 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).gameRewardDataURL = ::StringLiteral__;
  iVar1 = 0;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).gameRewardDataURL >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).referrer = ::StringLiteral__;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).referrer >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  return;
}


/* GameSessionData(Dictionary`2[System.String,System.Object]) */

void Assembly-CSharp.dll::GameSessionData::GameSessionData__ctor_1
               (GameSessionData *this,Dictionary_2_System_String_System_Object_ *gameSessionData,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  System__Object_MethodInfo__System__Collections__Generic__CollectionExtensions__GetValueOrDefault<System::String,_System::Object>_System__Collections__Generic__IReadOnlyDictionary<System::String,_System::Object>__System__String__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__Common__MVGameMode);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_playButtonAdsEnabledDefault);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_token);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_planetName);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_game_server_test);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_profileID);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_embedded);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_rewardedAdsEnabledDefault);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_newPlanetName);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_sessionToken);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_planetImageURL);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_interstitialsAdsEnabledDefault);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_serverIP);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_h5g9REtmi1LT7JY5);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_language);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_embeddedSite);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_boostersEnabledDefault);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_planetID);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_gameMode);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_RegionNotDefined);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = iRam_?;
  (this->fields).serverIP = ::StringLiteral__;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).profileID = -1;
  (this->fields).planetID = -1;
  (this->fields).gameMode = 1;
  (this->fields).language = ::StringLiteral__;
  iVar7 = 0;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).language >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar7 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).embeddedSite = ::StringLiteral__;
  iVar1 = 0;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).embeddedSite >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).token = ::StringLiteral__;
  iVar7 = 0;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).token >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar7 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).sessionToken = ::StringLiteral__;
  iVar1 = 0;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).sessionToken >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).newPlanetName = StringLiteral_game_server_test;
  iVar7 = 0;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).newPlanetName >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar7 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).planetName = ::StringLiteral__;
  iVar1 = 0;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).planetName >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).planetImageURL = ::StringLiteral__;
  iVar7 = 0;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).planetImageURL >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar7 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).pingURL = ::StringLiteral__;
  iVar1 = 0;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).pingURL >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).disconnectURL = ::StringLiteral__;
  iVar7 = 0;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).disconnectURL >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar7 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).gameRewardURL = ::StringLiteral__;
  iVar1 = 0;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).gameRewardURL >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).gamePublishedURL = ::StringLiteral__;
  iVar7 = 0;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).gamePublishedURL >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar7 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).purchaseGoldURL = ::StringLiteral__;
  iVar1 = 0;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).purchaseGoldURL >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).loginURL = ::StringLiteral__;
  iVar7 = 0;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).loginURL >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar7 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).signupURL = ::StringLiteral__;
  iVar1 = 0;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).signupURL >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).idleURL = ::StringLiteral__;
  iVar7 = 0;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).idleURL >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar7 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).disconnectedURL = ::StringLiteral__;
  iVar1 = 0;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).disconnectedURL >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).playerProfileURL = ::StringLiteral__;
  iVar7 = 0;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).playerProfileURL >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar7 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).eliteUpgradeURL = ::StringLiteral__;
  iVar1 = 0;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).eliteUpgradeURL >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).region = StringLiteral_RegionNotDefined;
  iVar7 = 0;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).region >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar7 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).ezKey = StringLiteral_h5g9REtmi1LT7JY5;
  iVar1 = 0;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).ezKey >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).reauthURL = ::StringLiteral__;
  iVar7 = 0;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).reauthURL >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar7 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).gameRewardDataURL = ::StringLiteral__;
  iVar1 = 0;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).gameRewardDataURL >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).referrer = ::StringLiteral__;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).referrer >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  if (gameSessionData != (Dictionary_2_System_String_System_Object_ *)0x0) {
    pSVar8 = (String *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       ((Dictionary_2_System_Object_System_Object_ *)gameSessionData,
                        (Object *)StringLiteral_serverIP,
                        MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                       );
    pSVar9 = (String *)0x0;
    if (pSVar8 == (String *)0x0) {
      (this->fields).serverIP = (String *)0x0;
    }
    else {
      pSVar10 = pSVar9;
      if (pSVar8->klass == pSRam0000000182dbbc60) {
        pSVar10 = pSVar8;
      }
      if (pSVar10 == (String *)0x0) {
        FUN_?();
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      (this->fields).serverIP = pSVar10;
      pSVar10 = pSVar9;
      if (pSVar8->klass == pSRam0000000182dbbc60) {
        pSVar10 = pSVar8;
      }
      if (pSVar10 == (String *)0x0) {
        FUN_?();
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar5;
        if (bVar6) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    pOVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       ((Dictionary_2_System_Object_System_Object_ *)gameSessionData,
                        (Object *)StringLiteral_profileID,
                        MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                       );
    if (pOVar12 != (Object *)0x0) {
      if ((pOVar12->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar12);
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      (this->fields).profileID = *(int32_t *)&pOVar12[1].klass;
      pOVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         ((Dictionary_2_System_Object_System_Object_ *)gameSessionData,
                          (Object *)StringLiteral_planetID,
                          MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                         );
      if (pOVar12 != (Object *)0x0) {
        if ((pOVar12->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
          FUN_?(pOVar12);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        (this->fields).planetID = *(int32_t *)&pOVar12[1].klass;
        pOVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           ((Dictionary_2_System_Object_System_Object_ *)gameSessionData,
                            (Object *)StringLiteral_gameMode,
                            MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                           );
        if (pOVar12 != (Object *)0x0) {
          if ((pOVar12->klass->_0).element_class !=
              (TypeInfo__MV__Common__MVGameMode->_0).element_class) {
            FUN_?(pOVar12);
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          (this->fields).gameMode = *(int32_t *)&pOVar12[1].klass;
          pSVar8 = (String *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                   Object]::Dictionary_2_System_Object_System_Object__get_Item
                             ((Dictionary_2_System_Object_System_Object_ *)gameSessionData,
                              (Object *)StringLiteral_language,
                              MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                             );
          if (pSVar8 == (String *)0x0) {
            (this->fields).language = (String *)0x0;
          }
          else {
            pSVar10 = pSVar9;
            if (pSVar8->klass == pSRam0000000182dbbc60) {
              pSVar10 = pSVar8;
            }
            if (pSVar10 == (String *)0x0) {
              FUN_?();
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            (this->fields).language = pSVar10;
            pSVar10 = pSVar9;
            if (pSVar8->klass == pSRam0000000182dbbc60) {
              pSVar10 = pSVar8;
            }
            if (pSVar10 == (String *)0x0) {
              FUN_?();
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
          }
          if (iRam_? != 0) {
            uVar2 = (uint)((ulonglong)&(this->fields).language >> 0xc);
            lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
            do {
              uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
              puVar5 = (ulonglong *)(lVar3 + 0xADDR);
              LOCK();
              bVar6 = uVar4 == *puVar5;
              if (bVar6) {
                *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
              }
              UNLOCK();
            } while (!bVar6);
          }
          pOVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                   Object]::Dictionary_2_System_Object_System_Object__get_Item
                             ((Dictionary_2_System_Object_System_Object_ *)gameSessionData,
                              (Object *)StringLiteral_embedded,
                              MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                             );
          if (pOVar12 != (Object *)0x0) {
            if ((pOVar12->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40))
            {
              FUN_?(pOVar12);
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            (this->fields).embedded = *(bool *)&pOVar12[1].klass;
            pSVar8 = (String *)
                     mscorlib.dll::System::Collections::Generic::CollectionExtensions::
                     CollectionExtensions_GetValueOrDefault_5
                               ((IReadOnlyDictionary_2_System_Object_System_Object_ *)
                                gameSessionData,(Object *)StringLiteral_embeddedSite,
                                (Object *)(this->fields).embeddedSite,
                                System__Object_MethodInfo__System__Collections__Generic__CollectionExtensions__GetValueOrDefault<System::String,_System::Object>_System__Collections__Generic__IReadOnlyDictionary<System::String,_System::Object>__System__String__System__Object_
                               );
            if (pSVar8 == (String *)0x0) {
              (this->fields).embeddedSite = (String *)0x0;
            }
            else {
              pSVar10 = pSVar9;
              if (pSVar8->klass == pSRam0000000182dbbc60) {
                pSVar10 = pSVar8;
              }
              if (pSVar10 == (String *)0x0) {
                FUN_?();
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              (this->fields).embeddedSite = pSVar10;
              pSVar10 = pSVar9;
              if (pSVar8->klass == pSRam0000000182dbbc60) {
                pSVar10 = pSVar8;
              }
              if (pSVar10 == (String *)0x0) {
                FUN_?();
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
            }
            if (iRam_? != 0) {
              uVar2 = (uint)((ulonglong)&(this->fields).embeddedSite >> 0xc);
              lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
              do {
                uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
                puVar5 = (ulonglong *)(lVar3 + 0xADDR);
                LOCK();
                bVar6 = uVar4 == *puVar5;
                if (bVar6) {
                  *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
                }
                UNLOCK();
              } while (!bVar6);
            }
            pSVar8 = (String *)
                     mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                     ::Object]::Dictionary_2_System_Object_System_Object__get_Item
                               ((Dictionary_2_System_Object_System_Object_ *)gameSessionData,
                                (Object *)StringLiteral_token,
                                MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                               );
            if (pSVar8 == (String *)0x0) {
              (this->fields).token = (String *)0x0;
            }
            else {
              pSVar10 = pSVar9;
              if (pSVar8->klass == pSRam0000000182dbbc60) {
                pSVar10 = pSVar8;
              }
              if (pSVar10 == (String *)0x0) {
                FUN_?();
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              (this->fields).token = pSVar10;
              pSVar10 = pSVar9;
              if (pSVar8->klass == pSRam0000000182dbbc60) {
                pSVar10 = pSVar8;
              }
              if (pSVar10 == (String *)0x0) {
                FUN_?();
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
            }
            if (iRam_? != 0) {
              uVar2 = (uint)((ulonglong)&(this->fields).token >> 0xc);
              lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
              do {
                uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
                puVar5 = (ulonglong *)(lVar3 + 0xADDR);
                LOCK();
                bVar6 = uVar4 == *puVar5;
                if (bVar6) {
                  *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
                }
                UNLOCK();
              } while (!bVar6);
            }
            pSVar8 = (String *)
                     mscorlib.dll::System::Collections::Generic::CollectionExtensions::
                     CollectionExtensions_GetValueOrDefault_5
                               ((IReadOnlyDictionary_2_System_Object_System_Object_ *)
                                gameSessionData,(Object *)StringLiteral_sessionToken,
                                (Object *)(this->fields).sessionToken,
                                System__Object_MethodInfo__System__Collections__Generic__CollectionExtensions__GetValueOrDefault<System::String,_System::Object>_System__Collections__Generic__IReadOnlyDictionary<System::String,_System::Object>__System__String__System__Object_
                               );
            if (pSVar8 == (String *)0x0) {
              (this->fields).sessionToken = (String *)0x0;
            }
            else {
              pSVar10 = pSVar9;
              if (pSVar8->klass == pSRam0000000182dbbc60) {
                pSVar10 = pSVar8;
              }
              if (pSVar10 == (String *)0x0) {
                FUN_?();
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              (this->fields).sessionToken = pSVar10;
              pSVar10 = pSVar9;
              if (pSVar8->klass == pSRam0000000182dbbc60) {
                pSVar10 = pSVar8;
              }
              if (pSVar10 == (String *)0x0) {
                FUN_?();
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
            }
            if (iRam_? != 0) {
              uVar2 = (uint)((ulonglong)&(this->fields).sessionToken >> 0xc);
              lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
              do {
                uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
                puVar5 = (ulonglong *)(lVar3 + 0xADDR);
                LOCK();
                bVar6 = uVar4 == *puVar5;
                if (bVar6) {
                  *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
                }
                UNLOCK();
              } while (!bVar6);
            }
            lVar3 = lRam_?;
            uStackX_8 = 0;
            if (*(int *)(lRam_? + 0x28) < 0) {
              if ((*(longlong *)(lRam_? + 0x60) == 0) ||
                 (pSVar8 = pSVar9, (*(byte *)(lRam_? + 0x135) & 8) == 0)) {
                pSVar8 = (String *)FUN_?(lRam_?);
                FUN_?(&pSVar8->fields,&uStackX_8,(longlong)*(int *)(lVar3 + 0xf8) + -0x10);
                if (iRam_? != 0) {
                  uVar2 = (uint)((ulonglong)&pSVar8->fields >> 0xc);
                  lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                  do {
                    uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
                    puVar5 = (ulonglong *)(lVar3 + 0xADDR);
                    LOCK();
                    bVar6 = uVar4 == *puVar5;
                    if (bVar6) {
                      *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar6);
                }
              }
            }
            else {
              pSVar8 = (String *)((ulonglong)uStackX_9 << 8);
            }
            pOVar12 = mscorlib.dll::System::Collections::Generic::CollectionExtensions::
                     CollectionExtensions_GetValueOrDefault_5
                               ((IReadOnlyDictionary_2_System_Object_System_Object_ *)
                                gameSessionData,(Object *)StringLiteral_playButtonAdsEnabledDefault,
                                (Object *)pSVar8,
                                System__Object_MethodInfo__System__Collections__Generic__CollectionExtensions__GetValueOrDefault<System::String,_System::Object>_System__Collections__Generic__IReadOnlyDictionary<System::String,_System::Object>__System__String__System__Object_
                               );
            if (pOVar12 != (Object *)0x0) {
              if ((pOVar12->klass->_0).element_class !=
                  *(Il2CppClass **)(lRam_? + 0x40)) {
                FUN_?(pOVar12);
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              (this->fields).playButtonAdsEnabledDefault = *(bool *)&pOVar12[1].klass;
              lVar3 = lRam_?;
              uStackX_8 = 0;
              if (*(int *)(lRam_? + 0x28) < 0) {
                if ((*(longlong *)(lRam_? + 0x60) == 0) ||
                   (pSVar8 = pSVar9, (*(byte *)(lRam_? + 0x135) & 8) == 0)) {
                  pSVar8 = (String *)FUN_?(lRam_?);
                  FUN_?(&pSVar8->fields,&uStackX_8,(longlong)*(int *)(lVar3 + 0xf8) + -0x10)
                  ;
                  if (iRam_? != 0) {
                    uVar2 = (uint)((ulonglong)&pSVar8->fields >> 0xc);
                    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                    do {
                      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
                      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
                      LOCK();
                      bVar6 = uVar4 == *puVar5;
                      if (bVar6) {
                        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
                      }
                      UNLOCK();
                    } while (!bVar6);
                  }
                }
              }
              else {
                pSVar8 = (String *)((ulonglong)uStackX_9 << 8);
              }
              pOVar12 = mscorlib.dll::System::Collections::Generic::CollectionExtensions::
                       CollectionExtensions_GetValueOrDefault_5
                                 ((IReadOnlyDictionary_2_System_Object_System_Object_ *)
                                  gameSessionData,(Object *)StringLiteral_boostersEnabledDefault,
                                  (Object *)pSVar8,
                                  System__Object_MethodInfo__System__Collections__Generic__CollectionExtensions__GetValueOrDefault<System::String,_System::Object>_System__Collections__Generic__IReadOnlyDictionary<System::String,_System::Object>__System__String__System__Object_
                                 );
              if (pOVar12 != (Object *)0x0) {
                if ((pOVar12->klass->_0).element_class !=
                    *(Il2CppClass **)(lRam_? + 0x40)) {
                  FUN_?(pOVar12);
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                (this->fields).boostersEnabledDefault = *(bool *)&pOVar12[1].klass;
                lVar3 = lRam_?;
                uStackX_8 = 0;
                if (*(int *)(lRam_? + 0x28) < 0) {
                  if ((*(longlong *)(lRam_? + 0x60) == 0) ||
                     (pSVar8 = pSVar9, (*(byte *)(lRam_? + 0x135) & 8) == 0)) {
                    pSVar8 = (String *)FUN_?(lRam_?);
                    FUN_?(&pSVar8->fields,&uStackX_8,
                                  (longlong)*(int *)(lVar3 + 0xf8) + -0x10);
                    if (iRam_? != 0) {
                      uVar2 = (uint)((ulonglong)&pSVar8->fields >> 0xc);
                      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                      do {
                        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
                        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
                        LOCK();
                        bVar6 = uVar4 == *puVar5;
                        if (bVar6) {
                          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
                        }
                        UNLOCK();
                      } while (!bVar6);
                    }
                  }
                }
                else {
                  pSVar8 = (String *)((ulonglong)uStackX_9 << 8);
                }
                pOVar12 = mscorlib.dll::System::Collections::Generic::CollectionExtensions::
                         CollectionExtensions_GetValueOrDefault_5
                                   ((IReadOnlyDictionary_2_System_Object_System_Object_ *)
                                    gameSessionData,
                                    (Object *)StringLiteral_interstitialsAdsEnabledDefault,
                                    (Object *)pSVar8,
                                    System__Object_MethodInfo__System__Collections__Generic__CollectionExtensions__GetValueOrDefault<System::String,_System::Object>_System__Collections__Generic__IReadOnlyDictionary<System::String,_System::Object>__System__String__System__Object_
                                   );
                if (pOVar12 != (Object *)0x0) {
                  if ((pOVar12->klass->_0).element_class !=
                      *(Il2CppClass **)(lRam_? + 0x40)) {
                    FUN_?(pOVar12);
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  (this->fields).interstitialsAdsEnabledDefault = *(bool *)&pOVar12[1].klass;
                  lVar3 = lRam_?;
                  uStackX_8 = 0;
                  if (*(int *)(lRam_? + 0x28) < 0) {
                    if ((*(longlong *)(lRam_? + 0x60) == 0) ||
                       (pSVar8 = pSVar9, (*(byte *)(lRam_? + 0x135) & 8) == 0)) {
                      pSVar8 = (String *)FUN_?(lRam_?);
                      FUN_?(&pSVar8->fields,&uStackX_8,
                                    (longlong)*(int *)(lVar3 + 0xf8) + -0x10);
                      if (iRam_? != 0) {
                        uVar2 = (uint)((ulonglong)&pSVar8->fields >> 0xc);
                        lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                        do {
                          uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
                          puVar5 = (ulonglong *)(lVar3 + 0xADDR);
                          LOCK();
                          bVar6 = uVar4 == *puVar5;
                          if (bVar6) {
                            *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
                          }
                          UNLOCK();
                        } while (!bVar6);
                      }
                    }
                  }
                  else {
                    pSVar8 = (String *)((ulonglong)uStackX_9 << 8);
                  }
                  pOVar12 = mscorlib.dll::System::Collections::Generic::CollectionExtensions::
                           CollectionExtensions_GetValueOrDefault_5
                                     ((IReadOnlyDictionary_2_System_Object_System_Object_ *)
                                      gameSessionData,
                                      (Object *)StringLiteral_rewardedAdsEnabledDefault,
                                      (Object *)pSVar8,
                                      System__Object_MethodInfo__System__Collections__Generic__CollectionExtensions__GetValueOrDefault<System::String,_System::Object>_System__Collections__Generic__IReadOnlyDictionary<System::String,_System::Object>__System__String__System__Object_
                                     );
                  if (pOVar12 != (Object *)0x0) {
                    if ((pOVar12->klass->_0).element_class !=
                        *(Il2CppClass **)(lRam_? + 0x40)) {
                      FUN_?(pOVar12);
                      pcVar11 = (code *)swi(3);
                      (*pcVar11)();
                      return;
                    }
                    (this->fields).rewardedAdsEnabledDefault = *(bool *)&pOVar12[1].klass;
                    pSVar8 = (String *)
                             mscorlib.dll::System::Collections::Generic::CollectionExtensions::
                             CollectionExtensions_GetValueOrDefault_5
                                       ((IReadOnlyDictionary_2_System_Object_System_Object_ *)
                                        gameSessionData,(Object *)StringLiteral_newPlanetName,
                                        (Object *)(this->fields).newPlanetName,
                                        System__Object_MethodInfo__System__Collections__Generic__CollectionExtensions__GetValueOrDefault<System::String,_System::Object>_System__Collections__Generic__IReadOnlyDictionary<System::String,_System::Object>__System__String__System__Object_
                                       );
                    if (pSVar8 == (String *)0x0) {
                      (this->fields).newPlanetName = (String *)0x0;
                    }
                    else {
                      pSVar10 = pSVar9;
                      if (pSVar8->klass == pSRam0000000182dbbc60) {
                        pSVar10 = pSVar8;
                      }
                      if (pSVar10 == (String *)0x0) {
                        FUN_?();
                        pcVar11 = (code *)swi(3);
                        (*pcVar11)();
                        return;
                      }
                      (this->fields).newPlanetName = pSVar10;
                      pSVar10 = pSVar9;
                      if (pSVar8->klass == pSRam0000000182dbbc60) {
                        pSVar10 = pSVar8;
                      }
                      if (pSVar10 == (String *)0x0) {
                        FUN_?();
                        pcVar11 = (code *)swi(3);
                        (*pcVar11)();
                        return;
                      }
                    }
                    if (iRam_? != 0) {
                      uVar2 = (uint)((ulonglong)&(this->fields).newPlanetName >> 0xc);
                      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                      do {
                        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
                        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
                        LOCK();
                        bVar6 = uVar4 == *puVar5;
                        if (bVar6) {
                          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
                        }
                        UNLOCK();
                      } while (!bVar6);
                    }
                    pSVar8 = (String *)
                             mscorlib.dll::System::Collections::Generic::CollectionExtensions::
                             CollectionExtensions_GetValueOrDefault_5
                                       ((IReadOnlyDictionary_2_System_Object_System_Object_ *)
                                        gameSessionData,(Object *)StringLiteral_planetName,
                                        (Object *)(this->fields).planetName,
                                        System__Object_MethodInfo__System__Collections__Generic__CollectionExtensions__GetValueOrDefault<System::String,_System::Object>_System__Collections__Generic__IReadOnlyDictionary<System::String,_System::Object>__System__String__System__Object_
                                       );
                    if (pSVar8 == (String *)0x0) {
                      (this->fields).planetName = (String *)0x0;
                    }
                    else {
                      pSVar10 = pSVar9;
                      if (pSVar8->klass == pSRam0000000182dbbc60) {
                        pSVar10 = pSVar8;
                      }
                      if (pSVar10 == (String *)0x0) {
                        FUN_?();
                        pcVar11 = (code *)swi(3);
                        (*pcVar11)();
                        return;
                      }
                      (this->fields).planetName = pSVar10;
                      pSVar10 = pSVar9;
                      if (pSVar8->klass == pSRam0000000182dbbc60) {
                        pSVar10 = pSVar8;
                      }
                      if (pSVar10 == (String *)0x0) {
                        FUN_?();
                        pcVar11 = (code *)swi(3);
                        (*pcVar11)();
                        return;
                      }
                    }
                    if (iRam_? != 0) {
                      uVar2 = (uint)((ulonglong)&(this->fields).planetName >> 0xc);
                      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                      do {
                        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
                        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
                        LOCK();
                        bVar6 = uVar4 == *puVar5;
                        if (bVar6) {
                          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
                        }
                        UNLOCK();
                      } while (!bVar6);
                    }
                    pSVar8 = (String *)
                             mscorlib.dll::System::Collections::Generic::CollectionExtensions::
                             CollectionExtensions_GetValueOrDefault_5
                                       ((IReadOnlyDictionary_2_System_Object_System_Object_ *)
                                        gameSessionData,(Object *)StringLiteral_planetImageURL,
                                        (Object *)(this->fields).planetImageURL,
                                        System__Object_MethodInfo__System__Collections__Generic__CollectionExtensions__GetValueOrDefault<System::String,_System::Object>_System__Collections__Generic__IReadOnlyDictionary<System::String,_System::Object>__System__String__System__Object_
                                       );
                    if (pSVar8 == (String *)0x0) {
                      (this->fields).planetImageURL = (String *)0x0;
                    }
                    else {
                      pSVar10 = pSVar9;
                      if (pSVar8->klass == pSRam0000000182dbbc60) {
                        pSVar10 = pSVar8;
                      }
                      if (pSVar10 == (String *)0x0) {
                        FUN_?(pSVar8);
                        pcVar11 = (code *)swi(3);
                        (*pcVar11)();
                        return;
                      }
                      (this->fields).planetImageURL = pSVar10;
                      if (pSVar8->klass == pSRam0000000182dbbc60) {
                        pSVar9 = pSVar8;
                      }
                      if (pSVar9 == (String *)0x0) {
                        FUN_?(pSVar8);
                        pcVar11 = (code *)swi(3);
                        (*pcVar11)();
                        return;
                      }
                    }
                    if (iRam_? != 0) {
                      uVar2 = (uint)((ulonglong)&(this->fields).planetImageURL >> 0xc);
                      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                      do {
                        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
                        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
                        LOCK();
                        bVar6 = uVar4 == *puVar5;
                        if (bVar6) {
                          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
                        }
                        UNLOCK();
                      } while (!bVar6);
                    }
                    if ((this->fields).gameMode == 2) {
                      (this->fields).planetID = -1;
                    }
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}

