
/* Boolean GetBooleanControl(KogamaControls, KeyState) */

bool Assembly-CSharp.dll::MobileInputMap::MobileInputMap_GetBooleanControl
               (MobileInputMap *this,KogamaControls__Enum control,KeyState__Enum keyState,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).ButtonMapping;
  if (pDVar1 != (Dictionary_2_KogamaControls_System_String_ *)0x0) {
    pDVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__get_Keys
                       ((Dictionary_2_WinningConditionType_System_Object_ *)pDVar1,
                        MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__get_Keys__
                       );
    bVar3 = System.Core.dll::System::Linq::Enumerable::Enumerable_Contains_4
                      ((IEnumerable_1_KogamaControls_ *)pDVar2,control,
                       bool_MethodInfo__System__Linq__Enumerable__Contains<KogamaControls>_System__Collections__Generic__IEnumerable<KogamaControls>__KogamaControls_
                      );
    if (bVar3 == 0) {
      pDVar4 = (this->fields).KeyCodeMapping;
      if (pDVar4 != (Dictionary_2_KogamaControls_UnityEngine_KeyCode_ *)0x0) {
        pDVar2 = mscorlib.dll::System::Collections::Generic::
                 Dictionary`2[WinningConditionType,System::Object]::
                 Dictionary_2_WinningConditionType_System_Object__get_Keys
                           ((Dictionary_2_WinningConditionType_System_Object_ *)pDVar4,
                            MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode>__get_Keys__
                           );
        bVar3 = System.Core.dll::System::Linq::Enumerable::Enumerable_Contains_4
                          ((IEnumerable_1_KogamaControls_ *)pDVar2,control,
                           bool_MethodInfo__System__Linq__Enumerable__Contains<KogamaControls>_System__Collections__Generic__IEnumerable<KogamaControls>__KogamaControls_
                          );
        if (bVar3 == 0) {
          pOVar5 = (Object *)func_?();
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?();
          }
          message = mscorlib.dll::System::String::String_Concat
                              ((Object *)StringLiteral_Not_implemented_on_mobile_,pOVar5,
                               (MethodInfo *)0x0);
          if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                    ((Object *)message,(MethodInfo *)0x0);
          return 0;
        }
        if (keyState == KeyState__Enum_Pressed) {
          pDVar4 = (this->fields).KeyCodeMapping;
          if (pDVar4 != (Dictionary_2_KogamaControls_UnityEngine_KeyCode_ *)0x0) {
            KVar6 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[KogamaControls,UnityEngine::KeyCode]::
                    Dictionary_2_KogamaControls_UnityEngine_KeyCode__get_Item
                              (pDVar4,control,
                               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode>__get_Item_KogamaControls_
                              );
            bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Input::Input_GetKey
                              (KVar6,(MethodInfo *)0x0);
            return bVar3;
          }
        }
        else if (keyState == KeyState__Enum_Down) {
          pDVar4 = (this->fields).KeyCodeMapping;
          if (pDVar4 != (Dictionary_2_KogamaControls_UnityEngine_KeyCode_ *)0x0) {
            KVar6 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[KogamaControls,UnityEngine::KeyCode]::
                    Dictionary_2_KogamaControls_UnityEngine_KeyCode__get_Item
                              (pDVar4,control,
                               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode>__get_Item_KogamaControls_
                              );
            bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Input::Input_GetKeyDown
                              (KVar6,(MethodInfo *)0x0);
            return bVar3;
          }
        }
        else {
          if (keyState != KeyState__Enum_Up) {
            return 0;
          }
          pDVar4 = (this->fields).KeyCodeMapping;
          if (pDVar4 != (Dictionary_2_KogamaControls_UnityEngine_KeyCode_ *)0x0) {
            KVar6 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[KogamaControls,UnityEngine::KeyCode]::
                    Dictionary_2_KogamaControls_UnityEngine_KeyCode__get_Item
                              (pDVar4,control,
                               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode>__get_Item_KogamaControls_
                              );
            bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Input::Input_GetKeyUp
                              (KVar6,(MethodInfo *)0x0);
            return bVar3;
          }
        }
      }
    }
    else {
      pDVar1 = (this->fields).ButtonMapping;
      if (pDVar1 != (Dictionary_2_KogamaControls_System_String_ *)0x0) {
        pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[KogamaControls,System::
                 Object]::Dictionary_2_KogamaControls_System_Object__get_Item
                           ((Dictionary_2_KogamaControls_System_Object_ *)pDVar1,control,
                            MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__get_Item_KogamaControls_
                           );
        pMVar7 = (MonitorData *)0x0;
        if (pOVar5 != (Object *)0x0) {
          pOVar8 = pOVar5 + 2;
          while( true ) {
            if ((int)pOVar5[1].monitor <= (int)pMVar7) {
              return 0;
            }
            if (pOVar5[1].monitor <= pMVar7) break;
            name = pOVar8->klass;
            if (keyState == KeyState__Enum_Pressed) {
              if ((((uint)(
                          TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager
                          ->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1)
                  .cctor_started == 0)) {
                func_?();
              }
              bVar3 = UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
                      CrossPlatformInputManager_GetButton((String *)name,(MethodInfo *)0x0);
              return bVar3;
            }
            if (keyState == KeyState__Enum_Down) {
              if ((((uint)(
                          TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager
                          ->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1)
                  .cctor_started == 0)) {
                func_?();
              }
              bVar3 = UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
                      CrossPlatformInputManager_GetButtonDown((String *)name,(MethodInfo *)0x0);
              return bVar3;
            }
            if (keyState == KeyState__Enum_Up) {
              if ((((uint)(
                          TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager
                          ->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1)
                  .cctor_started == 0)) {
                func_?();
              }
              bVar3 = UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
                      CrossPlatformInputManager_GetButtonUp((String *)name,(MethodInfo *)0x0);
              return bVar3;
            }
            pMVar7 = pMVar7 + 1;
            pOVar8 = (Object *)&pOVar8->monitor;
          }
          goto code_?;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  func_?();
  pcVar9 = (code *)swi(3);
  bVar3 = (*pcVar9)();
  return bVar3;
}


/* MobileInputMap() */

void Assembly-CSharp.dll::MobileInputMap::MobileInputMap__ctor
               (MobileInputMap *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_KogamaControls_System_String_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Dictionary__
            );
  pOVar1 = (Object *)func_?(TypeInfo__System__String,1);
  if (pOVar1 == (Object *)0x0) goto code_?;
  if ((StringLiteral_Jump == (String *)0x0) ||
     (iVar2 = func_?(StringLiteral_Jump,(pOVar1->klass->_0).element_class), iVar2 != 0)) {
    if (pOVar1[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar1[2].klass = (Object__Class *)StringLiteral_Jump;
    if (this_00 == (Dictionary_2_KogamaControls_System_String_ *)0x0) {
code_?:
      func_?(0);
      goto code_?;
    }
    mscorlib.dll::System::Collections::Generic::Dictionary`2[KogamaControls,System::Object]::
    Dictionary_2_KogamaControls_System_Object__Add
              ((Dictionary_2_KogamaControls_System_Object_ *)this_00,KogamaControls__Enum_Jump,
               pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
              );
    pOVar1 = (Object *)func_?(TypeInfo__System__String,1);
    if (pOVar1 == (Object *)0x0) goto code_?;
    if ((StringLiteral_Use != (String *)0x0) &&
       (iVar2 = func_?(StringLiteral_Use,(pOVar1->klass->_0).element_class), iVar2 == 0))
    goto code_?;
    if (pOVar1[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar1[2].klass = (Object__Class *)StringLiteral_Use;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[KogamaControls,System::Object]::
    Dictionary_2_KogamaControls_System_Object__Add
              ((Dictionary_2_KogamaControls_System_Object_ *)this_00,KogamaControls__Enum_Use,pOVar1
               ,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
              );
    pOVar1 = (Object *)func_?(TypeInfo__System__String,1);
    if (pOVar1 == (Object *)0x0) goto code_?;
    if ((StringLiteral_Fire != (String *)0x0) &&
       (iVar2 = func_?(StringLiteral_Fire,(pOVar1->klass->_0).element_class), iVar2 == 0))
    goto code_?;
    if (pOVar1[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar1[2].klass = (Object__Class *)StringLiteral_Fire;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[KogamaControls,System::Object]::
    Dictionary_2_KogamaControls_System_Object__Add
              ((Dictionary_2_KogamaControls_System_Object_ *)this_00,KogamaControls__Enum_Fire,
               pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
              );
    pOVar1 = (Object *)func_?(TypeInfo__System__String,1);
    if (pOVar1 == (Object *)0x0) goto code_?;
    if ((StringLiteral_Respawn != (String *)0x0) &&
       (iVar2 = func_?(StringLiteral_Respawn,(pOVar1->klass->_0).element_class), iVar2 == 0
       )) goto code_?;
    if (pOVar1[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar1[2].klass = (Object__Class *)StringLiteral_Respawn;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[KogamaControls,System::Object]::
    Dictionary_2_KogamaControls_System_Object__Add
              ((Dictionary_2_KogamaControls_System_Object_ *)this_00,KogamaControls__Enum_Respawn,
               pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
              );
    pOVar1 = (Object *)func_?(TypeInfo__System__String,1);
    if (pOVar1 == (Object *)0x0) goto code_?;
    if ((StringLiteral_DropWeapon != (String *)0x0) &&
       (iVar2 = func_?(StringLiteral_DropWeapon,(pOVar1->klass->_0).element_class),
       iVar2 == 0)) goto code_?;
    if (pOVar1[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar1[2].klass = (Object__Class *)StringLiteral_DropWeapon;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[KogamaControls,System::Object]::
    Dictionary_2_KogamaControls_System_Object__Add
              ((Dictionary_2_KogamaControls_System_Object_ *)this_00,
               KogamaControls__Enum_DropCurrentItem,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
              );
    pOVar1 = (Object *)func_?(TypeInfo__System__String,1);
    if (pOVar1 == (Object *)0x0) goto code_?;
    if ((StringLiteral_Holster == (String *)0x0) ||
       (iVar2 = func_?(StringLiteral_Holster,(pOVar1->klass->_0).element_class), iVar2 != 0
       )) {
      if (pOVar1[1].monitor == (MonitorData *)0x0) goto code_?;
      pOVar1[2].klass = (Object__Class *)StringLiteral_Holster;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[KogamaControls,System::Object]::
      Dictionary_2_KogamaControls_System_Object__Add
                ((Dictionary_2_KogamaControls_System_Object_ *)this_00,KogamaControls__Enum_Holster,
                 pOVar1,
                 MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
                );
      (this->fields).ButtonMapping = this_00;
      this_01 = (Dictionary_2_KogamaControls_UnityEngine_KeyCode_ *)
                func_?(
                               TypeInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode>
                               );
      System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]
      ::HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode>__Dictionary__
                );
      if (this_01 != (Dictionary_2_KogamaControls_UnityEngine_KeyCode_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[KogamaControls,UnityEngine::
        KeyCode]::Dictionary_2_KogamaControls_UnityEngine_KeyCode__Add
                  (this_01,KogamaControls__Enum_Escape,KeyCode__Enum_Escape,
                   MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode>__Add_KogamaControls__UnityEngine__KeyCode_
                  );
        (this->fields).KeyCodeMapping = this_01;
        ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EBP);
        return;
      }
      goto code_?;
    }
  }
  else {
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
  }
  uVar3 = func_?(0,0);
  func_?(uVar3);
code_?:
  uVar3 = func_?(0,0);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

