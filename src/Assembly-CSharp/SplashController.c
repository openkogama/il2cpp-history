
/* Vector3 BoundsToPosition(Bounds) */

Vector3 * Assembly-CSharp.dll::SplashController::SplashController_BoundsToPosition
                    (Vector3 *__return_storage_ptr__,Bounds b,MethodInfo *method)

{
  __return_storage_ptr__->x = b.m_Center.x;
  __return_storage_ptr__->y = b.m_Center.y;
  __return_storage_ptr__->z = b.m_Center.z;
  __return_storage_ptr__->y = __return_storage_ptr__->y - b.m_Extents.y;
  return __return_storage_ptr__;
}


/* Single CalcSplashSoundVolume(Vector3) */

float Assembly-CSharp.dll::SplashController::SplashController_CalcSplashSoundVolume
                (SplashController *this,Vector3 velocity,MethodInfo *method)

{
  velocity.z = (float)((uint)velocity.y ^
                      __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
  if (velocity.z < 0.0) {
    velocity.z = 0.0;
  }
  else if (_UNK_? < velocity.z) {
    return (30.0 / _UNK_?) * (this->fields).splashSoundVolume;
  }
  return (velocity.z / _UNK_?) * (this->fields).splashSoundVolume;
}


/* Void CleanUpInactiveObjectIDs() */

void Assembly-CSharp.dll::SplashController::SplashController_CleanUpInactiveObjectIDs
               (SplashController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_SplashController::ObjectData>__Remove_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_SplashController::ObjectData>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_SplashController::ObjectData>__get_Keys__
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<int,_SplashController::ObjectData>__CopyTo_System__Int32_____int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<int,_SplashController::ObjectData>__get_Count__
                   );
    func_?(&TypeInfo__SplashController);
    cRam_? = '\x01';
  }
  if ((TypeInfo__SplashController->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__SplashController);
  }
  pDVar1 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
            *)TypeInfo__SplashController->static_fields->objectIDToData;
  if (pDVar1 != (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                 *)0x0) {
    pDVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
             StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
             Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Keys
                       (pDVar1,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_SplashController::ObjectData>__get_Keys__
                       );
    if (pDVar2 != (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                   *)0x0) {
      iVar3 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
              StyleSheetCache+SheetHandleKey,System::Object]::
              Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                        ((Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                          *)pDVar2,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<int,_SplashController::ObjectData>__get_Count__
                        );
      array = (UInt32__Array *)func_?(TypeInfo__System__Int32,iVar3);
      pDVar1 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                *)TypeInfo__SplashController->static_fields->objectIDToData;
      if (pDVar1 != (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                     *)0x0) {
        pDVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                 StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                 Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Keys
                           (pDVar1,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_SplashController::ObjectData>__get_Keys__
                           );
        if (pDVar2 != (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                       *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+KeyCollection[System
          ::UInt32,System::Object]::
          Dictionary_2_TKey_TValue_KeyCollection_System_UInt32_System_Object__CopyTo
                    ((Dictionary_2_TKey_TValue_KeyCollection_System_UInt32_System_Object_ *)pDVar2,
                     array,0,
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<int,_SplashController::ObjectData>__CopyTo_System__Int32_____int_
                    );
          uVar4 = 0;
          if (array != (UInt32__Array *)0x0) {
            puVar5 = array->vector;
            while( true ) {
              if ((int)array->max_length <= (int)uVar4) {
                return;
              }
              if (array->max_length <= uVar4) break;
              key = (undefined *)*puVar5;
              if ((TypeInfo__SplashController->_1).cctor_finished_or_no_cctor == 0) {
                key = &UNK_?;
                func_?(TypeInfo__SplashController);
              }
              pDVar6 = TypeInfo__SplashController->static_fields->objectIDToData;
              if (pDVar6 == (Dictionary_2_System_Int32_SplashController_ObjectData_ *)0x0)
              goto code_?;
              pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                       ::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                 ((Dictionary_2_System_Int32_System_Object_ *)pDVar6,(int32_t)key,
                                  MethodInfo__System__Collections__Generic__Dictionary<int,_SplashController::ObjectData>__get_Item_int_
                                 );
              iVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_frameCount
                                ((MethodInfo *)0x0);
              if (pOVar7 == (Object *)0x0) goto code_?;
              if (1 < iVar3 - (int)pOVar7[3].klass) {
                if ((TypeInfo__SplashController->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                pDVar6 = TypeInfo__SplashController->static_fields->objectIDToData;
                if (pDVar6 == (Dictionary_2_System_Int32_SplashController_ObjectData_ *)0x0)
                goto code_?;
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Object]::Dictionary_2_System_Int32_System_Object__Remove
                          ((Dictionary_2_System_Int32_System_Object_ *)pDVar6,(int32_t)key,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_SplashController::ObjectData>__Remove_int_
                          );
              }
              uVar4 = uVar4 + 1;
              puVar5 = puVar5 + 1;
            }
            func_?();
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::SplashController::SplashController_Destroy
               (SplashController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__SplashController->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)TypeInfo__SplashController->static_fields->objectIDToData;
  if (this_00 !=
      (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
       *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::StyleSheets::
    StyleSheetCache+SheetHandleKey,System::Object]::
    Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__Clear
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<int,_SplashController::ObjectData>__Clear__
              );
    TypeInfo__SplashController->static_fields->currentObjectID = 0;
    return;
  }
  uVar1 = func_?(&puStack_2);
  func_?(uVar1);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void EmitWaterPillar(Vector3, Vector3) */

void Assembly-CSharp.dll::SplashController::SplashController_EmitWaterPillar
               (SplashController *this,Vector3 position,Vector3 impactVelocity,MethodInfo *method)

{
  pSVar1 = this;
  pPVar2 = (this->fields).waterPillarParticles;
  if (pPVar2 != (ParticleSystem *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)pPVar2,(MethodInfo *)0x0);
    if (this_00 != (Transform *)0x0) {
      value.z = position.z;
      value.x = position.x;
      value.y = position.y;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (this_00,value,(MethodInfo *)0x0);
      fVar3 = (float10)func_?(&impactVelocity,0);
      pPVar2 = (pSVar1->fields).waterPillarParticles;
      fStack_4 = (float)fVar3 * (pSVar1->fields).waterPillarDensity;
      if (pPVar2 != (ParticleSystem *)0x0) {
        this = (SplashController *)
               UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
               ParticleSystem_get_collision(pPVar2,(MethodInfo *)0x0);
        this_01 = MVGameControllerBase::MVGameControllerBase_get_WaterPlaneManager
                            ((MethodInfo *)0x0);
        if (this_01 != (WaterPlaneManager *)0x0) {
          pCVar5 = WaterPlaneManager::WaterPlaneManager_get_WaterColor
                             (&CStack_6,this_01,(MethodInfo *)0x0);
          CStack_6.r = ((pSVar1->fields).pillarTint.r + pCVar5->r) * _UNK_?;
          CStack_6.g = ((pSVar1->fields).pillarTint.g + pCVar5->g) * _UNK_?;
          CStack_6.b = ((pSVar1->fields).pillarTint.b + pCVar5->b) * _UNK_?;
          CStack_6.a = ((pSVar1->fields).pillarTint.a + pCVar5->a) * _UNK_?;
          color.g = CStack_6.g;
          color.r = CStack_6.r;
          color.b = CStack_6.b;
          color.a = CStack_6.a;
          pPVar7 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MinMaxGradient
                   ::ParticleSystem_MinMaxGradient_op_Implicit(&PStack_8,color,(MethodInfo *)0x0);
          UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
          ParticleSystem_MainModule_set_startColor
                    ((ParticleSystem_MainModule *)&this,*pPVar7,(MethodInfo *)0x0);
          iVar9 = 1;
          fVar10 = _UNK_?;
          if (_UNK_? < fStack_4) {
            do {
              UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
              ParticleSystem_MainModule_set_startSpeedMultiplier_Injected
                        ((ParticleSystem_MainModule *)&this,fStack_4 - fVar10,(MethodInfo *)0x0);
              pPVar2 = (pSVar1->fields).waterPillarParticles;
              if (pPVar2 == (ParticleSystem *)0x0) goto code_?;
              UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
              ParticleSystem_Emit_Internal(pPVar2,1,(MethodInfo *)0x0);
              iVar9 = iVar9 + 1;
              fVar10 = (float)iVar9;
            } while (fVar10 < fStack_4);
          }
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void EmitWaterRing(Vector3) */

void Assembly-CSharp.dll::SplashController::SplashController_EmitWaterRing
               (SplashController *this,Vector3 position,MethodInfo *method)

{
  pPVar1 = (this->fields).waterRingParticles;
  if (pPVar1 != (ParticleSystem *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)pPVar1,(MethodInfo *)0x0);
    if (this_00 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (this_00,position,(MethodInfo *)0x0);
      pPVar1 = (this->fields).waterRingParticles;
      if (pPVar1 != (ParticleSystem *)0x0) {
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
        ParticleSystem_Emit_Internal(pPVar1,1,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void EmitWaterSplash(Vector3, Vector3) */

void Assembly-CSharp.dll::SplashController::SplashController_EmitWaterSplash
               (SplashController *this,Vector3 position,Vector3 velocity,MethodInfo *method)

{
  pSVar1 = this;
  pPVar2 = (this->fields).waterSplashParticles;
  if (pPVar2 != (ParticleSystem *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)pPVar2,(MethodInfo *)0x0);
    if (this_00 != (Transform *)0x0) {
      value.z = position.z;
      value.x = position.x;
      value.y = position.y;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (this_00,value,(MethodInfo *)0x0);
      pPVar2 = (pSVar1->fields).waterSplashParticles;
      if (pPVar2 != (ParticleSystem *)0x0) {
        this = (SplashController *)
               UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
               ParticleSystem_get_collision(pPVar2,(MethodInfo *)0x0);
        fVar3 = (float10)func_?();
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
        ParticleSystem_MainModule_set_startSpeedMultiplier_Injected
                  ((ParticleSystem_MainModule *)&this,
                   (float)fVar3 * (pSVar1->fields).baseSplashParticlesSpeed,(MethodInfo *)0x0);
        this_01 = MVGameControllerBase::MVGameControllerBase_get_WaterPlaneManager
                            ((MethodInfo *)0x0);
        if (this_01 != (WaterPlaneManager *)0x0) {
          pCVar4 = WaterPlaneManager::WaterPlaneManager_get_WaterColor
                              ((Color *)&stack0xffffffe8,this_01,(MethodInfo *)0x0);
          color.g = ((pSVar1->fields).splashTint.g + pCVar4->g) * _UNK_?;
          color.r = ((pSVar1->fields).splashTint.r + pCVar4->r) * _UNK_?;
          color.b = ((pSVar1->fields).splashTint.b + pCVar4->b) * _UNK_?;
          color.a = ((pSVar1->fields).splashTint.a + pCVar4->a) * _UNK_?;
          pPVar5 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MinMaxGradient
                    ::ParticleSystem_MinMaxGradient_op_Implicit
                              ((ParticleSystem_MinMaxGradient *)&stack0xffffffbc,color,
                               (MethodInfo *)0x0);
          uVar6 = (pPVar5->m_ColorMax).b;
          uVar7 = pPVar5->m_Mode;
          uVar8 = pPVar5->m_GradientMin;
          uVar9 = pPVar5->m_GradientMax;
          uVar10 = (pPVar5->m_ColorMin).r;
          uVar11 = (pPVar5->m_ColorMin).g;
          uVar12 = (pPVar5->m_ColorMin).b;
          uVar13 = (pPVar5->m_ColorMin).a;
          value_00.m_ColorMin.a = (float)uVar13;
          value_00.m_ColorMin.b = (float)uVar12;
          value_00.m_ColorMin.g = (float)uVar11;
          value_00.m_ColorMin.r = (float)uVar10;
          uVar14 = (pPVar5->m_ColorMax).r;
          uVar15 = (pPVar5->m_ColorMax).g;
          value_00.m_ColorMax.g = (float)uVar15;
          value_00.m_ColorMax.r = (float)uVar14;
          value_00.m_GradientMax = (Gradient *)uVar9;
          value_00.m_GradientMin = (Gradient *)uVar8;
          value_00.m_Mode = uVar7;
          value_00.m_ColorMax.b = (float)uVar6;
          value_00.m_ColorMax.a = (pPVar5->m_ColorMax).a;
          UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
          ParticleSystem_MainModule_set_startColor
                    ((ParticleSystem_MainModule *)&this,value_00,(MethodInfo *)0x0);
          pPVar2 = (pSVar1->fields).waterSplashParticles;
          fVar3 = (float10)func_?();
          if (pPVar2 != (ParticleSystem *)0x0) {
            UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
            ParticleSystem_Emit_Internal
                      (pPVar2,(int)((float)fVar3 * (pSVar1->fields).baseNumberOfSplashParticles),
                       (MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* SplashController+ObjectData GetObjectData(Int32) */

SplashController_ObjectData *
Assembly-CSharp.dll::SplashController::SplashController_GetObjectData
          (int32_t objectID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_SplashController::ObjectData>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_SplashController::ObjectData>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_SplashController::ObjectData>__set_Item_int__SplashController__ObjectData_
                   );
    func_?(&TypeInfo__SplashController__ObjectData);
    func_?(&TypeInfo__SplashController);
    cRam_? = '\x01';
  }
  if ((TypeInfo__SplashController->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__SplashController);
  }
  pDVar1 = TypeInfo__SplashController->static_fields->objectIDToData;
  if (pDVar1 != (Dictionary_2_System_Int32_SplashController_ObjectData_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
            Dictionary_2_System_Int32_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32_System_Single_ *)pDVar1,objectID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_SplashController::ObjectData>__ContainsKey_int_
                      );
    if (bVar2 == 0) {
      if ((TypeInfo__SplashController->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__SplashController);
      }
      pDVar1 = TypeInfo__SplashController->static_fields->objectIDToData;
      value = (Object *)func_?(TypeInfo__SplashController__ObjectData);
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                (value,ExceptionArgument__Enum_obj,in_stack_3);
      value[1].klass = (Object__Class *)0x7f800000;
      *(undefined1 *)&value[3].monitor = 0;
      if (pDVar1 == (Dictionary_2_System_Int32_SplashController_ObjectData_ *)0x0)
      goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__set_Item
                ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,objectID,value,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_SplashController::ObjectData>__set_Item_int__SplashController__ObjectData_
                );
    }
    if ((TypeInfo__SplashController->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__SplashController);
    }
    pDVar1 = TypeInfo__SplashController->static_fields->objectIDToData;
    if (pDVar1 != (Dictionary_2_System_Int32_SplashController_ObjectData_ *)0x0) {
      pSVar4 = (SplashController_ObjectData *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
               Object]::Dictionary_2_System_Int32_System_Object__get_Item
                         ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,objectID,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_SplashController::ObjectData>__get_Item_int_
                         );
      iVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_frameCount
                        ((MethodInfo *)0x0);
      if (pSVar4 != (SplashController_ObjectData *)0x0) {
        (pSVar4->fields)._LastFrameInWater_k__BackingField = iVar5;
        fVar6 = (pSVar4->fields)._TimeSinceLastRingEmission_k__BackingField;
        fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                          ((MethodInfo *)0x0);
        (pSVar4->fields)._TimeSinceLastRingEmission_k__BackingField = fVar7 + fVar6;
        return pSVar4;
      }
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  pSVar4 = (SplashController_ObjectData *)(*pcVar8)();
  return pSVar4;
}


/* Void Initialize() */

void Assembly-CSharp.dll::SplashController::SplashController_Initialize
               (SplashController *this,MethodInfo *method)

{
  ppSStack_1 = (StreamedAudioClip_IReceiver **)&stack0xfffffffc;
  pSVar2 = (this->fields).streamedSplashSound;
  if (pSVar2 != (StreamedAudioClip *)0x0) {
    (pSVar2->fields).receiver = (StreamedAudioClip_IReceiver *)this;
    ppSStack_1 = &(pSVar2->fields).receiver;
    func_?();
    return;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void WaterSplash(Bounds, Vector3, Int32) */

void Assembly-CSharp.dll::SplashController::SplashController_WaterSplash
               (SplashController *this,Bounds bounds,Vector3 velocity,int32_t objectID,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__SplashController);
    func_?(&StringLiteral_AvatarWaterSplashSound);
    cRam_? = '\x01';
  }
  if ((TypeInfo__SplashController->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__SplashController);
  }
  pWVar1 = MVGameControllerBase::MVGameControllerBase_get_WaterPlaneManager((MethodInfo *)0x0);
  if ((pWVar1 == (WaterPlaneManager *)0x0) ||
     (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)pWVar1,(MethodInfo *)0x0), pTVar2 == (Transform *)0x0))
  goto code_?;
  method_00 = (MethodInfo *)&UNK_?;
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                      (&VStack_4,pTVar2,(MethodInfo *)0x0);
  if (pVVar3->y < in_stack_5) {
    return;
  }
  if ((TypeInfo__SplashController->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  if (cRam_? == '\0') {
    func_?();
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_SplashController::ObjectData>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_SplashController::ObjectData>__set_Item_int__SplashController__ObjectData_
                   );
    func_?(&TypeInfo__SplashController__ObjectData);
    func_?(&TypeInfo__SplashController);
    cRam_? = '\x01';
  }
  if ((TypeInfo__SplashController->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pDVar6 = TypeInfo__SplashController->static_fields->objectIDToData;
  if (pDVar6 == (Dictionary_2_System_Int32_SplashController_ObjectData_ *)0x0)
  goto code_?;
  bVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
           Dictionary_2_System_Int32_System_Single__ContainsKey
                     ((Dictionary_2_System_Int32_System_Single_ *)pDVar6,objectID,
                      MethodInfo__System__Collections__Generic__Dictionary<int,_SplashController::ObjectData>__ContainsKey_int_
                     );
  if (bVar7 == 0) {
    if ((TypeInfo__SplashController->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    in_stack_8 = TypeInfo__SplashController->static_fields->objectIDToData;
    bounds.m_Center.y = (float)&UNK_?;
    pOVar9 = (Object *)func_?();
    in_stack_10 = &UNK_?;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              (pOVar9,ExceptionArgument__Enum_obj,method_00);
    pOVar9[1].klass = (Object__Class *)0x7f800000;
    *(undefined1 *)&pOVar9[3].monitor = 0;
    if ((Dictionary_2_System_Int32_System_Object_ *)bounds.m_Center.x ==
        (Dictionary_2_System_Int32_System_Object_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__set_Item
              ((Dictionary_2_System_Int32_System_Object_ *)bounds.m_Center.x,objectID,pOVar9,
               MethodInfo__System__Collections__Generic__Dictionary<int,_SplashController::ObjectData>__set_Item_int__SplashController__ObjectData_
              );
  }
  if ((TypeInfo__SplashController->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pDVar6 = TypeInfo__SplashController->static_fields->objectIDToData;
  if (pDVar6 == (Dictionary_2_System_Int32_SplashController_ObjectData_ *)0x0)
  goto code_?;
  puVar11 = &UNK_?;
  pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__get_Item
                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar6,objectID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_SplashController::ObjectData>__get_Item_int_
                      );
  puVar12 = &UNK_?;
  pOVar13 = (Object__Class *)
            UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_frameCount((MethodInfo *)0x0);
  if (pOVar9 == (Object *)0x0) goto code_?;
  pOVar9[3].klass = pOVar13;
  fVar14 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar15 = bounds.m_Extents.y * _UNK_?;
  pOVar9[1].klass = (Object__Class *)(fVar14 + fStack_16);
  if ((float)in_stack_17 + fVar15 <= (float)in_stack_8) {
    return;
  }
  CStack_18.b = VStack_4.x;
  fStack_19 = VStack_4.z;
  pfVar20 = &(this->fields).timeBeforeNewRingIsEmitted;
  CStack_18.a = (float)in_stack_8;
  if (*pfVar20 <= (float)pOVar9[1].klass && (float)pOVar9[1].klass != *pfVar20) {
code_?:
    pPVar21 = (this->fields).waterRingParticles;
    CStack_18.g = (float)in_stack_8;
    CStack_18.b = (float)in_stack_17;
    if ((pPVar21 == (ParticleSystem *)0x0) ||
       (pDVar6 = (Dictionary_2_System_Int32_SplashController_ObjectData_ *)
                  UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pPVar21,(MethodInfo *)0x0),
       pDVar6 == (Dictionary_2_System_Int32_SplashController_ObjectData_ *)0x0))
    goto code_?;
    bounds.m_Center.y = 0.0;
    puVar11 = &UNK_?;
    value_01.y = CStack_18.a;
    value_01.x = CStack_18.b;
    value_01.z = fStack_19;
    puVar12 = (undefined *)CStack_18.b;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              ((Transform *)pDVar6,value_01,(MethodInfo *)0x0);
    pPVar21 = (this->fields).waterRingParticles;
    if (pPVar21 == (ParticleSystem *)0x0) goto code_?;
    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Emit_Internal
              (pPVar21,1,(MethodInfo *)0x0);
    *(ulonglong *)&pOVar9[1].monitor = CONCAT44(pGStack_22,pMStack_23);
    pOVar9[1].klass = (Object__Class *)0x0;
    pOVar9[2].monitor = (MonitorData *)pGStack_24;
  }
  else {
    uStack_25 = *(undefined8 *)&pOVar9[1].monitor;
    pMStack_23 = pOVar9[2].monitor;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    in_stack_26 = fStack_27 - in_stack_26;
    fVar15 = fStack_28 - (float)pDStack_29;
    in_stack_30 = (float)in_stack_10 - in_stack_30;
    if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Math);
    }
    dVar31 = (double)(fVar15 * fVar15 + in_stack_26 * in_stack_26 +
                     in_stack_30 * in_stack_30);
    if (dVar31 < 0.0) {
      func_?();
    }
    else {
      dVar31 = SQRT(dVar31);
    }
    pfVar20 = &(this->fields).distanceBeforeNewRingIsEmitted;
    in_stack_8 = pDStack_29;
    if (*pfVar20 <= (float)dVar31 && (float)dVar31 != *pfVar20) goto code_?;
  }
  if (*(char *)&pOVar9[3].monitor != '\0') {
    return;
  }
  *(undefined1 *)&pOVar9[3].monitor = 1;
  this_00 = MVGameControllerBase::MVGameControllerBase_get_AudioManager((MethodInfo *)0x0);
  fVar15 = (float)((uint)velocity.y ^
                  __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
  if (fVar15 < 0.0) {
    fVar15 = 0.0;
  }
  else if (_UNK_? < fVar15) {
    fVar15 = _UNK_?;
  }
  if (this_00 != (AudioManager *)0x0) {
    position.z = fStack_27;
    position._0_8_ = uStack_32;
    AudioManager::AudioManager_Play
              (this_00,StringLiteral_AvatarWaterSplashSound,(this->fields).splashSound,position,
               (fVar15 / _UNK_?) * (this->fields).splashSoundVolume,
               SoundRangeDistance__Enum_Long,1.0,(MethodInfo *)0x0);
    position_00.y = (float)pDVar6;
    position_00.x = (float)puVar11;
    position_00.z = (float)puVar12;
    SplashController_EmitWaterPillar(this,position_00,velocity,(MethodInfo *)0x0);
    pPVar21 = (this->fields).waterSplashParticles;
    if ((pPVar21 != (ParticleSystem *)0x0) &&
       (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pPVar21,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0)) {
      value.y = fStack_16;
      value.x = bounds.m_Center.y;
      value.z = VStack_4.x;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (pTVar2,value,(MethodInfo *)0x0);
      pPVar21 = (this->fields).waterSplashParticles;
      if (pPVar21 != (ParticleSystem *)0x0) {
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
        ParticleSystem_get_collision(pPVar21,(MethodInfo *)0x0);
        fVar33 = (float10)func_?(&VStack_4.z);
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
        ParticleSystem_MainModule_set_startSpeedMultiplier_Injected
                  ((ParticleSystem_MainModule *)&stack0xffffff94,
                   (float)fVar33 * (this->fields).baseSplashParticlesSpeed,(MethodInfo *)0x0);
        pWVar1 = MVGameControllerBase::MVGameControllerBase_get_WaterPlaneManager
                            ((MethodInfo *)0x0);
        if (pWVar1 != (WaterPlaneManager *)0x0) {
          pCVar34 = WaterPlaneManager::WaterPlaneManager_get_WaterColor
                              (&CStack_18,pWVar1,(MethodInfo *)0x0);
          CStack_18.a = ((this->fields).splashTint.r + pCVar34->r) * _UNK_?;
          fStack_19 = ((this->fields).splashTint.g + pCVar34->g) * _UNK_?;
          fVar15 = ((this->fields).splashTint.b + pCVar34->b) * _UNK_?;
          fVar14 = ((this->fields).splashTint.a + pCVar34->a) * _UNK_?;
          uStack_25 = CONCAT44(fVar14,fVar15);
          color.g = fStack_19;
          color.r = CStack_18.a;
          color.b = fVar15;
          color.a = fVar14;
          pPVar35 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MinMaxGradient
                    ::ParticleSystem_MinMaxGradient_op_Implicit
                              ((ParticleSystem_MinMaxGradient *)&pMStack_23,color,(MethodInfo *)0x0)
          ;
          uVar36 = (pPVar35->m_ColorMax).b;
          uVar37 = pPVar35->m_Mode;
          uVar38 = pPVar35->m_GradientMin;
          uVar39 = pPVar35->m_GradientMax;
          uVar40 = (pPVar35->m_ColorMin).r;
          uVar41 = (pPVar35->m_ColorMin).g;
          uVar42 = (pPVar35->m_ColorMin).b;
          uVar43 = (pPVar35->m_ColorMin).a;
          value_00.m_ColorMin.a = (float)uVar43;
          value_00.m_ColorMin.b = (float)uVar42;
          value_00.m_ColorMin.g = (float)uVar41;
          value_00.m_ColorMin.r = (float)uVar40;
          uVar44 = (pPVar35->m_ColorMax).r;
          uVar45 = (pPVar35->m_ColorMax).g;
          value_00.m_ColorMax.g = (float)uVar45;
          value_00.m_ColorMax.r = (float)uVar44;
          value_00.m_GradientMax = (Gradient *)uVar39;
          value_00.m_GradientMin = (Gradient *)uVar38;
          value_00.m_Mode = uVar37;
          value_00.m_ColorMax.b = (float)uVar36;
          value_00.m_ColorMax.a = (pPVar35->m_ColorMax).a;
          UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
          ParticleSystem_MainModule_set_startColor
                    ((ParticleSystem_MainModule *)&VStack_4.y,value_00,(MethodInfo *)0x0);
          pPVar21 = (this->fields).waterSplashParticles;
          fVar33 = (float10)func_?();
          if (pPVar21 != (ParticleSystem *)0x0) {
            UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
            ParticleSystem_Emit_Internal
                      (pPVar21,(int)((float)fVar33 * (this->fields).baseNumberOfSplashParticles),
                       (MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar46 = (code *)swi(3);
  (*pcVar46)();
  return;
}


/* SplashController() */

void Assembly-CSharp.dll::SplashController::SplashController__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_SplashController::ObjectData>__Dictionary_int_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<int,_SplashController::ObjectData>
                   );
    func_?(&TypeInfo__SplashController);
    cRam_? = '\x01';
  }
  TypeInfo__SplashController->static_fields->currentObjectID = 0;
  this = (Dictionary_2_System_Int32_SplashController_ObjectData_ *)
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<int,_SplashController::ObjectData>
                        );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
  Dictionary_2_System_Int32_System_Object___ctor_3
            ((Dictionary_2_System_Int32_System_Object_ *)this,8,
             MethodInfo__System__Collections__Generic__Dictionary<int,_SplashController::ObjectData>__Dictionary_int_
            );
  TypeInfo__SplashController->static_fields->objectIDToData = this;
  func_?(&TypeInfo__SplashController->static_fields->objectIDToData,this);
  return;
}


/* SplashController() */

void Assembly-CSharp.dll::SplashController::SplashController__ctor
               (SplashController *this,MethodInfo *method)

{
  (this->fields).timeBeforeNewRingIsEmitted = 1.2;
  (this->fields).distanceBeforeNewRingIsEmitted = 1.5;
  (this->fields).baseNumberOfSplashParticles = 1.0;
  (this->fields).baseSplashParticlesSpeed = 0.5;
  (this->fields).waterPillarDensity = 0.5;
  (this->fields).splashSoundVolume = 0.5;
  return;
}


/* Int32 get_NewObjectID() */

int32_t Assembly-CSharp.dll::SplashController::SplashController_get_NewObjectID
                  (SplashController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__SplashController);
    cRam_? = '\x01';
  }
  if ((TypeInfo__SplashController->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__SplashController);
  }
  TypeInfo__SplashController->static_fields->currentObjectID =
       TypeInfo__SplashController->static_fields->currentObjectID + 1;
  return TypeInfo__SplashController->static_fields->currentObjectID;
}

