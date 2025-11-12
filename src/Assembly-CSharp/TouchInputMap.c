
/* Boolean GetBooleanControl(KogamaControls, KeyState) */

bool Assembly-CSharp.dll::TouchInputMap::TouchInputMap_GetBooleanControl
               (TouchInputMap *this,KogamaControls__Enum control,KeyState__Enum keyState,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__get_Item_KogamaControls_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode>__get_Item_KogamaControls_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__get_Keys__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode>__get_Keys__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  bool_MethodInfo__System__Linq__Enumerable__Contains<KogamaControls>_System__Collections__Generic__IEnumerable<KogamaControls>__KogamaControls_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__KogamaControls);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Not_implemented_on_mobile_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
           (this->fields).ButtonMapping;
  if (pDVar1 != (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                 *)0x0) {
    pDVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
             TypeConverterRegistry+ConverterKey,System::Object]::
             Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Keys
                       (pDVar1,
                        MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__get_Keys__
                       );
    cVar3 = FUN_?(pDVar2,control);
    if (cVar3 == '\0') {
      pDVar1 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                *)(this->fields).KeyCodeMapping;
      if (pDVar1 != (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                     *)0x0) {
        pDVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                 TypeConverterRegistry+ConverterKey,System::Object]::
                 Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Keys
                           (pDVar1,
                            MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode>__get_Keys__
                           );
        cVar3 = FUN_?(pDVar2);
        if (cVar3 == '\0') {
          EStack_4.klass = (Enum__Class *)TypeInfo__KogamaControls;
          EStack_4.monitor = (MonitorData *)0xffffffffffffffff;
          KStack_5 = control;
          pSVar6 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_4,(MethodInfo *)0x0);
          pSVar6 = mscorlib.dll::System::String::String_Concat_4
                             (StringLiteral_Not_implemented_on_mobile_,pSVar6,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                    ((Object *)pSVar6,(MethodInfo *)0x0);
          return 0;
        }
        if (keyState == KeyState__Enum_Up) {
          pDVar7 = (this->fields).KeyCodeMapping;
          if (pDVar7 != (Dictionary_2_KogamaControls_UnityEngine_KeyCode_ *)0x0) {
            IVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32Enum,System::Int32Enum]::
                    Dictionary_2_System_Int32Enum_System_Int32Enum__get_Item
                              ((Dictionary_2_System_Int32Enum_System_Int32Enum_ *)pDVar7,control,
                               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode>__get_Item_KogamaControls_
                              );
            pcVar9 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar9 = (code *)FUN_?(&UNK_?,0), pcVar9 == (code *)0x0)) {
              uVar10 = func_?(&UNK_?);
              FUN_?(uVar10,0);
              pcVar9 = (code *)swi(3);
              bVar11 = (*pcVar9)();
              return bVar11;
            }
            pcRam_? = pcVar9;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            bVar11 = (*pcRam_?)(IVar8);
            return bVar11;
          }
        }
        else if (keyState == KeyState__Enum_Down) {
          pDVar7 = (this->fields).KeyCodeMapping;
          if (pDVar7 != (Dictionary_2_KogamaControls_UnityEngine_KeyCode_ *)0x0) {
            IVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32Enum,System::Int32Enum]::
                    Dictionary_2_System_Int32Enum_System_Int32Enum__get_Item
                              ((Dictionary_2_System_Int32Enum_System_Int32Enum_ *)pDVar7,control,
                               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode>__get_Item_KogamaControls_
                              );
            pcVar9 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar9 = (code *)FUN_?(&UNK_?,0), pcVar9 == (code *)0x0)) {
              uVar10 = func_?(&UNK_?);
              FUN_?(uVar10,0);
              pcVar9 = (code *)swi(3);
              bVar11 = (*pcVar9)();
              return bVar11;
            }
            pcRam_? = pcVar9;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            bVar11 = (*pcRam_?)(IVar8);
            return bVar11;
          }
        }
        else {
          if (keyState != KeyState__Enum_Pressed) {
            return 0;
          }
          pDVar7 = (this->fields).KeyCodeMapping;
          if (pDVar7 != (Dictionary_2_KogamaControls_UnityEngine_KeyCode_ *)0x0) {
            IVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32Enum,System::Int32Enum]::
                    Dictionary_2_System_Int32Enum_System_Int32Enum__get_Item
                              ((Dictionary_2_System_Int32Enum_System_Int32Enum_ *)pDVar7,control,
                               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode>__get_Item_KogamaControls_
                              );
            pcVar9 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar9 = (code *)FUN_?(&UNK_?,0), pcVar9 == (code *)0x0)) {
              uVar10 = func_?(&UNK_?);
              FUN_?(uVar10,0);
              pcVar9 = (code *)swi(3);
              bVar11 = (*pcVar9)();
              return bVar11;
            }
            pcRam_? = pcVar9;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            bVar11 = (*pcRam_?)(IVar8);
            return bVar11;
          }
        }
      }
    }
    else {
      this_00 = (this->fields).ButtonMapping;
      if (this_00 != (Dictionary_2_KogamaControls_System_String_ *)0x0) {
        pOVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                  ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                            ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,control,
                             MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__get_Item_KogamaControls_
                            );
        uVar13 = 0;
        if (pOVar12 != (Object *)0x0) {
          pOVar14 = pOVar12 + 2;
          while( true ) {
            if ((int)*(uint *)&pOVar12[1].monitor <= (int)uVar13) {
              return 0;
            }
            if (*(uint *)&pOVar12[1].monitor <= uVar13) {
              FUN_?();
              pcVar9 = (code *)swi(3);
              bVar11 = (*pcVar9)();
              return bVar11;
            }
            pOVar15 = pOVar14->klass;
            if (keyState == KeyState__Enum_Up) {
              if (*(int *)&(
                           TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager
                           ->_1).field_0x1c == 0) {
                FUN_?();
              }
              if (cRam_? == '\0') {
                FUN_?(&
                              TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager
                              ,0);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (*(int *)&(
                           TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager
                           ->_1).field_0x1c == 0) {
                FUN_?(
                             TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager
                             );
              }
              pVVar16 = TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager
                       ->static_fields->activeInput;
              if (pVVar16 != (VirtualInput *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                bVar11 = (*(pVVar16->klass->vtable).__unknown_3.methodPtr)
                                  (pVVar16,pOVar15,(pVVar16->klass->vtable).__unknown_3.method);
                return bVar11;
              }
              FUN_?();
              pcVar9 = (code *)swi(3);
              bVar11 = (*pcVar9)();
              return bVar11;
            }
            if (keyState == KeyState__Enum_Down) break;
            if (keyState == KeyState__Enum_Pressed) {
              if (*(int *)&(
                           TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager
                           ->_1).field_0x1c == 0) {
                FUN_?();
              }
              if (cRam_? == '\0') {
                FUN_?(&
                              TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager
                              ,0);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (*(int *)&(
                           TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager
                           ->_1).field_0x1c == 0) {
                FUN_?(
                             TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager
                             );
              }
              pVVar16 = TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager
                       ->static_fields->activeInput;
              if (pVVar16 != (VirtualInput *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                bVar11 = (*(pVVar16->klass->vtable).__unknown_1.methodPtr)
                                  (pVVar16,pOVar15,(pVVar16->klass->vtable).__unknown_1.method);
                return bVar11;
              }
              FUN_?();
              pcVar9 = (code *)swi(3);
              bVar11 = (*pcVar9)();
              return bVar11;
            }
            uVar13 = uVar13 + 1;
            pOVar14 = (Object *)&pOVar14->monitor;
          }
          if (*(int *)&(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager
                       ->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (cRam_? == '\0') {
            FUN_?(&
                          TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager
                          ,0);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager
                       ->_1).field_0x1c == 0) {
            FUN_?(
                         TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager
                         );
          }
          pVVar16 = TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
                   static_fields->activeInput;
          if (pVVar16 != (VirtualInput *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            bVar11 = (*(pVVar16->klass->vtable).__unknown_2.methodPtr)
                              (pVVar16,pOVar15,(pVVar16->klass->vtable).__unknown_2.method);
            return bVar11;
          }
          FUN_?();
          pcVar9 = (code *)swi(3);
          bVar11 = (*pcVar9)();
          return bVar11;
        }
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  bVar11 = (*pcVar9)();
  return bVar11;
}


/* TouchInputMap() */

void Assembly-CSharp.dll::TouchInputMap::TouchInputMap__ctor(TouchInputMap *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode>__Add_KogamaControls__UnityEngine__KeyCode_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__String);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_EditMoveUp);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_TogglePlayInEditor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_EditMoveRight);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ToggleLogicRendering);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ToggleGripdSnapSize);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_FocusOnSelectedModel);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Holster);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ToggleFullScreen);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Respawn);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ActivatePaintCubeTool);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MoveDrawPlaneDown);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ShowChat);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_EditMoveFast);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_PointerSelect);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_DropWeapon);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ToggleHD);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_EditMoveBackwards);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_OpenInventory);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Jump);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ToggleCameraEffects);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MoveDrawPlaneUp);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MoveForward);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_EditMoveForward);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_CreateNewModel);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ActivateDeleteCubeTool);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ActivateEditCubeTool);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_EditMoveDown);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ToggleDrawPlane);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ChangeMaterial);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Fire);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ActivatePickColorTool);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ShowPlayerWindow);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Use);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_EditMoveLeft);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_PointerSelectAlt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
           FUN_?(
                        TypeInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>
                        );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Dictionary__
            );
  pOVar2 = (Object *)FUN_?(TypeInfo__System__String,1);
  if ((pOVar2 != (Object *)0x0) &&
     (FUN_?(pOVar2,0,StringLiteral_Jump),
     pDVar1 != (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0)) {
    IVar3 = CONCAT31((int3)((uint)in_R9D >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__TryInsert
              ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,0x21,pOVar2,IVar3,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
               ->klass->rgctx_data[0x22].method);
    pOVar2 = (Object *)FUN_?(TypeInfo__System__String,1);
    if (pOVar2 != (Object *)0x0) {
      FUN_?(pOVar2,0,StringLiteral_Use);
      IVar3 = CONCAT31((int3)(IVar3 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
      Dictionary_2_System_Int32Enum_System_Object__TryInsert
                ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,0x14,pOVar2,IVar3,
                 MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
                 ->klass->rgctx_data[0x22].method);
      pOVar2 = (Object *)FUN_?(TypeInfo__System__String,1);
      if (pOVar2 != (Object *)0x0) {
        FUN_?(pOVar2,0,StringLiteral_Fire);
        IVar3 = CONCAT31((int3)(IVar3 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
        Dictionary_2_System_Int32Enum_System_Object__TryInsert
                  ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,0x20,pOVar2,IVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
                   ->klass->rgctx_data[0x22].method);
        pOVar2 = (Object *)FUN_?(TypeInfo__System__String,1);
        if (pOVar2 != (Object *)0x0) {
          FUN_?(pOVar2,0,StringLiteral_Respawn);
          IVar3 = CONCAT31((int3)(IVar3 >> 8),2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]
          ::Dictionary_2_System_Int32Enum_System_Object__TryInsert
                    ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,0x10,pOVar2,IVar3,
                     MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
                     ->klass->rgctx_data[0x22].method);
          pOVar2 = (Object *)FUN_?(TypeInfo__System__String,1);
          if (pOVar2 != (Object *)0x0) {
            FUN_?(pOVar2,0,StringLiteral_DropWeapon);
            IVar3 = CONCAT31((int3)(IVar3 >> 8),2);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
            Object]::Dictionary_2_System_Int32Enum_System_Object__TryInsert
                      ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,0x13,pOVar2,IVar3,
                       MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
                       ->klass->rgctx_data[0x22].method);
            pOVar2 = (Object *)FUN_?(TypeInfo__System__String,1);
            if (pOVar2 != (Object *)0x0) {
              FUN_?(pOVar2,0,StringLiteral_Holster);
              IVar3 = CONCAT31((int3)(IVar3 >> 8),2);
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
              Object]::Dictionary_2_System_Int32Enum_System_Object__TryInsert
                        ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,0x2b,pOVar2,IVar3,
                         MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
                         ->klass->rgctx_data[0x22].method);
              pOVar2 = (Object *)FUN_?(TypeInfo__System__String,1);
              if (pOVar2 != (Object *)0x0) {
                FUN_?(pOVar2,0,StringLiteral_PointerSelect);
                IVar3 = CONCAT31((int3)(IVar3 >> 8),2);
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Object]::Dictionary_2_System_Int32Enum_System_Object__TryInsert
                          ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,5,pOVar2,IVar3,
                           MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
                           ->klass->rgctx_data[0x22].method);
                pOVar2 = (Object *)FUN_?(TypeInfo__System__String,1);
                if (pOVar2 != (Object *)0x0) {
                  FUN_?(pOVar2,0,StringLiteral_PointerSelectAlt);
                  IVar3 = CONCAT31((int3)(IVar3 >> 8),2);
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                  ::Object]::Dictionary_2_System_Int32Enum_System_Object__TryInsert
                            ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,6,pOVar2,IVar3,
                             MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
                             ->klass->rgctx_data[0x22].method);
                  pOVar2 = (Object *)FUN_?(TypeInfo__System__String,1);
                  if (pOVar2 != (Object *)0x0) {
                    FUN_?(pOVar2,0,StringLiteral_FocusOnSelectedModel);
                    IVar3 = CONCAT31((int3)(IVar3 >> 8),2);
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32Enum,System::Object]::
                    Dictionary_2_System_Int32Enum_System_Object__TryInsert
                              ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,0x15,pOVar2,
                               IVar3,MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
                                     ->klass->rgctx_data[0x22].method);
                    pOVar2 = (Object *)FUN_?(TypeInfo__System__String,1);
                    if (pOVar2 != (Object *)0x0) {
                      FUN_?(pOVar2,0,StringLiteral_ToggleHD);
                      IVar3 = CONCAT31((int3)(IVar3 >> 8),2);
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32Enum,System::Object]::
                      Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,0x28,pOVar2,
                                 IVar3,MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
                                       ->klass->rgctx_data[0x22].method);
                      pOVar2 = (Object *)FUN_?(TypeInfo__System__String,1);
                      if (pOVar2 != (Object *)0x0) {
                        FUN_?(pOVar2,0,StringLiteral_MoveForward);
                        IVar3 = CONCAT31((int3)(IVar3 >> 8),2);
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32Enum,System::Object]::
                        Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                  ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,0,pOVar2,
                                   IVar3,MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
                                         ->klass->rgctx_data[0x22].method);
                        pOVar2 = (Object *)FUN_?(TypeInfo__System__String,1);
                        if (pOVar2 != (Object *)0x0) {
                          FUN_?(pOVar2,0,StringLiteral_EditMoveForward);
                          IVar3 = CONCAT31((int3)(IVar3 >> 8),2);
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32Enum,System::Object]::
                          Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                    ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,0x2e,
                                     pOVar2,IVar3,
                                     MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
                                     ->klass->rgctx_data[0x22].method);
                          pOVar2 = (Object *)FUN_?(TypeInfo__System__String,1);
                          if (pOVar2 != (Object *)0x0) {
                            FUN_?(pOVar2,0,StringLiteral_EditMoveBackwards);
                            IVar3 = CONCAT31((int3)(IVar3 >> 8),2);
                            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Int32Enum,System::Object]::
                            Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                      ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,0x31,
                                       pOVar2,IVar3,
                                       MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
                                       ->klass->rgctx_data[0x22].method);
                            pOVar2 = (Object *)FUN_?(TypeInfo__System__String,1);
                            if (pOVar2 != (Object *)0x0) {
                              FUN_?(pOVar2,0,StringLiteral_EditMoveLeft);
                              IVar3 = CONCAT31((int3)(IVar3 >> 8),2);
                              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              Int32Enum,System::Object]::
                              Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                        ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,0x2f
                                         ,pOVar2,IVar3,
                                         MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
                                         ->klass->rgctx_data[0x22].method);
                              pOVar2 = (Object *)FUN_?(TypeInfo__System__String,1);
                              if (pOVar2 != (Object *)0x0) {
                                FUN_?(pOVar2,0,StringLiteral_EditMoveRight);
                                IVar3 = CONCAT31((int3)(IVar3 >> 8),2);
                                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                Int32Enum,System::Object]::
                                Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                          ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,
                                           0x30,pOVar2,IVar3,
                                           MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
                                           ->klass->rgctx_data[0x22].method);
                                pOVar2 = (Object *)FUN_?(TypeInfo__System__String,1);
                                if (pOVar2 != (Object *)0x0) {
                                  FUN_?(pOVar2,0,StringLiteral_EditMoveUp);
                                  IVar3 = CONCAT31((int3)(IVar3 >> 8),2);
                                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                  Int32Enum,System::Object]::
                                  Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                            ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,
                                             0x2c,pOVar2,IVar3,
                                             MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
                                             ->klass->rgctx_data[0x22].method);
                                  pOVar2 = (Object *)FUN_?(TypeInfo__System__String,1);
                                  if (pOVar2 != (Object *)0x0) {
                                    FUN_?(pOVar2,0,StringLiteral_EditMoveDown);
                                    IVar3 = CONCAT31((int3)(IVar3 >> 8),2);
                                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System
                                    ::Int32Enum,System::Object]::
                                    Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                              ((Dictionary_2_System_Int32Enum_System_Object_ *)
                                               pDVar1,0x2d,pOVar2,IVar3,
                                               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
                                               ->klass->rgctx_data[0x22].method);
                                    pOVar2 = (Object *)FUN_?(TypeInfo__System__String,1);
                                    if (pOVar2 != (Object *)0x0) {
                                      FUN_?(pOVar2,0,StringLiteral_EditMoveFast);
                                      IVar3 = CONCAT31((int3)(IVar3 >> 8),2);
                                      mscorlib.dll::System::Collections::Generic::
                                      Dictionary`2[System::Int32Enum,System::Object]::
                                      Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                ((Dictionary_2_System_Int32Enum_System_Object_ *)
                                                 pDVar1,0x32,pOVar2,IVar3,
                                                 MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
                                                 ->klass->rgctx_data[0x22].method);
                                      pOVar2 = (Object *)FUN_?(TypeInfo__System__String,1);
                                      if (pOVar2 != (Object *)0x0) {
                                        FUN_?(pOVar2,0,StringLiteral_ToggleDrawPlane);
                                        IVar3 = CONCAT31((int3)(IVar3 >> 8),2);
                                        mscorlib.dll::System::Collections::Generic::
                                        Dictionary`2[System::Int32Enum,System::Object]::
                                        Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                  ((Dictionary_2_System_Int32Enum_System_Object_ *)
                                                   pDVar1,0x1f,pOVar2,IVar3,
                                                                                                      
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
                                                  ->klass->rgctx_data[0x22].method);
                                        pOVar2 = (Object *)FUN_?(TypeInfo__System__String,1)
                                        ;
                                        if (pOVar2 != (Object *)0x0) {
                                          FUN_?(pOVar2,0,StringLiteral_ChangeMaterial);
                                          IVar3 = CONCAT31((int3)(IVar3 >> 8),2);
                                          mscorlib.dll::System::Collections::Generic::
                                          Dictionary`2[System::Int32Enum,System::Object]::
                                          Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                    ((Dictionary_2_System_Int32Enum_System_Object_ *
                                                     )pDVar1,0x1c,pOVar2,IVar3,
                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
                                                  ->klass->rgctx_data[0x22].method);
                                          pOVar2 = (Object *)
                                                   FUN_?(TypeInfo__System__String,1);
                                          if (pOVar2 != (Object *)0x0) {
                                            FUN_?(pOVar2,0,StringLiteral_OpenInventory);
                                            IVar3 = CONCAT31((int3)(IVar3 >> 8),2);
                                            mscorlib.dll::System::Collections::Generic::
                                            Dictionary`2[System::Int32Enum,System::Object]::
                                            Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                      ((Dictionary_2_System_Int32Enum_System_Object_
                                                        *)pDVar1,0x1d,pOVar2,IVar3,
                                                                                                              
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
                                                  ->klass->rgctx_data[0x22].method);
                                            pOVar2 = (Object *)
                                                     FUN_?(TypeInfo__System__String,1);
                                            if (pOVar2 != (Object *)0x0) {
                                              FUN_?(pOVar2,0,
                                                  StringLiteral_ActivateEditCubeTool);
                                              IVar3 = CONCAT31((int3)(IVar3 >> 8),2);
                                              mscorlib.dll::System::Collections::Generic::
                                              Dictionary`2[System::Int32Enum,System::Object]::
                                              Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                        ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  pDVar1,0x19,pOVar2,IVar3,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
                                                  ->klass->rgctx_data[0x22].method);
                                              pOVar2 = (Object *)
                                                       FUN_?(TypeInfo__System__String,1);
                                              if (pOVar2 != (Object *)0x0) {
                                                FUN_?(pOVar2,0,
                                                  StringLiteral_ActivateDeleteCubeTool);
                                                IVar3 = CONCAT31((int3)(IVar3 >> 8),2);
                                                mscorlib.dll::System::Collections::Generic::
                                                Dictionary`2[System::Int32Enum,System::Object]::
                                                Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                          ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  pDVar1,0x1a,pOVar2,IVar3,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
                                                  ->klass->rgctx_data[0x22].method);
                                                pOVar2 = (Object *)
                                                         FUN_?(TypeInfo__System__String,1);
                                                if (pOVar2 != (Object *)0x0) {
                                                  FUN_?(pOVar2,0,
                                                  StringLiteral_ActivatePaintCubeTool);
                                                  IVar3 = CONCAT31((int3)(IVar3 >> 8),2);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Int32Enum,System::Object]::
                                                  Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  pDVar1,0x1b,pOVar2,IVar3,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
                                                  ->klass->rgctx_data[0x22].method);
                                                  pOVar2 = (Object *)
                                                           FUN_?(TypeInfo__System__String,1)
                                                  ;
                                                  if (pOVar2 != (Object *)0x0) {
                                                    FUN_?(pOVar2,0,
                                                  StringLiteral_ActivatePickColorTool);
                                                  IVar3 = CONCAT31((int3)(IVar3 >> 8),2);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Int32Enum,System::Object]::
                                                  Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  pDVar1,0x35,pOVar2,IVar3,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
                                                  ->klass->rgctx_data[0x22].method);
                                                  pOVar2 = (Object *)
                                                           FUN_?(TypeInfo__System__String,1)
                                                  ;
                                                  if (pOVar2 != (Object *)0x0) {
                                                    FUN_?(pOVar2,0,
                                                  StringLiteral_TogglePlayInEditor);
                                                  IVar3 = CONCAT31((int3)(IVar3 >> 8),2);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Int32Enum,System::Object]::
                                                  Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  pDVar1,0x16,pOVar2,IVar3,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
                                                  ->klass->rgctx_data[0x22].method);
                                                  pOVar2 = (Object *)
                                                           FUN_?(TypeInfo__System__String,1)
                                                  ;
                                                  if (pOVar2 != (Object *)0x0) {
                                                    FUN_?(pOVar2,0,
                                                  StringLiteral_ToggleGripdSnapSize);
                                                  IVar3 = CONCAT31((int3)(IVar3 >> 8),2);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Int32Enum,System::Object]::
                                                  Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  pDVar1,0x18,pOVar2,IVar3,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
                                                  ->klass->rgctx_data[0x22].method);
                                                  pOVar2 = (Object *)
                                                           FUN_?(TypeInfo__System__String,1)
                                                  ;
                                                  if (pOVar2 != (Object *)0x0) {
                                                    FUN_?(pOVar2,0,
                                                  StringLiteral_ToggleLogicRendering);
                                                  IVar3 = CONCAT31((int3)(IVar3 >> 8),2);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Int32Enum,System::Object]::
                                                  Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  pDVar1,0x17,pOVar2,IVar3,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
                                                  ->klass->rgctx_data[0x22].method);
                                                  pOVar2 = (Object *)
                                                           FUN_?(TypeInfo__System__String,1)
                                                  ;
                                                  if (pOVar2 != (Object *)0x0) {
                                                    FUN_?(pOVar2,0,
                                                  StringLiteral_ToggleFullScreen);
                                                  IVar3 = CONCAT31((int3)(IVar3 >> 8),2);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Int32Enum,System::Object]::
                                                  Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  pDVar1,0xe,pOVar2,IVar3,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
                                                  ->klass->rgctx_data[0x22].method);
                                                  pOVar2 = (Object *)
                                                           FUN_?(TypeInfo__System__String,1)
                                                  ;
                                                  if (pOVar2 != (Object *)0x0) {
                                                    FUN_?(pOVar2,0,
                                                  StringLiteral_ShowPlayerWindow);
                                                  IVar3 = CONCAT31((int3)(IVar3 >> 8),2);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Int32Enum,System::Object]::
                                                  Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  pDVar1,0x12,pOVar2,IVar3,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
                                                  ->klass->rgctx_data[0x22].method);
                                                  pOVar2 = (Object *)
                                                           FUN_?(TypeInfo__System__String,1)
                                                  ;
                                                  if (pOVar2 != (Object *)0x0) {
                                                    FUN_?(pOVar2,0,
                                                  StringLiteral_CreateNewModel);
                                                  IVar3 = CONCAT31((int3)(IVar3 >> 8),2);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Int32Enum,System::Object]::
                                                  Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  pDVar1,0x1e,pOVar2,IVar3,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
                                                  ->klass->rgctx_data[0x22].method);
                                                  pOVar2 = (Object *)
                                                           FUN_?(TypeInfo__System__String,1)
                                                  ;
                                                  if (pOVar2 != (Object *)0x0) {
                                                    FUN_?(pOVar2,0,StringLiteral_ShowChat);
                                                    IVar3 = CONCAT31((int3)(IVar3 >> 8),2);
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                                                                        
                                                  Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  pDVar1,0xf,pOVar2,IVar3,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
                                                  ->klass->rgctx_data[0x22].method);
                                                  pOVar2 = (Object *)
                                                           FUN_?(TypeInfo__System__String,1)
                                                  ;
                                                  if (pOVar2 != (Object *)0x0) {
                                                    FUN_?(pOVar2,0,
                                                  StringLiteral_MoveDrawPlaneUp);
                                                  IVar3 = CONCAT31((int3)(IVar3 >> 8),2);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Int32Enum,System::Object]::
                                                  Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  pDVar1,0xb,pOVar2,IVar3,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
                                                  ->klass->rgctx_data[0x22].method);
                                                  pOVar2 = (Object *)
                                                           FUN_?(TypeInfo__System__String,1)
                                                  ;
                                                  if (pOVar2 != (Object *)0x0) {
                                                    FUN_?(pOVar2,0,
                                                  StringLiteral_MoveDrawPlaneDown);
                                                  IVar3 = CONCAT31((int3)(IVar3 >> 8),2);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Int32Enum,System::Object]::
                                                  Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  pDVar1,0xc,pOVar2,IVar3,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
                                                  ->klass->rgctx_data[0x22].method);
                                                  pOVar2 = (Object *)
                                                           FUN_?(TypeInfo__System__String,1)
                                                  ;
                                                  if (pOVar2 != (Object *)0x0) {
                                                    FUN_?(pOVar2,0,
                                                  StringLiteral_ToggleCameraEffects);
                                                  IVar3 = CONCAT31((int3)(IVar3 >> 8),2);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Int32Enum,System::Object]::
                                                  Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  pDVar1,0x34,pOVar2,IVar3,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_System::String_[]>__Add_KogamaControls__System__String____
                                                  ->klass->rgctx_data[0x22].method);
                                                  bVar4 = iRam_? != 0;
                                                  (this->fields).ButtonMapping =
                                                       (Dictionary_2_KogamaControls_System_String_ *
                                                       )pDVar1;
                                                  if (bVar4) {
                                                    uVar5 = (uint)((ulonglong)&this->fields >> 0xc);
                                                    lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8
                                                    ;
                                                    do {
                                                      uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
                                                      puVar8 = (ulonglong *)(lVar6 + 0xADDR);
                                                      LOCK();
                                                      bVar4 = uVar7 == *puVar8;
                                                      if (bVar4) {
                                                        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
                                                      }
                                                      UNLOCK();
                                                    } while (!bVar4);
                                                  }
                                                  pDVar1 = (
                                                  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_
                                                  *)FUN_?(
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
                                                                                                        
                                                  Dictionary_2_System_Int32Enum_System_Int32Enum__TryInsert
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Int32Enum_ *)
                                                  pDVar1,0x2a,0x1b,CONCAT31((int3)(IVar3 >> 8),2),
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode>__Add_KogamaControls__UnityEngine__KeyCode_
                                                  ->klass->rgctx_data[0x22].method);
                                                  bVar4 = iRam_? != 0;
                                                  (this->fields).KeyCodeMapping =
                                                       (
                                                  Dictionary_2_KogamaControls_UnityEngine_KeyCode_ *
                                                  )pDVar1;
                                                  if (bVar4) {
                                                    uVar5 = (uint)((ulonglong)
                                                                   &(this->fields).KeyCodeMapping >>
                                                                  0xc);
                                                    lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8
                                                    ;
                                                    do {
                                                      uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
                                                      puVar8 = (ulonglong *)(lVar6 + 0xADDR);
                                                      LOCK();
                                                      bVar4 = uVar7 == *puVar8;
                                                      if (bVar4) {
                                                        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
                                                      }
                                                      UNLOCK();
                                                    } while (!bVar4);
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
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

