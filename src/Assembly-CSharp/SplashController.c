
/* Vector3 BoundsToPosition(Bounds) */

Vector3 * Assembly-CSharp.dll::SplashController::SplashController_BoundsToPosition
                    (Vector3 *__return_storage_ptr__,Bounds b,MethodInfo *method)

{
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  pRVar1 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
           RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
           KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                     (&RStack_2,
                      (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                       *)&b,(MethodInfo *)0x0);
  pSVar3 = pRVar1->_cultureKey;
  pSVar4 = pRVar1->_pattern;
  __return_storage_ptr__->x = (float)pRVar1->_options;
  __return_storage_ptr__->y = (float)pSVar3;
  __return_storage_ptr__->z = (float)pSVar4;
  fVar5 = __return_storage_ptr__->y;
  pRVar1 = mscorlib.dll::System::Collections::Generic::
           Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::
           RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
           Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                     (&RStack_2,
                      (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                       *)&b,(MethodInfo *)0x0);
  __return_storage_ptr__->y = fVar5 - (float)pRVar1->_cultureKey;
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
  pDVar1 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
           TypeInfo__SplashController->static_fields->objectIDToData;
  if (pDVar1 != (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                 *)0x0) {
    pDVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
             RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
             Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Keys
                       (pDVar1,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_SplashController::ObjectData>__get_Keys__
                       );
    if (pDVar2 != (Dictionary_2_TKey_TValue_KeyCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                   *)0x0) {
      iVar3 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+ValueCollection[System::Text::RegularExpressions::
              Regex+CachedCodeEntryKey,System::Object]::
              Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Count
                        ((Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                          *)pDVar2,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<int,_SplashController::ObjectData>__get_Count__
                        );
      array = (Int32Enum__Enum__Array *)func_?(TypeInfo__System__Int32,iVar3);
      pDVar1 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                *)TypeInfo__SplashController->static_fields->objectIDToData;
      if (pDVar1 != (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                     *)0x0) {
        pDVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
                 RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                 Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Keys
                           (pDVar1,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_SplashController::ObjectData>__get_Keys__
                           );
        if (pDVar2 != (Dictionary_2_TKey_TValue_KeyCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                       *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+KeyCollection[System
          ::Int32Enum,System::Single]::
          Dictionary_2_TKey_TValue_KeyCollection_System_Int32Enum_System_Single__CopyTo
                    ((Dictionary_2_TKey_TValue_KeyCollection_System_Int32Enum_System_Single_ *)
                     pDVar2,array,0,
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<int,_SplashController::ObjectData>__CopyTo_System__Int32_____int_
                    );
          uVar4 = 0;
          if (array != (Int32Enum__Enum__Array *)0x0) {
            pIVar5 = array->vector;
            while( true ) {
              if ((int)array->max_length <= (int)uVar4) {
                return;
              }
              if (array->max_length <= uVar4) break;
              key = (undefined *)*pIVar5;
              if ((TypeInfo__SplashController->_1).cctor_finished_or_no_cctor == 0) {
                key = &UNK_?;
                func_?(TypeInfo__SplashController);
              }
              pDVar6 = TypeInfo__SplashController->static_fields->objectIDToData;
              if (pDVar6 == (Dictionary_2_System_Int32_SplashController_ObjectData_ *)0x0)
              goto code_?;
              pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Int32Enum,System::Object]::
                       Dictionary_2_System_Int32Enum_System_Object__get_Item
                                 ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar6,
                                  (Int32Enum__Enum)key,
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
              pIVar5 = pIVar5 + 1;
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
  this_00 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
            TypeInfo__SplashController->static_fields->objectIDToData;
  if (this_00 !=
      (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
    Regex+CachedCodeEntryKey,System::Object]::
    Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Clear
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
  this = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
         TypeInfo__SplashController->static_fields->objectIDToData;
  if (this == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) goto code_?;
  bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
          Object,GUILoginHandler+PlanetData]::
          Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                    (this,(Object *)objectID,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_SplashController::ObjectData>__ContainsKey_int_
                    );
  if (bVar1 == 0) {
    if ((TypeInfo__SplashController->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__SplashController);
    }
    this_00 = (Dictionary_2_System_Object_System_Object_ *)
              TypeInfo__SplashController->static_fields->objectIDToData;
    value = (Object *)func_?(TypeInfo__SplashController__ObjectData);
    if (value == (Object *)0x0) goto code_?;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,in_stack_2);
    value[1].klass = (Object__Class *)0x7f800000;
    *(undefined1 *)&value[3].monitor = 0;
    if (this_00 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__set_Item
              (this_00,(Object *)objectID,value,
               MethodInfo__System__Collections__Generic__Dictionary<int,_SplashController::ObjectData>__set_Item_int__SplashController__ObjectData_
              );
  }
  if ((TypeInfo__SplashController->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__SplashController);
  }
  this_01 = TypeInfo__SplashController->static_fields->objectIDToData;
  if (this_01 != (Dictionary_2_System_Int32_SplashController_ObjectData_ *)0x0) {
    pSVar3 = (SplashController_ObjectData *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,objectID,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_SplashController::ObjectData>__get_Item_int_
                       );
    iVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_frameCount((MethodInfo *)0x0);
    if (pSVar3 != (SplashController_ObjectData *)0x0) {
      (pSVar3->fields)._LastFrameInWater_k__BackingField = iVar4;
      fVar5 = (pSVar3->fields)._TimeSinceLastRingEmission_k__BackingField;
      fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0)
      ;
      (pSVar3->fields)._TimeSinceLastRingEmission_k__BackingField = fVar6 + fVar5;
      return pSVar3;
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  pSVar3 = (SplashController_ObjectData *)(*pcVar7)();
  return pSVar3;
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
  fVar1 = bounds.m_Extents.y;
  fVar2 = bounds.m_Extents.z;
  unique0x10000d8a = bounds.m_Extents._4_8_;
  pDVar3 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
            bounds.m_Extents.x;
  if ((TypeInfo__SplashController->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__SplashController);
    unique0x100008d0 = (int32_t)fVar2;
    auStack_4._4_4_ = fVar1;
  }
  auStack_4._0_4_ = pDVar3;
  pRVar5 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
            RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
            KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                      ((Regex_CachedCodeEntryKey *)&stack0xffffffb8,
                       (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                        *)&stack0xffffffc8,(MethodInfo *)0x0);
  fVar1 = (float)pRVar5->_options;
  pSVar6 = pRVar5->_pattern;
  pRVar5 = (Regex_CachedCodeEntryKey *)&stack0xffffffa4;
  puVar7 = &UNK_?;
  mscorlib.dll::System::Collections::Generic::
  Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::RegularExpressions::
  Regex+CachedCodeEntryKey,System::Object]::
  Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
            (pRVar5,(Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                      *)auStack_4,(MethodInfo *)0x0);
  puVar8 = &UNK_?;
  pWVar9 = MVGameControllerBase::MVGameControllerBase_get_WaterPlaneManager((MethodInfo *)0x0);
  if (pWVar9 == (WaterPlaneManager *)0x0) goto code_?;
  this_06 = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
  this_04 = (SplashController__Class **)
            UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)pWVar9,(MethodInfo *)0x0);
  if ((MethodInfo *)this_04 == (MethodInfo *)0x0) goto code_?;
  __return_storage_ptr__ = (MethodInfo *)aPStack_10;
  puVar11 = &UNK_?;
  pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                      ((Vector3 *)__return_storage_ptr__,(Transform *)this_04,(MethodInfo *)0x0);
  pPVar13 = (ParticleSystem *)pVVar12->y;
  if ((float)pPVar13 < fVar1) {
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
    this_04 = &TypeInfo__SplashController;
    __return_storage_ptr__ = (MethodInfo *)&UNK_?;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__SplashController->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
            TypeInfo__SplashController->static_fields->objectIDToData;
  if (this_00 == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0)
  goto code_?;
  bVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
           Object,GUILoginHandler+PlanetData]::
           Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                     (this_00,(Object *)objectID,
                      MethodInfo__System__Collections__Generic__Dictionary<int,_SplashController::ObjectData>__ContainsKey_int_
                     );
  if (bVar14 == 0) {
    method_00 = __return_storage_ptr__;
    if ((TypeInfo__SplashController->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
      method_00 = __return_storage_ptr__;
    }
    this_06 = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
    __return_storage_ptr__ = (MethodInfo *)func_?();
    if (__return_storage_ptr__ == (MethodInfo *)0x0) goto code_?;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)__return_storage_ptr__,ExceptionArgument__Enum_obj,method_00);
    __return_storage_ptr__->invoker_method = (InvokerMethod)0x7f800000;
    *(undefined1 *)&__return_storage_ptr__->field7_0x1c = 0;
    if (this_06 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    in_stack_15 = &UNK_?;
    puVar11 = (undefined *)objectID;
    this_04 = (SplashController__Class **)
              MethodInfo__System__Collections__Generic__Dictionary<int,_SplashController::ObjectData>__set_Item_int__SplashController__ObjectData_
    ;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__set_Item
              (this_06,(Object *)objectID,(Object *)__return_storage_ptr__,
               MethodInfo__System__Collections__Generic__Dictionary<int,_SplashController::ObjectData>__set_Item_int__SplashController__ObjectData_
              );
  }
  if ((TypeInfo__SplashController->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  this_01 = TypeInfo__SplashController->static_fields->objectIDToData;
  if (this_01 == (Dictionary_2_System_Int32_SplashController_ObjectData_ *)0x0)
  goto code_?;
  pOVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
            Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                      ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,objectID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_SplashController::ObjectData>__get_Item_int_
                      );
  pOVar17 = (Object__Class *)
            UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_frameCount((MethodInfo *)0x0);
  if (pOVar16 == (Object *)0x0) goto code_?;
  pOVar16[3].klass = pOVar17;
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  puVar18 = (undefined *)0x0;
  pOVar16[1].klass = (Object__Class *)(fVar1 + (float)auStack_4._0_4_);
  pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_size
                      ((Vector3 *)&stack0xfffffffc,&bounds,(MethodInfo *)0x0);
  this_03 = this;
  if ((float)auStack_4._0_4_ + pVVar12->y <= (float)auStack_4._4_4_) {
    return;
  }
  _Stack_18 = _Stack_8;
  pfVar19 = &(this->fields).timeBeforeNewRingIsEmitted;
  pIStack_20 = (Il2CppClass *)auStack_4._4_4_;
  pIStack_21 = unaff_retaddr;
  if (*pfVar19 <= (float)pOVar16[1].klass && (float)pOVar16[1].klass != *pfVar19) {
code_?:
    pPVar13 = (this_03->fields).waterRingParticles;
    if ((pPVar13 == (ParticleSystem *)0x0) ||
       (pTVar22 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pPVar13,(MethodInfo *)0x0), pTVar22 == (Transform *)0x0))
    goto code_?;
    value_01.y = (float)auStack_4._0_4_;
    value_01.x = fVar1;
    value_01.z = (float)auStack_4._4_4_;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (pTVar22,value_01,(MethodInfo *)0x0);
    pPVar13 = (this_03->fields).waterRingParticles;
    if (pPVar13 == (ParticleSystem *)0x0) goto code_?;
    pSVar6 = (String *)0x1;
    puVar18 = &UNK_?;
    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Emit_Internal
              (pPVar13,1,(MethodInfo *)0x0);
    *(ulonglong *)&pOVar16[1].monitor = CONCAT44(ppIStack_23,pIStack_21);
    pOVar16[1].klass = (Object__Class *)0x0;
    pOVar16[2].monitor = (MonitorData *)_Stack_8;
  }
  else {
    bounds.m_Center.z = (float)pOVar16[2].monitor;
    bounds.m_Center.x = (float)*(undefined8 *)&pOVar16[1].monitor;
    bounds.m_Center.y = (float)((ulonglong)*(undefined8 *)&pOVar16[1].monitor >> 0x20);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    in_stack_24 = (float)in_stack_15 - in_stack_24;
    in_stack_25 = in_stack_25 - (float)puVar8;
    unaff_EDI = (float)this_06 - unaff_EDI;
    if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Math);
    }
    dVar26 = (double)(in_stack_24 * in_stack_24 + in_stack_25 * in_stack_25
                     + unaff_EDI * unaff_EDI);
    if (dVar26 < 0.0) {
      func_?();
    }
    else {
      dVar26 = SQRT(dVar26);
    }
    pfVar19 = &(this_03->fields).distanceBeforeNewRingIsEmitted;
    if (*pfVar19 <= (float)dVar26 && (float)dVar26 != *pfVar19) goto code_?;
  }
  if (*(char *)&pOVar16[3].monitor != '\0') {
    return;
  }
  *(undefined1 *)&pOVar16[3].monitor = 1;
  this_05 = MVGameControllerBase::MVGameControllerBase_get_AudioManager((MethodInfo *)0x0);
  fVar1 = (float)((uint)velocity.y ^
                 __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
  if (fVar1 < 0.0) {
    fVar1 = 0.0;
  }
  else if (_UNK_? < fVar1) {
    fVar1 = _UNK_?;
  }
  if (this_05 != (AudioManager *)0x0) {
    position.y = (float)puVar7;
    position.x = (float)in_stack_27;
    position.z = (float)pRVar5;
    AudioManager::AudioManager_Play
              (this_05,StringLiteral_AvatarWaterSplashSound,(this_03->fields).splashSound,position,
               (fVar1 / _UNK_?) * (this_03->fields).splashSoundVolume,
               SoundRangeDistance__Enum_Long,1.0,(MethodInfo *)0x0);
    position_00.y = (float)__return_storage_ptr__;
    position_00.x = (float)puVar11;
    position_00.z = (float)this_04;
    SplashController_EmitWaterPillar(this_03,position_00,velocity,(MethodInfo *)0x0);
    this_02 = (this_03->fields).waterSplashParticles;
    auStack_4._0_4_ = velocity.z;
    if ((this_02 != (ParticleSystem *)0x0) &&
       (pTVar22 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this_02,(MethodInfo *)0x0), pTVar22 != (Transform *)0x0))
    {
      value.y = (float)pPVar13;
      value.x = (float)puVar18;
      value.z = (float)pSVar6;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (pTVar22,value,(MethodInfo *)0x0);
      pPVar13 = (this_03->fields).waterSplashParticles;
      if (pPVar13 != (ParticleSystem *)0x0) {
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
        ParticleSystem_get_collision(pPVar13,(MethodInfo *)0x0);
        fVar28 = (float10)func_?(&pIStack_21);
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
        ParticleSystem_MainModule_set_startSpeedMultiplier_Injected
                  ((ParticleSystem_MainModule *)&stack0xffffffa8,
                   (float)fVar28 * (this_03->fields).baseSplashParticlesSpeed,(MethodInfo *)0x0);
        pWVar9 = MVGameControllerBase::MVGameControllerBase_get_WaterPlaneManager
                            ((MethodInfo *)0x0);
        if (pWVar9 != (WaterPlaneManager *)0x0) {
          pCVar29 = WaterPlaneManager::WaterPlaneManager_get_WaterColor
                              ((Color *)(auStack_4 + 4),pWVar9,(MethodInfo *)0x0);
          pSStack_30 = (String *)(((this_03->fields).splashTint.r + pCVar29->r) * _UNK_?);
          _Stack_18 = (_union_154)(((this_03->fields).splashTint.g + pCVar29->g) * _UNK_?);
          pIStack_20 = (Il2CppClass *)
                       (((this_03->fields).splashTint.b + pCVar29->b) * _UNK_?);
          pIStack_21 = (Il2CppType *)(((this_03->fields).splashTint.a + pCVar29->a) * _UNK_?)
          ;
          color.g = (float)_Stack_18.rgctx_data;
          color.r = (float)pSStack_30;
          color.b = (float)pIStack_20;
          color.a = (float)pIStack_21;
          pPVar31 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MinMaxGradient
                    ::ParticleSystem_MinMaxGradient_op_Implicit
                              ((ParticleSystem_MinMaxGradient *)&this,color,(MethodInfo *)0x0);
          uVar32 = (pPVar31->m_ColorMax).b;
          uVar33 = pPVar31->m_Mode;
          uVar34 = pPVar31->m_GradientMin;
          uVar35 = pPVar31->m_GradientMax;
          uVar36 = (pPVar31->m_ColorMin).r;
          uVar37 = (pPVar31->m_ColorMin).g;
          uVar38 = (pPVar31->m_ColorMin).b;
          uVar39 = (pPVar31->m_ColorMin).a;
          value_00.m_ColorMin.a = (float)uVar39;
          value_00.m_ColorMin.b = (float)uVar38;
          value_00.m_ColorMin.g = (float)uVar37;
          value_00.m_ColorMin.r = (float)uVar36;
          uVar40 = (pPVar31->m_ColorMax).r;
          uVar41 = (pPVar31->m_ColorMax).g;
          value_00.m_ColorMax.g = (float)uVar41;
          value_00.m_ColorMax.r = (float)uVar40;
          value_00.m_GradientMax = (Gradient *)uVar35;
          value_00.m_GradientMin = (Gradient *)uVar34;
          value_00.m_Mode = uVar33;
          value_00.m_ColorMax.b = (float)uVar32;
          value_00.m_ColorMax.a = (pPVar31->m_ColorMax).a;
          UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
          ParticleSystem_MainModule_set_startColor(aPStack_10,value_00,(MethodInfo *)0x0);
          pPVar13 = (this_03->fields).waterSplashParticles;
          fVar28 = (float10)func_?();
          if (pPVar13 != (ParticleSystem *)0x0) {
            UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
            ParticleSystem_Emit_Internal
                      (pPVar13,(int)((float)fVar28 * (this_03->fields).baseNumberOfSplashParticles),
                       (MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar42 = (code *)swi(3);
  (*pcVar42)();
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
  if (this != (Dictionary_2_System_Int32_SplashController_ObjectData_ *)0x0) {
    mscorlib.dll::System::WeakReference`1[Object]::WeakReference_1_Object___ctor
              ((WeakReference_1_Object_ *)this,(Object *)0x8,
               MethodInfo__System__Collections__Generic__Dictionary<int,_SplashController::ObjectData>__Dictionary_int_
              );
    TypeInfo__SplashController->static_fields->objectIDToData = this;
    func_?(&TypeInfo__SplashController->static_fields->objectIDToData,this);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
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

