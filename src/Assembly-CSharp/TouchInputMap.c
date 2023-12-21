
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
  pDVar1 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
            *)(this->fields).ButtonMapping;
  if (pDVar1 != (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                 *)0x0) {
    pDVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
             StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
             Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Keys
                       (pDVar1,
                        MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__get_Keys__
                       );
    bVar3 = System.Core.dll::System::Linq::Enumerable::Enumerable_Contains_1
                      ((IEnumerable_1_System_Int32Enum_ *)pDVar2,control,
                       bool_MethodInfo__System__Linq__Enumerable__Contains<KogamaControls>_System__Collections__Generic__IEnumerable<KogamaControls>__KogamaControls_
                      );
    if (bVar3 == 0) {
      pDVar1 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                *)(this->fields).KeyCodeMapping;
      if (pDVar1 != (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                     *)0x0) {
        pDVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                 StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                 Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Keys
                           (pDVar1,
                            MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode>__get_Keys__
                           );
        bVar3 = System.Core.dll::System::Linq::Enumerable::Enumerable_Contains_1
                          ((IEnumerable_1_System_Int32Enum_ *)pDVar2,control,
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
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
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
    func_?(&StringLiteral_ActivatePickColorTool);
    func_?(&StringLiteral_ShowPlayerWindow);
    func_?(&StringLiteral_Use);
    func_?(&StringLiteral_EditMoveLeft);
    func_?(&StringLiteral_PointerSelectAlt);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>
                          );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Dictionary__
            );
  pOVar2 = (Object *)func_?(TypeInfo__System__String,1);
  pSVar3 = StringLiteral_Jump;
  if (pOVar2 != (Object *)0x0) {
    if (pOVar2[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar2[2].klass = (Object__Class *)StringLiteral_Jump;
    func_?(pOVar2 + 2,pSVar3);
    if (pDVar1 != (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
      Dictionary_2_System_Int32Enum_System_Object__Add
                ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,0x21,pOVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
                );
      pOVar2 = (Object *)func_?(TypeInfo__System__String,1);
      pSVar3 = StringLiteral_Use;
      if (pOVar2 != (Object *)0x0) {
        if (pOVar2[1].monitor == (MonitorData *)0x0) goto code_?;
        pOVar2[2].klass = (Object__Class *)StringLiteral_Use;
        func_?(pOVar2 + 2,pSVar3);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
        Dictionary_2_System_Int32Enum_System_Object__Add
                  ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,0x14,pOVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
                  );
        pOVar2 = (Object *)func_?(TypeInfo__System__String,1);
        pSVar3 = StringLiteral_Fire;
        if (pOVar2 != (Object *)0x0) {
          if (pOVar2[1].monitor == (MonitorData *)0x0) goto code_?;
          pOVar2[2].klass = (Object__Class *)StringLiteral_Fire;
          func_?(pOVar2 + 2,pSVar3);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]
          ::Dictionary_2_System_Int32Enum_System_Object__Add
                    ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,0x20,pOVar2,
                     MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
                    );
          pOVar2 = (Object *)func_?(TypeInfo__System__String,1);
          pSVar3 = StringLiteral_Respawn;
          if (pOVar2 != (Object *)0x0) {
            if (pOVar2[1].monitor == (MonitorData *)0x0) goto code_?;
            pOVar2[2].klass = (Object__Class *)StringLiteral_Respawn;
            func_?(pOVar2 + 2,pSVar3);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
            Object]::Dictionary_2_System_Int32Enum_System_Object__Add
                      ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,0x10,pOVar2,
                       MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
                      );
            pOVar2 = (Object *)func_?(TypeInfo__System__String,1);
            pSVar3 = StringLiteral_DropWeapon;
            if (pOVar2 != (Object *)0x0) {
              if (pOVar2[1].monitor == (MonitorData *)0x0) goto code_?;
              pOVar2[2].klass = (Object__Class *)StringLiteral_DropWeapon;
              func_?(pOVar2 + 2,pSVar3);
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
              Object]::Dictionary_2_System_Int32Enum_System_Object__Add
                        ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,0x13,pOVar2,
                         MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
                        );
              pOVar2 = (Object *)func_?(TypeInfo__System__String,1);
              pSVar3 = StringLiteral_Holster;
              if (pOVar2 != (Object *)0x0) {
                if (pOVar2[1].monitor == (MonitorData *)0x0) goto code_?;
                pOVar2[2].klass = (Object__Class *)StringLiteral_Holster;
                func_?(pOVar2 + 2,pSVar3);
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Object]::Dictionary_2_System_Int32Enum_System_Object__Add
                          ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,0x2b,pOVar2,
                           MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
                          );
                pOVar2 = (Object *)func_?(TypeInfo__System__String,1);
                pSVar3 = StringLiteral_PointerSelect;
                if (pOVar2 != (Object *)0x0) {
                  if (pOVar2[1].monitor == (MonitorData *)0x0) goto code_?;
                  pOVar2[2].klass = (Object__Class *)StringLiteral_PointerSelect;
                  func_?(pOVar2 + 2,pSVar3);
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                  ::Object]::Dictionary_2_System_Int32Enum_System_Object__Add
                            ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,5,pOVar2,
                             MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
                            );
                  pOVar2 = (Object *)func_?(TypeInfo__System__String,1);
                  pSVar3 = StringLiteral_PointerSelectAlt;
                  if (pOVar2 != (Object *)0x0) {
                    if (pOVar2[1].monitor == (MonitorData *)0x0) goto code_?;
                    pOVar2[2].klass = (Object__Class *)StringLiteral_PointerSelectAlt;
                    func_?(pOVar2 + 2,pSVar3);
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__Add
                              ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,6,pOVar2,
                               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
                              );
                    pOVar2 = (Object *)func_?(TypeInfo__System__String,1);
                    pSVar3 = StringLiteral_FocusOnSelectedModel;
                    if (pOVar2 != (Object *)0x0) {
                      if (pOVar2[1].monitor == (MonitorData *)0x0) goto code_?;
                      pOVar2[2].klass = (Object__Class *)StringLiteral_FocusOnSelectedModel;
                      func_?(pOVar2 + 2,pSVar3);
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__Add
                                ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,0x15,pOVar2,
                                 MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
                                );
                      pOVar2 = (Object *)func_?(TypeInfo__System__String,1);
                      pSVar3 = StringLiteral_ToggleHD;
                      if (pOVar2 != (Object *)0x0) {
                        if (pOVar2[1].monitor == (MonitorData *)0x0) goto code_?;
                        pOVar2[2].klass = (Object__Class *)StringLiteral_ToggleHD;
                        func_?(pOVar2 + 2,pSVar3);
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__Add
                                  ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,0x28,
                                   pOVar2,
                                   MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
                                  );
                        pOVar2 = (Object *)func_?(TypeInfo__System__String,1);
                        pSVar3 = StringLiteral_MoveForward;
                        if (pOVar2 != (Object *)0x0) {
                          if (pOVar2[1].monitor == (MonitorData *)0x0) goto code_?;
                          pOVar2[2].klass = (Object__Class *)StringLiteral_MoveForward;
                          func_?(pOVar2 + 2,pSVar3);
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32Enum,System::Object]::
                          Dictionary_2_System_Int32Enum_System_Object__Add
                                    ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,0,pOVar2
                                     ,
                                     MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
                                    );
                          pOVar2 = (Object *)func_?(TypeInfo__System__String,1);
                          pSVar3 = StringLiteral_EditMoveForward;
                          if (pOVar2 != (Object *)0x0) {
                            if (pOVar2[1].monitor == (MonitorData *)0x0) goto code_?;
                            pOVar2[2].klass = (Object__Class *)StringLiteral_EditMoveForward;
                            func_?(pOVar2 + 2,pSVar3);
                            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Int32Enum,System::Object]::
                            Dictionary_2_System_Int32Enum_System_Object__Add
                                      ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,0x2e,
                                       pOVar2,
                                       MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
                                      );
                            pOVar2 = (Object *)func_?(TypeInfo__System__String,1);
                            pSVar3 = StringLiteral_EditMoveBackwards;
                            if (pOVar2 != (Object *)0x0) {
                              if (pOVar2[1].monitor == (MonitorData *)0x0) goto code_?;
                              pOVar2[2].klass = (Object__Class *)StringLiteral_EditMoveBackwards;
                              func_?(pOVar2 + 2,pSVar3);
                              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              Int32Enum,System::Object]::
                              Dictionary_2_System_Int32Enum_System_Object__Add
                                        ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,0x31
                                         ,pOVar2,
                                         MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
                                        );
                              pOVar2 = (Object *)func_?(TypeInfo__System__String,1);
                              pSVar3 = StringLiteral_EditMoveLeft;
                              if (pOVar2 != (Object *)0x0) {
                                if (pOVar2[1].monitor == (MonitorData *)0x0) goto code_?;
                                pOVar2[2].klass = (Object__Class *)StringLiteral_EditMoveLeft;
                                func_?(pOVar2 + 2,pSVar3);
                                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                Int32Enum,System::Object]::
                                Dictionary_2_System_Int32Enum_System_Object__Add
                                          ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,
                                           0x2f,pOVar2,
                                           MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
                                          );
                                pOVar2 = (Object *)func_?(TypeInfo__System__String,1);
                                pSVar3 = StringLiteral_EditMoveRight;
                                if (pOVar2 != (Object *)0x0) {
                                  if (pOVar2[1].monitor == (MonitorData *)0x0)
                                  goto code_?;
                                  pOVar2[2].klass = (Object__Class *)StringLiteral_EditMoveRight;
                                  func_?(pOVar2 + 2,pSVar3);
                                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                  Int32Enum,System::Object]::
                                  Dictionary_2_System_Int32Enum_System_Object__Add
                                            ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,
                                             0x30,pOVar2,
                                             MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
                                            );
                                  pOVar2 = (Object *)func_?(TypeInfo__System__String,1);
                                  pSVar3 = StringLiteral_EditMoveUp;
                                  if (pOVar2 != (Object *)0x0) {
                                    if (pOVar2[1].monitor == (MonitorData *)0x0)
                                    goto code_?;
                                    pOVar2[2].klass = (Object__Class *)StringLiteral_EditMoveUp;
                                    func_?(pOVar2 + 2,pSVar3);
                                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System
                                    ::Int32Enum,System::Object]::
                                    Dictionary_2_System_Int32Enum_System_Object__Add
                                              ((Dictionary_2_System_Int32Enum_System_Object_ *)
                                               pDVar1,0x2c,pOVar2,
                                               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
                                              );
                                    pOVar2 = (Object *)func_?(TypeInfo__System__String,1);
                                    pSVar3 = StringLiteral_EditMoveDown;
                                    if (pOVar2 != (Object *)0x0) {
                                      if (pOVar2[1].monitor == (MonitorData *)0x0)
                                      goto code_?;
                                      pOVar2[2].klass = (Object__Class *)StringLiteral_EditMoveDown;
                                      func_?(pOVar2 + 2,pSVar3);
                                      mscorlib.dll::System::Collections::Generic::
                                      Dictionary`2[System::Int32Enum,System::Object]::
                                      Dictionary_2_System_Int32Enum_System_Object__Add
                                                ((Dictionary_2_System_Int32Enum_System_Object_ *)
                                                 pDVar1,0x2d,pOVar2,
                                                 MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
                                                );
                                      pOVar2 = (Object *)func_?(TypeInfo__System__String,1)
                                      ;
                                      pSVar3 = StringLiteral_EditMoveFast;
                                      if (pOVar2 != (Object *)0x0) {
                                        if (pOVar2[1].monitor == (MonitorData *)0x0)
                                        goto code_?;
                                        pOVar2[2].klass =
                                             (Object__Class *)StringLiteral_EditMoveFast;
                                        func_?(pOVar2 + 2,pSVar3);
                                        mscorlib.dll::System::Collections::Generic::
                                        Dictionary`2[System::Int32Enum,System::Object]::
                                        Dictionary_2_System_Int32Enum_System_Object__Add
                                                  ((Dictionary_2_System_Int32Enum_System_Object_ *)
                                                   pDVar1,0x32,pOVar2,
                                                                                                      
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
                                                  );
                                        pOVar2 = (Object *)
                                                 func_?(TypeInfo__System__String,1);
                                        pSVar3 = StringLiteral_ToggleDrawPlane;
                                        if (pOVar2 != (Object *)0x0) {
                                          if (pOVar2[1].monitor == (MonitorData *)0x0)
                                          goto code_?;
                                          pOVar2[2].klass =
                                               (Object__Class *)StringLiteral_ToggleDrawPlane;
                                          func_?(pOVar2 + 2,pSVar3);
                                          mscorlib.dll::System::Collections::Generic::
                                          Dictionary`2[System::Int32Enum,System::Object]::
                                          Dictionary_2_System_Int32Enum_System_Object__Add
                                                    ((Dictionary_2_System_Int32Enum_System_Object_ *
                                                     )pDVar1,0x1f,pOVar2,
                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
                                                  );
                                          pOVar2 = (Object *)
                                                   func_?(TypeInfo__System__String,1);
                                          pSVar3 = StringLiteral_ChangeMaterial;
                                          if (pOVar2 != (Object *)0x0) {
                                            if (pOVar2[1].monitor == (MonitorData *)0x0)
                                            goto code_?;
                                            pOVar2[2].klass =
                                                 (Object__Class *)StringLiteral_ChangeMaterial;
                                            func_?(pOVar2 + 2,pSVar3);
                                            mscorlib.dll::System::Collections::Generic::
                                            Dictionary`2[System::Int32Enum,System::Object]::
                                            Dictionary_2_System_Int32Enum_System_Object__Add
                                                      ((Dictionary_2_System_Int32Enum_System_Object_
                                                        *)pDVar1,0x1c,pOVar2,
                                                                                                              
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
                                                  );
                                            pOVar2 = (Object *)
                                                     func_?(TypeInfo__System__String,1);
                                            pSVar3 = StringLiteral_OpenInventory;
                                            if (pOVar2 != (Object *)0x0) {
                                              if (pOVar2[1].monitor == (MonitorData *)0x0)
                                              goto code_?;
                                              pOVar2[2].klass =
                                                   (Object__Class *)StringLiteral_OpenInventory;
                                              func_?(pOVar2 + 2,pSVar3);
                                              mscorlib.dll::System::Collections::Generic::
                                              Dictionary`2[System::Int32Enum,System::Object]::
                                              Dictionary_2_System_Int32Enum_System_Object__Add
                                                        ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  pDVar1,0x1d,pOVar2,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
                                                  );
                                              pOVar2 = (Object *)
                                                       func_?(TypeInfo__System__String,1);
                                              pSVar3 = StringLiteral_ActivateEditCubeTool;
                                              if (pOVar2 != (Object *)0x0) {
                                                if (pOVar2[1].monitor == (MonitorData *)0x0)
                                                goto code_?;
                                                pOVar2[2].klass =
                                                     (Object__Class *)
                                                     StringLiteral_ActivateEditCubeTool;
                                                func_?(pOVar2 + 2,pSVar3);
                                                mscorlib.dll::System::Collections::Generic::
                                                Dictionary`2[System::Int32Enum,System::Object]::
                                                Dictionary_2_System_Int32Enum_System_Object__Add
                                                          ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  pDVar1,0x19,pOVar2,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
                                                  );
                                                pOVar2 = (Object *)
                                                         func_?(TypeInfo__System__String,1)
                                                ;
                                                pSVar3 = StringLiteral_ActivateDeleteCubeTool;
                                                if (pOVar2 != (Object *)0x0) {
                                                  if (pOVar2[1].monitor == (MonitorData *)0x0)
                                                  goto code_?;
                                                  pOVar2[2].klass =
                                                       (Object__Class *)
                                                       StringLiteral_ActivateDeleteCubeTool;
                                                  func_?(pOVar2 + 2,pSVar3);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Int32Enum,System::Object]::
                                                  Dictionary_2_System_Int32Enum_System_Object__Add
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  pDVar1,0x1a,pOVar2,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
                                                  );
                                                  pOVar2 = (Object *)
                                                           func_?(TypeInfo__System__String,
                                                                           1);
                                                  pSVar3 = StringLiteral_ActivatePaintCubeTool;
                                                  if (pOVar2 != (Object *)0x0) {
                                                    if (pOVar2[1].monitor == (MonitorData *)0x0)
                                                    goto code_?;
                                                    pOVar2[2].klass =
                                                         (Object__Class *)
                                                         StringLiteral_ActivatePaintCubeTool;
                                                    func_?(pOVar2 + 2,pSVar3);
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                    Dictionary_2_System_Int32Enum_System_Object__Add
                                                              ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  pDVar1,0x1b,pOVar2,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
                                                  );
                                                  pOVar2 = (Object *)
                                                           func_?(TypeInfo__System__String,
                                                                           1);
                                                  pSVar3 = StringLiteral_ActivatePickColorTool;
                                                  if (pOVar2 != (Object *)0x0) {
                                                    if (pOVar2[1].monitor == (MonitorData *)0x0)
                                                    goto code_?;
                                                    pOVar2[2].klass =
                                                         (Object__Class *)
                                                         StringLiteral_ActivatePickColorTool;
                                                    func_?(pOVar2 + 2,pSVar3);
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                    Dictionary_2_System_Int32Enum_System_Object__Add
                                                              ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  pDVar1,0x35,pOVar2,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
                                                  );
                                                  pOVar2 = (Object *)
                                                           func_?(TypeInfo__System__String,
                                                                           1);
                                                  pSVar3 = StringLiteral_TogglePlayInEditor;
                                                  if (pOVar2 != (Object *)0x0) {
                                                    if (pOVar2[1].monitor == (MonitorData *)0x0)
                                                    goto code_?;
                                                    pOVar2[2].klass =
                                                         (Object__Class *)
                                                         StringLiteral_TogglePlayInEditor;
                                                    func_?(pOVar2 + 2,pSVar3);
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                    Dictionary_2_System_Int32Enum_System_Object__Add
                                                              ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  pDVar1,0x16,pOVar2,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
                                                  );
                                                  pOVar2 = (Object *)
                                                           func_?(TypeInfo__System__String,
                                                                           1);
                                                  pSVar3 = StringLiteral_ToggleGripdSnapSize;
                                                  if (pOVar2 != (Object *)0x0) {
                                                    if (pOVar2[1].monitor == (MonitorData *)0x0)
                                                    goto code_?;
                                                    pOVar2[2].klass =
                                                         (Object__Class *)
                                                         StringLiteral_ToggleGripdSnapSize;
                                                    func_?(pOVar2 + 2,pSVar3);
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                    Dictionary_2_System_Int32Enum_System_Object__Add
                                                              ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  pDVar1,0x18,pOVar2,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
                                                  );
                                                  pOVar2 = (Object *)
                                                           func_?(TypeInfo__System__String,
                                                                           1);
                                                  pSVar3 = StringLiteral_ToggleLogicRendering;
                                                  if (pOVar2 != (Object *)0x0) {
                                                    if (pOVar2[1].monitor == (MonitorData *)0x0)
                                                    goto code_?;
                                                    pOVar2[2].klass =
                                                         (Object__Class *)
                                                         StringLiteral_ToggleLogicRendering;
                                                    func_?(pOVar2 + 2,pSVar3);
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                    Dictionary_2_System_Int32Enum_System_Object__Add
                                                              ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  pDVar1,0x17,pOVar2,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
                                                  );
                                                  pOVar2 = (Object *)
                                                           func_?(TypeInfo__System__String,
                                                                           1);
                                                  pSVar3 = StringLiteral_ToggleFullScreen;
                                                  if (pOVar2 != (Object *)0x0) {
                                                    if (pOVar2[1].monitor == (MonitorData *)0x0)
                                                    goto code_?;
                                                    pOVar2[2].klass =
                                                         (Object__Class *)
                                                         StringLiteral_ToggleFullScreen;
                                                    func_?(pOVar2 + 2,pSVar3);
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                    Dictionary_2_System_Int32Enum_System_Object__Add
                                                              ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  pDVar1,0xe,pOVar2,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
                                                  );
                                                  pOVar2 = (Object *)
                                                           func_?(TypeInfo__System__String,
                                                                           1);
                                                  pSVar3 = StringLiteral_ShowPlayerWindow;
                                                  if (pOVar2 != (Object *)0x0) {
                                                    if (pOVar2[1].monitor == (MonitorData *)0x0)
                                                    goto code_?;
                                                    pOVar2[2].klass =
                                                         (Object__Class *)
                                                         StringLiteral_ShowPlayerWindow;
                                                    func_?(pOVar2 + 2,pSVar3);
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                    Dictionary_2_System_Int32Enum_System_Object__Add
                                                              ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  pDVar1,0x12,pOVar2,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
                                                  );
                                                  pOVar2 = (Object *)
                                                           func_?(TypeInfo__System__String,
                                                                           1);
                                                  pSVar3 = StringLiteral_CreateNewModel;
                                                  if (pOVar2 != (Object *)0x0) {
                                                    if (pOVar2[1].monitor == (MonitorData *)0x0)
                                                    goto code_?;
                                                    pOVar2[2].klass =
                                                         (Object__Class *)
                                                         StringLiteral_CreateNewModel;
                                                    func_?(pOVar2 + 2,pSVar3);
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                    Dictionary_2_System_Int32Enum_System_Object__Add
                                                              ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  pDVar1,0x1e,pOVar2,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
                                                  );
                                                  pOVar2 = (Object *)
                                                           func_?(TypeInfo__System__String,
                                                                           1);
                                                  pSVar3 = StringLiteral_ShowChat;
                                                  if (pOVar2 != (Object *)0x0) {
                                                    if (pOVar2[1].monitor == (MonitorData *)0x0)
                                                    goto code_?;
                                                    pOVar2[2].klass =
                                                         (Object__Class *)StringLiteral_ShowChat;
                                                    func_?(pOVar2 + 2,pSVar3);
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                    Dictionary_2_System_Int32Enum_System_Object__Add
                                                              ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  pDVar1,0xf,pOVar2,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
                                                  );
                                                  pOVar2 = (Object *)
                                                           func_?(TypeInfo__System__String,
                                                                           1);
                                                  pSVar3 = StringLiteral_MoveDrawPlaneUp;
                                                  if (pOVar2 != (Object *)0x0) {
                                                    if (pOVar2[1].monitor == (MonitorData *)0x0)
                                                    goto code_?;
                                                    pOVar2[2].klass =
                                                         (Object__Class *)
                                                         StringLiteral_MoveDrawPlaneUp;
                                                    func_?(pOVar2 + 2,pSVar3);
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                    Dictionary_2_System_Int32Enum_System_Object__Add
                                                              ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  pDVar1,0xb,pOVar2,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
                                                  );
                                                  pOVar2 = (Object *)
                                                           func_?(TypeInfo__System__String,
                                                                           1);
                                                  pSVar3 = StringLiteral_MoveDrawPlaneDown;
                                                  if (pOVar2 != (Object *)0x0) {
                                                    if (pOVar2[1].monitor == (MonitorData *)0x0)
                                                    goto code_?;
                                                    pOVar2[2].klass =
                                                         (Object__Class *)
                                                         StringLiteral_MoveDrawPlaneDown;
                                                    func_?(pOVar2 + 2,pSVar3);
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                    Dictionary_2_System_Int32Enum_System_Object__Add
                                                              ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  pDVar1,0xc,pOVar2,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
                                                  );
                                                  pOVar2 = (Object *)
                                                           func_?(TypeInfo__System__String,
                                                                           1);
                                                  pSVar3 = StringLiteral_ToggleCameraEffects;
                                                  if (pOVar2 != (Object *)0x0) {
                                                    if (pOVar2[1].monitor == (MonitorData *)0x0)
                                                    goto code_?;
                                                    pOVar2[2].klass =
                                                         (Object__Class *)
                                                         StringLiteral_ToggleCameraEffects;
                                                    func_?(pOVar2 + 2,pSVar3);
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                    Dictionary_2_System_Int32Enum_System_Object__Add
                                                              ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  pDVar1,0x34,pOVar2,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
                                                  );
                                                  (this->fields).ButtonMapping =
                                                       (Dictionary_2_KogamaControls_System_String_ *
                                                       )pDVar1;
                                                  func_?(&this->fields,pDVar1);
                                                  pDVar1 = (
                                                  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_
                                                  *)func_?(
                                                  TypeInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode>
                                                  );
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::
                                                  Int32Enum,GamePassesHighScoreList+HighScoreListData]
                                                  ::
                                                  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
                                                            (pDVar1,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode>__Dictionary__
                                                  );
                                                  if (pDVar1 != (
                                                  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_
                                                  *)0x0) {
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::
                                                    Int32Enum]::
                                                                                                        
                                                  Dictionary_2_System_Int32Enum_System_Int32Enum__Add
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Int32Enum_ *)
                                                  pDVar1,0x2a,0x1b,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode>__Add_KogamaControls__UnityEngine__KeyCode_
                                                  );
                                                  method_00 = (MethodInfo *)
                                                              &(this->fields).KeyCodeMapping;
                                                  (this->fields).KeyCodeMapping =
                                                       (
                                                  Dictionary_2_KogamaControls_UnityEngine_KeyCode_ *
                                                  )pDVar1;
                                                  func_?(method_00,pDVar1);
                                                  mscorlib.dll::System::ThrowHelper::
                                                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                                                            ((Object *)this,
                                                             ExceptionArgument__Enum_obj,method_00);
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
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

