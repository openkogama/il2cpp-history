
/* Boolean GetBooleanControl(KogamaControls, KeyState) */

bool Assembly-CSharp.dll::TouchInputMap::TouchInputMap_GetBooleanControl
               (TouchInputMap *this,KogamaControls__Enum control,KeyState__Enum keyState,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__get_Item_KogamaControls_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode>__get_Item_KogamaControls_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__get_Keys__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode>__get_Keys__
                   );
    func_?(&
                    bool_MethodInfo__System__Linq__Enumerable__Contains<KogamaControls>_System__Collections__Generic__IEnumerable<KogamaControls>__KogamaControls_
                   );
    func_?(&TypeInfo__KogamaControls);
    func_?(&StringLiteral_Not_implemented_on_mobile_);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
           (this->fields).ButtonMapping;
  if (pDVar1 != (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                 *)0x0) {
    pDVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
             RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
             Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Keys
                       (pDVar1,
                        MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__get_Keys__
                       );
    bVar3 = System.Core.dll::System::Linq::Enumerable::Enumerable_Contains_2
                      ((IEnumerable_1_System_Object_ *)pDVar2,(Object *)control,
                       bool_MethodInfo__System__Linq__Enumerable__Contains<KogamaControls>_System__Collections__Generic__IEnumerable<KogamaControls>__KogamaControls_
                      );
    if (bVar3 == 0) {
      pDVar1 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                *)(this->fields).KeyCodeMapping;
      if (pDVar1 != (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                     *)0x0) {
        pDVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
                 RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                 Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Keys
                           (pDVar1,
                            MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode>__get_Keys__
                           );
        bVar3 = System.Core.dll::System::Linq::Enumerable::Enumerable_Contains_2
                          ((IEnumerable_1_System_Object_ *)pDVar2,(Object *)control,
                           bool_MethodInfo__System__Linq__Enumerable__Contains<KogamaControls>_System__Collections__Generic__IEnumerable<KogamaControls>__KogamaControls_
                          );
        if (bVar3 == 0) {
          pSVar4 = mscorlib.dll::System::Enum::Enum_ToString
                             ((Enum *)&stack0xfffffff0,(MethodInfo *)0x0);
          pSVar4 = mscorlib.dll::System::String::String_Concat_3
                             (StringLiteral_Not_implemented_on_mobile_,pSVar4,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                    ((Object *)pSVar4,(MethodInfo *)0x0);
          return 0;
        }
        if (keyState == KeyState__Enum_Up) {
          pDVar5 = (Dictionary_2_System_Int32Enum_System_Object_ *)(this->fields).KeyCodeMapping;
          if (pDVar5 != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) {
            pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Int32Enum,System::Object]::
                     Dictionary_2_System_Int32Enum_System_Object__get_Item
                               (pDVar5,control,
                                MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode>__get_Item_KogamaControls_
                               );
            bVar3 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetKeyUp
                              ((KeyCode__Enum)pOVar6,(MethodInfo *)0x0);
            return bVar3;
          }
        }
        else if (keyState == KeyState__Enum_Down) {
          pDVar5 = (Dictionary_2_System_Int32Enum_System_Object_ *)(this->fields).KeyCodeMapping;
          if (pDVar5 != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) {
            pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Int32Enum,System::Object]::
                     Dictionary_2_System_Int32Enum_System_Object__get_Item
                               (pDVar5,control,
                                MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode>__get_Item_KogamaControls_
                               );
            bVar3 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetKeyDown
                              ((KeyCode__Enum)pOVar6,(MethodInfo *)0x0);
            return bVar3;
          }
        }
        else {
          if (keyState != KeyState__Enum_Pressed) {
            return 0;
          }
          pDVar5 = (Dictionary_2_System_Int32Enum_System_Object_ *)(this->fields).KeyCodeMapping;
          if (pDVar5 != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) {
            pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Int32Enum,System::Object]::
                     Dictionary_2_System_Int32Enum_System_Object__get_Item
                               (pDVar5,control,
                                MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode>__get_Item_KogamaControls_
                               );
            bVar3 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetKey
                              ((KeyCode__Enum)pOVar6,(MethodInfo *)0x0);
            return bVar3;
          }
        }
      }
    }
    else {
      this_00 = (this->fields).ButtonMapping;
      if (this_00 != (Dictionary_2_KogamaControls_System_String_ *)0x0) {
        pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,control,
                            MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__get_Item_KogamaControls_
                           );
        pMVar7 = (MonitorData *)0x0;
        if (pOVar6 != (Object *)0x0) {
          pOVar8 = pOVar6 + 2;
          while( true ) {
            if ((int)pOVar6[1].monitor <= (int)pMVar7) {
              return 0;
            }
            if (pOVar6[1].monitor <= pMVar7) break;
            name = pOVar8->klass;
            if (keyState == KeyState__Enum_Up) {
              if ((TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1)
                  .cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              bVar3 = UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
                      CrossPlatformInputManager_GetButtonUp((String *)name,(MethodInfo *)0x0);
              return bVar3;
            }
            if (keyState == KeyState__Enum_Down) {
              if ((TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1)
                  .cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              bVar3 = UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
                      CrossPlatformInputManager_GetButtonDown((String *)name,(MethodInfo *)0x0);
              return bVar3;
            }
            if (keyState == KeyState__Enum_Pressed) {
              if ((TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1)
                  .cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              bVar3 = UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
                      CrossPlatformInputManager_GetButton((String *)name,(MethodInfo *)0x0);
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
  pcVar9 = (code *)swi(3);
  bVar3 = (*pcVar9)();
  return bVar3;
}


/* TouchInputMap() */

void Assembly-CSharp.dll::TouchInputMap::TouchInputMap__ctor(TouchInputMap *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode>__Add_KogamaControls__UnityEngine__KeyCode_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode>
                   );
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral_EditMoveUp);
    func_?(&StringLiteral_TogglePlayInEditor);
    func_?(&StringLiteral_EditMoveRight);
    func_?(&StringLiteral_ToggleLogicRendering);
    func_?(&StringLiteral_ToggleGripdSnapSize);
    func_?(&StringLiteral_FocusOnSelectedModel);
    func_?(&StringLiteral_Holster);
    func_?(&StringLiteral_ToggleFullScreen);
    func_?(&StringLiteral_Respawn);
    func_?(&StringLiteral_ActivatePaintCubeTool);
    func_?(&StringLiteral_MoveDrawPlaneDown);
    func_?(&StringLiteral_ShowChat);
    func_?(&StringLiteral_EditMoveFast);
    func_?(&StringLiteral_PointerSelect);
    func_?(&StringLiteral_DropWeapon);
    func_?(&StringLiteral_ToggleHD);
    func_?(&StringLiteral_EditMoveBackwards);
    func_?(&StringLiteral_OpenInventory);
    func_?(&StringLiteral_Jump);
    func_?(&StringLiteral_ToggleCameraEffects);
    func_?(&StringLiteral_MoveDrawPlaneUp);
    func_?(&StringLiteral_MoveForward);
    func_?(&StringLiteral_EditMoveForward);
    func_?(&StringLiteral_CreateNewModel);
    func_?(&StringLiteral_ActivateDeleteCubeTool);
    func_?(&StringLiteral_ActivateEditCubeTool);
    func_?(&StringLiteral_EditMoveDown);
    func_?(&StringLiteral_ToggleDrawPlane);
    func_?(&StringLiteral_ChangeMaterial);
    func_?(&StringLiteral_Fire);
    func_?(&StringLiteral_ShowPlayerWindow);
    func_?(&StringLiteral_Use);
    func_?(&StringLiteral_EditMoveLeft);
    func_?(&StringLiteral_PointerSelectAlt);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>
                          );
  if (pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    func_?();
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
  }
  else {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)pDVar1,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Dictionary__
              );
    pOVar3 = (Object *)func_?(TypeInfo__System__String,1);
    if (pOVar3 == (Object *)0x0) goto code_?;
    if ((StringLiteral_Jump != (String *)0x0) &&
       (iVar4 = func_?(StringLiteral_Jump,(pOVar3->klass->_0).element_class), iVar4 == 0))
    goto code_?;
    pSVar5 = StringLiteral_Jump;
    if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar3[2].klass = (Object__Class *)StringLiteral_Jump;
    func_?(pOVar3 + 2,pSVar5);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (pDVar1,(Object *)0x21,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
              );
    pOVar3 = (Object *)func_?(TypeInfo__System__String,1);
    if (pOVar3 == (Object *)0x0) goto code_?;
    if ((StringLiteral_Use != (String *)0x0) &&
       (iVar4 = func_?(StringLiteral_Use,(pOVar3->klass->_0).element_class), iVar4 == 0))
    goto code_?;
    pSVar5 = StringLiteral_Use;
    if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar3[2].klass = (Object__Class *)StringLiteral_Use;
    func_?(pOVar3 + 2,pSVar5);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (pDVar1,(Object *)0x14,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
              );
    pOVar3 = (Object *)func_?(TypeInfo__System__String,1);
    if (pOVar3 == (Object *)0x0) goto code_?;
    if ((StringLiteral_Fire != (String *)0x0) &&
       (iVar4 = func_?(StringLiteral_Fire,(pOVar3->klass->_0).element_class), iVar4 == 0))
    goto code_?;
    pSVar5 = StringLiteral_Fire;
    if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar3[2].klass = (Object__Class *)StringLiteral_Fire;
    func_?(pOVar3 + 2,pSVar5);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (pDVar1,(Object *)0x20,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
              );
    pOVar3 = (Object *)func_?(TypeInfo__System__String,1);
    if (pOVar3 == (Object *)0x0) goto code_?;
    if ((StringLiteral_Respawn != (String *)0x0) &&
       (iVar4 = func_?(StringLiteral_Respawn,(pOVar3->klass->_0).element_class), iVar4 == 0
       )) goto code_?;
    pSVar5 = StringLiteral_Respawn;
    if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar3[2].klass = (Object__Class *)StringLiteral_Respawn;
    func_?(pOVar3 + 2,pSVar5);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (pDVar1,(Object *)0x10,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
              );
    pOVar3 = (Object *)func_?(TypeInfo__System__String,1);
    if (pOVar3 == (Object *)0x0) goto code_?;
    if ((StringLiteral_DropWeapon != (String *)0x0) &&
       (iVar4 = func_?(StringLiteral_DropWeapon,(pOVar3->klass->_0).element_class),
       iVar4 == 0)) goto code_?;
    pSVar5 = StringLiteral_DropWeapon;
    if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar3[2].klass = (Object__Class *)StringLiteral_DropWeapon;
    func_?(pOVar3 + 2,pSVar5);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (pDVar1,(Object *)0x13,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
              );
    pOVar3 = (Object *)func_?(TypeInfo__System__String,1);
    if (pOVar3 == (Object *)0x0) goto code_?;
    if ((StringLiteral_Holster != (String *)0x0) &&
       (iVar4 = func_?(StringLiteral_Holster,(pOVar3->klass->_0).element_class), iVar4 == 0
       )) goto code_?;
    pSVar5 = StringLiteral_Holster;
    if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar3[2].klass = (Object__Class *)StringLiteral_Holster;
    func_?(pOVar3 + 2,pSVar5);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (pDVar1,(Object *)0x2b,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
              );
    pOVar3 = (Object *)func_?(TypeInfo__System__String,1);
    if (pOVar3 == (Object *)0x0) goto code_?;
    if ((StringLiteral_PointerSelect != (String *)0x0) &&
       (iVar4 = func_?(StringLiteral_PointerSelect,(pOVar3->klass->_0).element_class),
       iVar4 == 0)) goto code_?;
    pSVar5 = StringLiteral_PointerSelect;
    if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar3[2].klass = (Object__Class *)StringLiteral_PointerSelect;
    func_?(pOVar3 + 2,pSVar5);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (pDVar1,(Object *)0x5,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
              );
    pOVar3 = (Object *)func_?(TypeInfo__System__String,1);
    if (pOVar3 == (Object *)0x0) goto code_?;
    if ((StringLiteral_PointerSelectAlt != (String *)0x0) &&
       (iVar4 = func_?(StringLiteral_PointerSelectAlt,(pOVar3->klass->_0).element_class),
       iVar4 == 0)) goto code_?;
    pSVar5 = StringLiteral_PointerSelectAlt;
    if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar3[2].klass = (Object__Class *)StringLiteral_PointerSelectAlt;
    func_?(pOVar3 + 2,pSVar5);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (pDVar1,(Object *)0x6,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
              );
    pOVar3 = (Object *)func_?(TypeInfo__System__String,1);
    if (pOVar3 == (Object *)0x0) goto code_?;
    if ((StringLiteral_FocusOnSelectedModel != (String *)0x0) &&
       (iVar4 = func_?(StringLiteral_FocusOnSelectedModel,(pOVar3->klass->_0).element_class
                               ), iVar4 == 0)) goto code_?;
    pSVar5 = StringLiteral_FocusOnSelectedModel;
    if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar3[2].klass = (Object__Class *)StringLiteral_FocusOnSelectedModel;
    func_?(pOVar3 + 2,pSVar5);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (pDVar1,(Object *)0x15,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
              );
    pOVar3 = (Object *)func_?(TypeInfo__System__String,1);
    if (pOVar3 == (Object *)0x0) goto code_?;
    if ((StringLiteral_ToggleHD != (String *)0x0) &&
       (iVar4 = func_?(StringLiteral_ToggleHD,(pOVar3->klass->_0).element_class),
       iVar4 == 0)) goto code_?;
    pSVar5 = StringLiteral_ToggleHD;
    if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar3[2].klass = (Object__Class *)StringLiteral_ToggleHD;
    func_?(pOVar3 + 2,pSVar5);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (pDVar1,(Object *)0x28,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
              );
    pOVar3 = (Object *)func_?(TypeInfo__System__String,1);
    if (pOVar3 == (Object *)0x0) goto code_?;
    if ((StringLiteral_MoveForward != (String *)0x0) &&
       (iVar4 = func_?(StringLiteral_MoveForward,(pOVar3->klass->_0).element_class),
       iVar4 == 0)) goto code_?;
    pSVar5 = StringLiteral_MoveForward;
    if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar3[2].klass = (Object__Class *)StringLiteral_MoveForward;
    func_?(pOVar3 + 2,pSVar5);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (pDVar1,(Object *)0x0,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
              );
    pOVar3 = (Object *)func_?(TypeInfo__System__String,1);
    if (pOVar3 == (Object *)0x0) goto code_?;
    if ((StringLiteral_EditMoveForward != (String *)0x0) &&
       (iVar4 = func_?(StringLiteral_EditMoveForward,(pOVar3->klass->_0).element_class),
       iVar4 == 0)) goto code_?;
    pSVar5 = StringLiteral_EditMoveForward;
    if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar3[2].klass = (Object__Class *)StringLiteral_EditMoveForward;
    func_?(pOVar3 + 2,pSVar5);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (pDVar1,(Object *)0x2e,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
              );
    pOVar3 = (Object *)func_?(TypeInfo__System__String,1);
    if (pOVar3 == (Object *)0x0) goto code_?;
    if ((StringLiteral_EditMoveBackwards != (String *)0x0) &&
       (iVar4 = func_?(StringLiteral_EditMoveBackwards,(pOVar3->klass->_0).element_class),
       iVar4 == 0)) goto code_?;
    pSVar5 = StringLiteral_EditMoveBackwards;
    if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar3[2].klass = (Object__Class *)StringLiteral_EditMoveBackwards;
    func_?(pOVar3 + 2,pSVar5);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (pDVar1,(Object *)0x31,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
              );
    pOVar3 = (Object *)func_?(TypeInfo__System__String,1);
    if (pOVar3 == (Object *)0x0) goto code_?;
    if ((StringLiteral_EditMoveLeft != (String *)0x0) &&
       (iVar4 = func_?(StringLiteral_EditMoveLeft,(pOVar3->klass->_0).element_class),
       iVar4 == 0)) goto code_?;
    pSVar5 = StringLiteral_EditMoveLeft;
    if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar3[2].klass = (Object__Class *)StringLiteral_EditMoveLeft;
    func_?(pOVar3 + 2,pSVar5);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (pDVar1,(Object *)0x2f,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
              );
    pOVar3 = (Object *)func_?(TypeInfo__System__String,1);
    if (pOVar3 == (Object *)0x0) goto code_?;
    if ((StringLiteral_EditMoveRight != (String *)0x0) &&
       (iVar4 = func_?(StringLiteral_EditMoveRight,(pOVar3->klass->_0).element_class),
       iVar4 == 0)) goto code_?;
    pSVar5 = StringLiteral_EditMoveRight;
    if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar3[2].klass = (Object__Class *)StringLiteral_EditMoveRight;
    func_?(pOVar3 + 2,pSVar5);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (pDVar1,(Object *)0x30,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
              );
    pOVar3 = (Object *)func_?(TypeInfo__System__String,1);
    if (pOVar3 == (Object *)0x0) goto code_?;
    if ((StringLiteral_EditMoveUp != (String *)0x0) &&
       (iVar4 = func_?(StringLiteral_EditMoveUp,(pOVar3->klass->_0).element_class),
       iVar4 == 0)) goto code_?;
    pSVar5 = StringLiteral_EditMoveUp;
    if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar3[2].klass = (Object__Class *)StringLiteral_EditMoveUp;
    func_?(pOVar3 + 2,pSVar5);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (pDVar1,(Object *)0x2c,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
              );
    pOVar3 = (Object *)func_?(TypeInfo__System__String,1);
    if (pOVar3 == (Object *)0x0) goto code_?;
    if ((StringLiteral_EditMoveDown != (String *)0x0) &&
       (iVar4 = func_?(StringLiteral_EditMoveDown,(pOVar3->klass->_0).element_class),
       iVar4 == 0)) goto code_?;
    pSVar5 = StringLiteral_EditMoveDown;
    if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar3[2].klass = (Object__Class *)StringLiteral_EditMoveDown;
    func_?(pOVar3 + 2,pSVar5);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (pDVar1,(Object *)0x2d,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
              );
    pOVar3 = (Object *)func_?(TypeInfo__System__String,1);
    if (pOVar3 == (Object *)0x0) goto code_?;
    if ((StringLiteral_EditMoveFast != (String *)0x0) &&
       (iVar4 = func_?(StringLiteral_EditMoveFast,(pOVar3->klass->_0).element_class),
       iVar4 == 0)) goto code_?;
    pSVar5 = StringLiteral_EditMoveFast;
    if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar3[2].klass = (Object__Class *)StringLiteral_EditMoveFast;
    func_?(pOVar3 + 2,pSVar5);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (pDVar1,(Object *)0x32,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
              );
    pOVar3 = (Object *)func_?(TypeInfo__System__String,1);
    if (pOVar3 == (Object *)0x0) goto code_?;
    if ((StringLiteral_ToggleDrawPlane != (String *)0x0) &&
       (iVar4 = func_?(StringLiteral_ToggleDrawPlane,(pOVar3->klass->_0).element_class),
       iVar4 == 0)) goto code_?;
    pSVar5 = StringLiteral_ToggleDrawPlane;
    if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar3[2].klass = (Object__Class *)StringLiteral_ToggleDrawPlane;
    func_?(pOVar3 + 2,pSVar5);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (pDVar1,(Object *)0x1f,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
              );
    pOVar3 = (Object *)func_?(TypeInfo__System__String,1);
    if (pOVar3 == (Object *)0x0) goto code_?;
    if ((StringLiteral_ChangeMaterial != (String *)0x0) &&
       (iVar4 = func_?(StringLiteral_ChangeMaterial,(pOVar3->klass->_0).element_class),
       iVar4 == 0)) goto code_?;
    pSVar5 = StringLiteral_ChangeMaterial;
    if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar3[2].klass = (Object__Class *)StringLiteral_ChangeMaterial;
    func_?(pOVar3 + 2,pSVar5);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (pDVar1,(Object *)0x1c,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
              );
    pOVar3 = (Object *)func_?(TypeInfo__System__String,1);
    if (pOVar3 == (Object *)0x0) goto code_?;
    if ((StringLiteral_OpenInventory != (String *)0x0) &&
       (iVar4 = func_?(StringLiteral_OpenInventory,(pOVar3->klass->_0).element_class),
       iVar4 == 0)) goto code_?;
    pSVar5 = StringLiteral_OpenInventory;
    if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar3[2].klass = (Object__Class *)StringLiteral_OpenInventory;
    func_?(pOVar3 + 2,pSVar5);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (pDVar1,(Object *)0x1d,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
              );
    pOVar3 = (Object *)func_?(TypeInfo__System__String,1);
    if (pOVar3 == (Object *)0x0) goto code_?;
    if ((StringLiteral_ActivateEditCubeTool != (String *)0x0) &&
       (iVar4 = func_?(StringLiteral_ActivateEditCubeTool,(pOVar3->klass->_0).element_class
                               ), iVar4 == 0)) goto code_?;
    pSVar5 = StringLiteral_ActivateEditCubeTool;
    if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar3[2].klass = (Object__Class *)StringLiteral_ActivateEditCubeTool;
    func_?(pOVar3 + 2,pSVar5);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (pDVar1,(Object *)0x19,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
              );
    pOVar3 = (Object *)func_?(TypeInfo__System__String,1);
    if (pOVar3 == (Object *)0x0) goto code_?;
    if ((StringLiteral_ActivateDeleteCubeTool != (String *)0x0) &&
       (iVar4 = func_?(StringLiteral_ActivateDeleteCubeTool,
                                (pOVar3->klass->_0).element_class), iVar4 == 0))
    goto code_?;
    pSVar5 = StringLiteral_ActivateDeleteCubeTool;
    if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar3[2].klass = (Object__Class *)StringLiteral_ActivateDeleteCubeTool;
    func_?(pOVar3 + 2,pSVar5);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (pDVar1,(Object *)0x1a,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
              );
    pOVar3 = (Object *)func_?(TypeInfo__System__String,1);
    if (pOVar3 == (Object *)0x0) goto code_?;
    if ((StringLiteral_ActivatePaintCubeTool != (String *)0x0) &&
       (iVar4 = func_?(StringLiteral_ActivatePaintCubeTool,
                                (pOVar3->klass->_0).element_class), iVar4 == 0))
    goto code_?;
    pSVar5 = StringLiteral_ActivatePaintCubeTool;
    if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar3[2].klass = (Object__Class *)StringLiteral_ActivatePaintCubeTool;
    func_?(pOVar3 + 2,pSVar5);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (pDVar1,(Object *)0x1b,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
              );
    pOVar3 = (Object *)func_?(TypeInfo__System__String,1);
    if (pOVar3 == (Object *)0x0) goto code_?;
    if ((StringLiteral_TogglePlayInEditor != (String *)0x0) &&
       (iVar4 = func_?(StringLiteral_TogglePlayInEditor,(pOVar3->klass->_0).element_class),
       iVar4 == 0)) goto code_?;
    pSVar5 = StringLiteral_TogglePlayInEditor;
    if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar3[2].klass = (Object__Class *)StringLiteral_TogglePlayInEditor;
    func_?(pOVar3 + 2,pSVar5);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (pDVar1,(Object *)0x16,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
              );
    pOVar3 = (Object *)func_?(TypeInfo__System__String,1);
    if (pOVar3 == (Object *)0x0) goto code_?;
    if ((StringLiteral_ToggleGripdSnapSize != (String *)0x0) &&
       (iVar4 = func_?(StringLiteral_ToggleGripdSnapSize,(pOVar3->klass->_0).element_class)
       , iVar4 == 0)) goto code_?;
    pSVar5 = StringLiteral_ToggleGripdSnapSize;
    if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar3[2].klass = (Object__Class *)StringLiteral_ToggleGripdSnapSize;
    func_?(pOVar3 + 2,pSVar5);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (pDVar1,(Object *)0x18,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
              );
    pOVar3 = (Object *)func_?(TypeInfo__System__String,1);
    if (pOVar3 == (Object *)0x0) goto code_?;
    if ((StringLiteral_ToggleLogicRendering != (String *)0x0) &&
       (iVar4 = func_?(StringLiteral_ToggleLogicRendering,(pOVar3->klass->_0).element_class
                               ), iVar4 == 0)) goto code_?;
    pSVar5 = StringLiteral_ToggleLogicRendering;
    if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar3[2].klass = (Object__Class *)StringLiteral_ToggleLogicRendering;
    func_?(pOVar3 + 2,pSVar5);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (pDVar1,(Object *)0x17,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
              );
    pOVar3 = (Object *)func_?(TypeInfo__System__String,1);
    if (pOVar3 == (Object *)0x0) goto code_?;
    if ((StringLiteral_ToggleFullScreen != (String *)0x0) &&
       (iVar4 = func_?(StringLiteral_ToggleFullScreen,(pOVar3->klass->_0).element_class),
       iVar4 == 0)) goto code_?;
    pSVar5 = StringLiteral_ToggleFullScreen;
    if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar3[2].klass = (Object__Class *)StringLiteral_ToggleFullScreen;
    func_?(pOVar3 + 2,pSVar5);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (pDVar1,(Object *)0xe,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
              );
    pOVar3 = (Object *)func_?(TypeInfo__System__String,1);
    if (pOVar3 == (Object *)0x0) goto code_?;
    if ((StringLiteral_ShowPlayerWindow != (String *)0x0) &&
       (iVar4 = func_?(StringLiteral_ShowPlayerWindow,(pOVar3->klass->_0).element_class),
       iVar4 == 0)) goto code_?;
    pSVar5 = StringLiteral_ShowPlayerWindow;
    if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar3[2].klass = (Object__Class *)StringLiteral_ShowPlayerWindow;
    func_?(pOVar3 + 2,pSVar5);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (pDVar1,(Object *)0x12,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
              );
    pOVar3 = (Object *)func_?(TypeInfo__System__String,1);
    if (pOVar3 == (Object *)0x0) goto code_?;
    if ((StringLiteral_CreateNewModel != (String *)0x0) &&
       (iVar4 = func_?(StringLiteral_CreateNewModel,(pOVar3->klass->_0).element_class),
       iVar4 == 0)) goto code_?;
    pSVar5 = StringLiteral_CreateNewModel;
    if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar3[2].klass = (Object__Class *)StringLiteral_CreateNewModel;
    func_?(pOVar3 + 2,pSVar5);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (pDVar1,(Object *)0x1e,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
              );
    pOVar3 = (Object *)func_?(TypeInfo__System__String,1);
    if (pOVar3 == (Object *)0x0) goto code_?;
    if ((StringLiteral_ShowChat != (String *)0x0) &&
       (iVar4 = func_?(StringLiteral_ShowChat,(pOVar3->klass->_0).element_class),
       iVar4 == 0)) goto code_?;
    pSVar5 = StringLiteral_ShowChat;
    if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar3[2].klass = (Object__Class *)StringLiteral_ShowChat;
    func_?(pOVar3 + 2,pSVar5);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (pDVar1,(Object *)0xf,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
              );
    pOVar3 = (Object *)func_?(TypeInfo__System__String,1);
    if (pOVar3 == (Object *)0x0) goto code_?;
    if ((StringLiteral_MoveDrawPlaneUp != (String *)0x0) &&
       (iVar4 = func_?(StringLiteral_MoveDrawPlaneUp,(pOVar3->klass->_0).element_class),
       iVar4 == 0)) goto code_?;
    pSVar5 = StringLiteral_MoveDrawPlaneUp;
    if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar3[2].klass = (Object__Class *)StringLiteral_MoveDrawPlaneUp;
    func_?(pOVar3 + 2,pSVar5);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (pDVar1,(Object *)0xb,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
              );
    pOVar3 = (Object *)func_?(TypeInfo__System__String,1);
    if (pOVar3 == (Object *)0x0) goto code_?;
    if ((StringLiteral_MoveDrawPlaneDown != (String *)0x0) &&
       (iVar4 = func_?(StringLiteral_MoveDrawPlaneDown,(pOVar3->klass->_0).element_class),
       iVar4 == 0)) goto code_?;
    pSVar5 = StringLiteral_MoveDrawPlaneDown;
    if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar3[2].klass = (Object__Class *)StringLiteral_MoveDrawPlaneDown;
    func_?(pOVar3 + 2,pSVar5);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (pDVar1,(Object *)0xc,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
              );
    pOVar3 = (Object *)func_?(TypeInfo__System__String,1);
    if (pOVar3 == (Object *)0x0) goto code_?;
    if ((StringLiteral_ToggleCameraEffects == (String *)0x0) ||
       (iVar4 = func_?(StringLiteral_ToggleCameraEffects,(pOVar3->klass->_0).element_class)
       , iVar4 != 0)) {
      pSVar5 = StringLiteral_ToggleCameraEffects;
      if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
      pOVar3[2].klass = (Object__Class *)StringLiteral_ToggleCameraEffects;
      func_?(pOVar3 + 2,pSVar5);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (pDVar1,(Object *)0x34,pOVar3,
                 MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
                );
      (this->fields).ButtonMapping = (Dictionary_2_KogamaControls_System_String_ *)pDVar1;
      func_?(&this->fields,pDVar1);
      pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
               func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode>
                              );
      if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
        ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                  ((ParameterOverride_1_System_Object_ *)pDVar1,
                   MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode>__Dictionary__
                  );
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  (pDVar1,(Object *)0x2a,(Object *)0x1b,
                   MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode>__Add_KogamaControls__UnityEngine__KeyCode_
                  );
        method_00 = (MethodInfo *)&(this->fields).KeyCodeMapping;
        (this->fields).KeyCodeMapping = (Dictionary_2_KogamaControls_UnityEngine_KeyCode_ *)pDVar1;
        func_?(method_00,pDVar1);
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)this,ExceptionArgument__Enum_obj,method_00);
        return;
      }
      goto code_?;
    }
  }
  uVar2 = func_?(0);
  func_?(uVar2);
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

