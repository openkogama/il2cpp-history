
/* Void Initialize(MVAvatar, Boolean) */

void Assembly-CSharp.dll::AvatarRemote::AvatarRemote_Initialize
               (AvatarRemote *this,MVAvatar *mvAvatar,bool isLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__AvatarRemote__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                   );
    func_?(&
                    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                   );
    cRam_? = '\x01';
  }
  Avatar::Avatar_Initialize((Avatar *)this,mvAvatar,isLocal,(MethodInfo *)0x0);
  if (mvAvatar == (MVAvatar *)0x0) {
    func_?();
  }
  else {
    pUVar1 = (mvAvatar->fields)._._.PositionChanged;
    this_00 = (UnityAction_2_System_Object_System_Object_ *)
              func_?(
                             TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_00,(Object *)this,
               MethodInfo__AvatarRemote__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
               ,(MethodInfo *)0x0);
    unaff_ESI = mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pUVar1,(Delegate *)this_00,(MethodInfo *)0x0);
    unaff_EDI = 
    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
    if (unaff_ESI == (Delegate *)0x0) {
      (mvAvatar->fields)._._.PositionChanged =
           (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
      pDStack2 = (Delegate *)&(mvAvatar->fields)._._.PositionChanged;
      pUStack3 =
           (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)unaff_ESI;
      func_?();
      return;
    }
    pUStack3 =
         TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
    pDStack2 = unaff_ESI;
    pUVar1 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)func_?();
    if (pUVar1 != (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
      (mvAvatar->fields)._._.PositionChanged = pUVar1;
      unaff_EDI = 
      TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
      pUStack3 =
           TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
      ;
      pDStack2 = unaff_ESI;
      pUStack3 =
           (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)func_?();
      if (pUStack3 !=
          (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)0x0) {
        pDStack2 = (Delegate *)&(mvAvatar->fields)._._.PositionChanged;
        func_?();
        return;
      }
    }
  }
  pDStack2 = unaff_ESI;
  pUStack3 = unaff_EDI;
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnPositionChanged(MVWorldObjectClient, PositionChangedEventArgs) */

void Assembly-CSharp.dll::AvatarRemote::AvatarRemote_OnPositionChanged
               (AvatarRemote *this,MVWorldObjectClient *arg0,
               PositionChangedEventArgs *positionChangedEventArgs,MethodInfo *method)

{
  pIStack_1 = (Il2CppMethodPointer)&stack0xfffffffc;
  pAVar2 = (this->fields)._.avatarUIHandler;
  if (pAVar2 != (AvatarUIHandler *)0x0) {
    pIStack_1 = (pAVar2->klass->vtable).HandleTeamChange.methodPtr;
    pPStack_3 = positionChangedEventArgs;
    pMStack_4 = arg0;
    (*(code *)(pAVar2->klass->vtable).OnPositionChanged.method)(pAVar2);
    return;
  }
  uVar5 = func_?(&pMStack_4);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* AvatarRemote() */

void Assembly-CSharp.dll::AvatarRemote::AvatarRemote__ctor(AvatarRemote *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifier>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_unsigned_char>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_unsigned_char>
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifier>
                   );
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifier>
                          );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifier>__Dictionary__
            );
  (this->fields)._.modifiers = (Dictionary_2_AvatarModifierPackageType_AvatarModifier_ *)pDVar1;
  func_?(&(this->fields)._.modifiers,pDVar1);
  pDVar1 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_unsigned_char>
                          );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_unsigned_char>__Dictionary__
            );
  (this->fields)._.currentModifierByteState =
       (Dictionary_2_AvatarModifierPackageType_System_Byte_ *)pDVar1;
  func_?(&(this->fields)._.currentModifierByteState,pDVar1);
  pBVar2 = (Byte__Array *)func_?(TypeInfo__System__Byte,0x1c);
  (this->fields)._.modifierEffectCount = pBVar2;
  func_?(&(this->fields)._.modifierEffectCount,pBVar2);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

