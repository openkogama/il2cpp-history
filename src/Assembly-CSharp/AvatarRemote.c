
/* Void Initialize(MVAvatar, Boolean) */

void Assembly-CSharp.dll::AvatarRemote::AvatarRemote_Initialize
               (AvatarRemote *this,MVAvatar *mvAvatar,bool isLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__AvatarRemote__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  Avatar::Avatar_Initialize((Avatar *)this,mvAvatar,isLocal,(MethodInfo *)0x0);
  if (mvAvatar == (MVAvatar *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pUVar2 = (mvAvatar->fields)._._.PositionChanged;
  this_00 = (UnityAction_2_System_Object_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                         );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__AvatarRemote__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
             ,(MethodInfo *)0x0);
  pDVar3 = mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pUVar2,(Delegate *)this_00,(MethodInfo *)0x0);
  pUVar4 = TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
  ;
  if (pDVar3 == (Delegate *)0x0) {
    (mvAvatar->fields)._._.PositionChanged =
         (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
  }
  else {
    pUVar2 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
             FUN_?(pDVar3,
                           TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                          );
    if (pUVar2 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
      FUN_?(pDVar3,pUVar4);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (mvAvatar->fields)._._.PositionChanged = pUVar2;
    pUVar4 = 
    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
    lVar5 = FUN_?(pDVar3,
                          TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                         );
    if (lVar5 == 0) {
      FUN_?(pDVar3,pUVar4);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)&(mvAvatar->fields)._._.PositionChanged >> 0xc);
    puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar8 = *puVar7;
      LOCK();
      uVar9 = *puVar7;
      if (uVar8 == uVar9) {
        *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (uVar8 != uVar9);
  }
  return;
}


/* Void OnPositionChanged(MVWorldObjectClient, PositionChangedEventArgs) */

void Assembly-CSharp.dll::AvatarRemote::AvatarRemote_OnPositionChanged
               (AvatarRemote *this,MVWorldObjectClient *arg0,
               PositionChangedEventArgs *positionChangedEventArgs,MethodInfo *method)

{
  pAVar1 = (this->fields)._.avatarUIHandler;
  if (pAVar1 != (AvatarUIHandler *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pAVar1->klass->vtable).OnPositionChanged.methodPtr)();
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* AvatarRemote() */

void Assembly-CSharp.dll::AvatarRemote::AvatarRemote__ctor(AvatarRemote *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifier>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_unsigned_char>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_unsigned_char>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifier>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifier>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifier>__Dictionary__
            );
  bVar1 = iRam_? != 0;
  (this->fields)._.modifiers = (Dictionary_2_AvatarModifierPackageType_AvatarModifier_ *)this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._.modifiers >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pDVar6 = (Dictionary_2_AvatarModifierPackageType_System_Byte_ *)
           FUN_?(
                        TypeInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_unsigned_char>
                        );
  pEVar7 = mscorlib.dll::System::Collections::Generic::EqualityComparer`1[System::Int32Enum]::
           EqualityComparer_1_System_Int32Enum__get_Default
                     (MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_unsigned_char>__Dictionary__
                      ->klass->rgctx_data->method->klass->rgctx_data[3].method);
  if ((pEVar7 != (EqualityComparer_1_System_Int32Enum_ *)0x0) &&
     (bVar1 = iRam_? != 0,
     (pDVar6->fields)._comparer = (IEqualityComparer_1_AvatarModifierPackageType_ *)0x0, bVar1)) {
    uVar2 = (uint)((ulonglong)&(pDVar6->fields)._comparer >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  bVar1 = iRam_? != 0;
  (this->fields)._.currentModifierByteState = pDVar6;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._.currentModifierByteState >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pBVar8 = (Byte__Array *)FUN_?(TypeInfo__System__Byte,0x1c);
  bVar1 = iRam_? != 0;
  (this->fields)._.modifierEffectCount = pBVar8;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._.modifierEffectCount >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  return;
}

