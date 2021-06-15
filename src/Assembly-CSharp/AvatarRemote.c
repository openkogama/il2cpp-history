
/* Void Initialize(MVAvatar, Boolean) */

void Assembly-CSharp.dll::AvatarRemote::AvatarRemote_Initialize
               (AvatarRemote *this,MVAvatar *mvAvatar,bool isLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  Avatar::Avatar_1_Initialize((Avatar_1 *)this,mvAvatar,isLocal,(MethodInfo *)0x0);
  if (mvAvatar != (MVAvatar *)0x0) {
    pUVar1 = (mvAvatar->fields)._._.PositionChanged;
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,unaff_ESI,
               MethodInfo__AvatarRemote__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
               ,
               MethodInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>__UnityAction_System__Object__void__
              );
    pUStack2 =
         (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
         mscorlib.dll::System::Delegate::Delegate_Combine
                   ((Delegate *)pUVar1,(Delegate *)this_00,(MethodInfo *)0x0);
    pUVar1 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
    if (pUStack2 != (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
      if (pUStack2->klass ==
          TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>)
      {
        pUVar1 = pUStack2;
      }
      pUStack3 =
           TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
      ;
      if (pUVar1 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0)
      goto code_?;
    }
    (mvAvatar->fields)._._.PositionChanged = pUVar1;
    return;
  }
  func_?();
  pUStack2 = extraout_ECX;
  pUStack3 = extraout_EDX;
code_?:
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
  pAVar1 = (this->fields)._.avatarUIHandler;
  if (pAVar1 != (AvatarUIHandler *)0x0) {
    (*(code *)(pAVar1->klass->vtable).OnPositionChanged.method)
              (pAVar1,arg0,positionChangedEventArgs,
               (pAVar1->klass->vtable).HandleTeamChange.methodPtr);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* AvatarRemote() */

void Assembly-CSharp.dll::AvatarRemote::AvatarRemote__ctor(AvatarRemote *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_AvatarModifierPackageType_AvatarModifier_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifier>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifier>__Dictionary__
            );
  (this->fields)._.modifiers = this_00;
  this_01 = (Dictionary_2_AvatarModifierPackageType_System_Byte_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_unsigned_char>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_01,
             MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_unsigned_char>__Dictionary__
            );
  (this->fields)._.currentModifierByteState = this_01;
  pBVar1 = (Byte__Array *)func_?(TypeInfo__System__Byte,0x1b);
  (this->fields)._.modifierEffectCount = pBVar1;
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
  return;
}

