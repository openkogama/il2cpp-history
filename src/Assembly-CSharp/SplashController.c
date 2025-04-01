
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
                      __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
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
        pUVar4 = array;
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
          uVar5 = 0;
          if (array != (UInt32__Array *)0x0) {
            puVar6 = array->vector;
            while( true ) {
              if ((int)array->max_length <= (int)uVar5) {
                return;
              }
              if (array->max_length <= uVar5) break;
              key = *puVar6;
              array = pUVar4;
              if ((TypeInfo__SplashController->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__SplashController);
                array = pUVar4;
              }
              pDVar7 = TypeInfo__SplashController->static_fields->objectIDToData;
              if (pDVar7 == (Dictionary_2_System_Int32_SplashController_ObjectData_ *)0x0)
              goto code_?;
              pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                       ::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                 ((Dictionary_2_System_Int32_System_Object_ *)pDVar7,key,
                                  MethodInfo__System__Collections__Generic__Dictionary<int,_SplashController::ObjectData>__get_Item_int_
                                 );
              iVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_frameCount
                                ((MethodInfo *)0x0);
              if (pOVar8 == (Object *)0x0) goto code_?;
              if (1 < iVar3 - (int)pOVar8[3].klass) {
                if ((TypeInfo__SplashController->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                pDVar7 = TypeInfo__SplashController->static_fields->objectIDToData;
                if (pDVar7 == (Dictionary_2_System_Int32_SplashController_ObjectData_ *)0x0)
                goto code_?;
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Object]::Dictionary_2_System_Int32_System_Object__Remove
                          ((Dictionary_2_System_Int32_System_Object_ *)pDVar7,key,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_SplashController::ObjectData>__Remove_int_
                          );
              }
              uVar5 = uVar5 + 1;
              puVar6 = puVar6 + 1;
              pUVar4 = array;
            }
            func_?();
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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
  pPVar1 = (this->fields).waterPillarParticles;
  if ((pPVar1 != (ParticleSystem *)0x0) &&
     (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)pPVar1,(MethodInfo *)0x0), this_00 != (Transform *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (this_00,position,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    if (impactVelocity.y * impactVelocity.y + impactVelocity.x * impactVelocity.x +
        impactVelocity.z * impactVelocity.z < 0.0) {
      func_?();
    }
    pPVar1 = (this->fields).waterPillarParticles;
    if (pPVar1 != (ParticleSystem *)0x0) {
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
      ParticleSystem_get_collision(pPVar1,(MethodInfo *)0x0);
      this_01 = MVGameControllerBase::MVGameControllerBase_get_WaterPlaneManager((MethodInfo *)0x0);
      if (this_01 != (WaterPlaneManager *)0x0) {
        pCVar2 = WaterPlaneManager::WaterPlaneManager_get_WaterColor
                           ((Color *)&stack0xffffffe0,this_01,(MethodInfo *)0x0);
        color.g = ((this->fields).pillarTint.g + pCVar2->g) * _UNK_?;
        color.r = ((this->fields).pillarTint.r + pCVar2->r) * _UNK_?;
        color.b = ((this->fields).pillarTint.b + pCVar2->b) * _UNK_?;
        color.a = ((this->fields).pillarTint.a + pCVar2->a) * _UNK_?;
        pPVar3 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MinMaxGradient::
                 ParticleSystem_MinMaxGradient_op_Implicit
                           ((ParticleSystem_MinMaxGradient *)&stack0xfffffffc,color,
                            (MethodInfo *)0x0);
        fVar4 = (pPVar3->m_ColorMin).a;
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
        ParticleSystem_MainModule_set_startColor
                  ((ParticleSystem_MainModule *)&stack0xfffffffc,*pPVar3,(MethodInfo *)0x0);
        iVar5 = 1;
        fVar6 = _UNK_?;
        if (_UNK_? < in_stack_7) {
          do {
            UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
            ParticleSystem_MainModule_set_startSpeedMultiplier_Injected
                      ((ParticleSystem_MainModule *)&stack0xffffffc0,in_stack_7 - fVar6,
                       (MethodInfo *)0x0);
            pPVar1 = (this->fields).waterPillarParticles;
            if (pPVar1 == (ParticleSystem *)0x0) goto code_?;
            in_stack_7 = fVar4;
            UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
            ParticleSystem_Emit_Internal(pPVar1,1,(MethodInfo *)0x0);
            iVar5 = iVar5 + 1;
            fVar6 = (float)iVar5;
            fVar4 = in_stack_7;
          } while (fVar6 < in_stack_7);
        }
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
  pPVar1 = (this->fields).waterSplashParticles;
  if (pPVar1 != (ParticleSystem *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)pPVar1,(MethodInfo *)0x0);
    if (this_00 != (Transform *)0x0) {
      value.z = position.z;
      value.x = position.x;
      value.y = position.y;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (this_00,value,(MethodInfo *)0x0);
      pPVar1 = (this->fields).waterSplashParticles;
      if (pPVar1 != (ParticleSystem *)0x0) {
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
        ParticleSystem_get_collision(pPVar1,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?(&TypeInfo__System__Math);
          cRam_? = '\x01';
        }
        if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Math);
        }
        dVar2 = (double)(velocity.y * velocity.y + velocity.x * velocity.x + velocity.z * velocity.z
                        );
        if (dVar2 < 0.0) {
          func_?();
        }
        else {
          dVar2 = SQRT(dVar2);
        }
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
        ParticleSystem_MainModule_set_startSpeedMultiplier_Injected
                  ((ParticleSystem_MainModule *)&stack0xffffffd4,
                   (float)dVar2 * (this->fields).baseSplashParticlesSpeed,(MethodInfo *)0x0);
        this_01 = MVGameControllerBase::MVGameControllerBase_get_WaterPlaneManager
                            ((MethodInfo *)0x0);
        if (this_01 != (WaterPlaneManager *)0x0) {
          pCVar3 = WaterPlaneManager::WaterPlaneManager_get_WaterColor
                             ((Color *)&stack0xffffffec,this_01,(MethodInfo *)0x0);
          color.g = ((this->fields).splashTint.g + pCVar3->g) * _UNK_?;
          color.r = ((this->fields).splashTint.r + pCVar3->r) * _UNK_?;
          color.b = ((this->fields).splashTint.b + pCVar3->b) * _UNK_?;
          color.a = ((this->fields).splashTint.a + pCVar3->a) * _UNK_?;
          pPVar4 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MinMaxGradient
                   ::ParticleSystem_MinMaxGradient_op_Implicit
                             ((ParticleSystem_MinMaxGradient *)&position,color,(MethodInfo *)0x0);
          UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
          ParticleSystem_MainModule_set_startColor
                    ((ParticleSystem_MainModule *)&position,*pPVar4,(MethodInfo *)0x0);
          pPVar1 = (this->fields).waterSplashParticles;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          if (pPVar1 != (ParticleSystem *)0x0) {
            UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
            ParticleSystem_Emit_Internal
                      (pPVar1,(int)(in_stack_5 * (this->fields).baseNumberOfSplashParticles),
                       (MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
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
    ppSStack_1 = &(pSVar2->fields).receiver;
    *ppSStack_1 = (StreamedAudioClip_IReceiver *)this;
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
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WaterPlaneManager((MethodInfo *)0x0);
  if ((this_00 == (WaterPlaneManager *)0x0) ||
     (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this_00,(MethodInfo *)0x0), pTVar1 == (Transform *)0x0))
  goto code_?;
  method_00 = (MethodInfo *)&UNK_?;
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                     ((Vector3 *)&stack0xfffffff4,pTVar1,(MethodInfo *)0x0);
  if (pVVar2->y < in_stack_3) {
    return;
  }
  if ((TypeInfo__SplashController->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__SplashController);
  }
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
  pDVar4 = TypeInfo__SplashController->static_fields->objectIDToData;
  if (pDVar4 == (Dictionary_2_System_Int32_SplashController_ObjectData_ *)0x0)
  goto code_?;
  bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
          Dictionary_2_System_Int32_System_Single__ContainsKey
                    ((Dictionary_2_System_Int32_System_Single_ *)pDVar4,objectID,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_SplashController::ObjectData>__ContainsKey_int_
                    );
  if (bVar5 == 0) {
    if ((TypeInfo__SplashController->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__SplashController);
    }
    in_stack_6 = TypeInfo__SplashController->static_fields->objectIDToData;
    this_02 = (Dictionary_2_System_Int32_System_Object_ *)&UNK_?;
    pOVar7 = (Object *)func_?(TypeInfo__SplashController__ObjectData);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar7,ExceptionArgument__Enum_obj,method_00);
    pOVar7[1].klass = (Object__Class *)0x7f800000;
    *(undefined1 *)&pOVar7[3].monitor = 0;
    if (this_02 == (Dictionary_2_System_Int32_System_Object_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__set_Item
              (this_02,objectID,pOVar7,
               MethodInfo__System__Collections__Generic__Dictionary<int,_SplashController::ObjectData>__set_Item_int__SplashController__ObjectData_
              );
  }
  if ((TypeInfo__SplashController->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__SplashController);
  }
  pDVar4 = TypeInfo__SplashController->static_fields->objectIDToData;
  if (pDVar4 == (Dictionary_2_System_Int32_SplashController_ObjectData_ *)0x0)
  goto code_?;
  pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
           Dictionary_2_System_Int32_System_Object__get_Item
                     ((Dictionary_2_System_Int32_System_Object_ *)pDVar4,objectID,
                      MethodInfo__System__Collections__Generic__Dictionary<int,_SplashController::ObjectData>__get_Item_int_
                     );
  pOVar8 = (Object__Class *)
            UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_frameCount((MethodInfo *)0x0);
  if (pOVar7 == (Object *)0x0) goto code_?;
  pOVar7[3].klass = pOVar8;
  puVar9 = (undefined *)0x0;
  fVar10 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar11 = bounds.m_Extents.y * _UNK_?;
  pOVar8 = (Object__Class *)(fVar10 + in_stack_12);
  pOVar7[1].klass = pOVar8;
  if ((float)in_stack_6 + fVar11 <= in_stack_13) {
    return;
  }
  pfVar14 = &(this->fields).timeBeforeNewRingIsEmitted;
  uVar15 = bounds.m_Center._4_8_;
  if (*pfVar14 <= (float)pOVar8 && (float)pOVar8 != *pfVar14) {
code_?:
    pPVar16 = (this->fields).waterRingParticles;
    if ((pPVar16 == (ParticleSystem *)0x0) ||
       (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pPVar16,(MethodInfo *)0x0), pTVar1 == (Transform *)0x0))
    goto code_?;
    value.y = fVar10;
    value.x = in_stack_13;
    value.z = in_stack_12;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (pTVar1,value,(MethodInfo *)0x0);
    pPVar16 = (this->fields).waterRingParticles;
    if (pPVar16 == (ParticleSystem *)0x0) goto code_?;
    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Emit_Internal
              (pPVar16,1,(MethodInfo *)0x0);
    *(undefined8 *)&pOVar7[1].monitor = uVar15;
    pOVar7[1].klass = (Object__Class *)0x0;
    pOVar7[2].monitor = (MonitorData *)bounds.m_Extents.x;
  }
  else {
    bounds.m_Extents.x = (float)*(undefined8 *)&pOVar7[1].monitor;
    fVar11 = in_stack_13;
    if (cRam_? == '\0') {
      puVar9 = &UNK_?;
      func_?(&TypeInfo__System__Math);
      cRam_? = '\x01';
    }
    fVar17 = bounds.m_Center.y - (float)puVar9;
    fVar11 = fVar11 - in_stack_13;
    fVar18 = (float)this - in_stack_12;
    if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Math);
    }
    dVar19 = (double)(fVar17 * fVar17 + fVar11 * fVar11 + fVar18 * fVar18);
    if (dVar19 < 0.0) {
      func_?();
    }
    else {
      dVar19 = SQRT(dVar19);
    }
    pfVar14 = &(this->fields).distanceBeforeNewRingIsEmitted;
    if (*pfVar14 <= (float)dVar19 && (float)dVar19 != *pfVar14) goto code_?;
  }
  if (*(char *)&pOVar7[3].monitor == '\0') {
    *(undefined1 *)&pOVar7[3].monitor = 1;
    this_01 = MVGameControllerBase::MVGameControllerBase_get_AudioManager((MethodInfo *)0x0);
    fVar11 = (float)((uint)velocity.y ^
                    __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
    if (fVar11 < 0.0) {
      fVar11 = 0.0;
    }
    else if (_UNK_? < fVar11) {
      fVar11 = _UNK_?;
    }
    if (this_01 == (AudioManager *)0x0) {
code_?:
      func_?();
      pcVar20 = (code *)swi(3);
      (*pcVar20)();
      return;
    }
    position.y = (float)in_stack_6;
    position.x = (float)in_stack_21;
    position.z = in_stack_13;
    AudioManager::AudioManager_Play
              (this_01,StringLiteral_AvatarWaterSplashSound,(this->fields).splashSound,position,
               (fVar11 / _UNK_?) * (this->fields).splashSoundVolume,
               SoundRangeDistance__Enum_Long,1.0,(MethodInfo *)0x0);
    position_00.z = bounds.m_Extents.x;
    position_00.x = (float)(int)uVar15;
    position_00.y = (float)(int)((ulonglong)uVar15 >> 0x20);
    SplashController_EmitWaterPillar(this,position_00,velocity,(MethodInfo *)0x0);
    position_01.y = (float)method;
    position_01.x = (float)objectID;
    position_01.z = in_stack_22;
    SplashController_EmitWaterSplash(this,position_01,velocity,(MethodInfo *)0x0);
  }
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

