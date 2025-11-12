
/* Void Initialize() */

void Assembly-CSharp.dll::MVSmoke::MVSmoke_Initialize(MVSmoke *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<LogicInputState,_LogicObjectManager>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IInputSignalReceiver);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVSmoke__OnInputStateUpdate_LogicInputState__LogicObjectManager_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  MVLogicObject::MVLogicObject_SetupCulling
            ((MVLogicObject *)this,(this->fields)._._.gameObject,TypeRef__System__Activator__T._0_4_
             ,(MethodInfo *)0x0);
  pPVar1 = (this->fields).particleSystem;
  if (pPVar1 != (ParticleSystem *)0x0) {
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&pPStackX_8 >> 0xc);
      uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
        puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar5;
        if (bVar6) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    pcVar7 = pcRam_?;
    pPStackX_8 = pPVar1;
    pPStackX_18 = pPVar1;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
      uVar8 = func_?(&UNK_?);
      FUN_?(uVar8,0);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pcRam_? = pcVar7;
    radius = (float)(*pcRam_?)(&pPStackX_18);
    MVSmoke_SetupSmokeCulling(this,radius,(this->fields)._._.gameObject,(MethodInfo *)0x0);
    MVSmoke_SetSmokeProperties(this,(MethodInfo *)0x0);
    this_00 = (Action_2_Int32Enum_Object_ *)
              FUN_?(TypeInfo__System__Action<LogicInputState,_LogicObjectManager>);
    mscorlib.dll::System::Action`2[Int32Enum,Object]::Action_2_Int32Enum_Object___ctor
              (this_00,(Object *)this,
               MethodInfo__MVSmoke__OnInputStateUpdate_LogicInputState__LogicObjectManager_,
               (MethodInfo *)0x0);
    pIVar9 = LogicClientsideFactory::LogicClientsideFactory_CreateStateChangeInputSignalReceiver
                       ((MVWorldObject *)this,1,(Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0,
                        (Action_2_LogicInputState_LogicObjectManager_ *)this_00,(MethodInfo *)0x0);
    bVar6 = iRam_? != 0;
    (this->fields)._InputSignalReceiver_k__BackingField = pIVar9;
    if (bVar6) {
      uVar2 = (uint)((ulonglong)&(this->fields)._InputSignalReceiver_k__BackingField >> 0xc);
      uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
        puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar5;
        if (bVar6) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    if ((this->fields)._InputSignalReceiver_k__BackingField != (IInputSignalReceiver *)0x0) {
      toggle = FUN_?(1,TypeInfo__IInputSignalReceiver);
      MVSmoke_ToggleEmitter(this,toggle,(MethodInfo *)0x0);
      pPVar1 = (this->fields).particleSystem;
      if (pPVar1 != (ParticleSystem *)0x0) {
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play
                  (pPVar1,1,(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void InitializeInventory() */

void Assembly-CSharp.dll::MVSmoke::MVSmoke_InitializeInventory(MVSmoke *this,MethodInfo *method)

{
  MVLogicObject::MVLogicObject_InitializeInventory((MVLogicObject *)this,(MethodInfo *)0x0);
  obj = (this->fields).particleSystem;
  if (obj == (ParticleSystem *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar2 = (obj->fields)._._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar2,1);
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVSmoke::MVSmoke_OnDataUpdate(MVSmoke *this,MethodInfo *method)

{
  MVSmoke_SetSmokeProperties(this,(MethodInfo *)0x0);
  woID = (this->fields)._._._.id;
  worldObjectManager = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__,
                  worldObjectManager,0);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  resetNodes = (HashSet_1_System_Int32_ *)
               FUN_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  FUN_?(resetNodes,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  MVWorldObject.dll::LogicObjectManager::LogicObjectManager_ResetNode
            (woID,resetNodes,(IWorldObjectManager *)worldObjectManager,(MethodInfo *)0x0);
  if (resetNodes != (HashSet_1_System_Int32_ *)0x0) {
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnInputStateUpdate(LogicInputState, LogicObjectManager) */

void Assembly-CSharp.dll::MVSmoke::MVSmoke_OnInputStateUpdate
               (MVSmoke *this,LogicInputState__Enum logicInputState,
               LogicObjectManager *logicObjectManager,MethodInfo *method)

{
  if (logicInputState == LogicInputState__Enum_FromColdToHot) {
    uVar1 = CONCAT71((int7)(CONCAT44(in_register_00000014,logicInputState) >> 8),1);
  }
  else {
    if (logicInputState != LogicInputState__Enum_FromHotToCold) {
      return;
    }
    uVar1 = 0;
  }
  apPStackX_8[0] = (this->fields).particleSystem;
  if (apPStackX_8[0] == (ParticleSystem *)0x0) {
    FUN_?(this,uVar1,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)apPStackX_8 >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (ulonglong)(uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  pcVar2 = pcRam_?;
  pPStackX_20 = apPStackX_8[0];
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(&pPStackX_20,uVar1 & 0xff);
  return;
}


/* Void SetSmokeProperties() */

void Assembly-CSharp.dll::MVSmoke::MVSmoke_SetSmokeProperties(MVSmoke *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__AnimationCurve);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Single);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_color);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_wind);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_length);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).particleSystem;
  PStackX_18.m_ParticleSystem = (ParticleSystem *)0x0;
  if (pPVar1 != (ParticleSystem *)0x0) {
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&pPStackX_8 >> 0xc);
      uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
        puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar5;
        if (bVar6) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    pcVar7 = pcRam_?;
    pPStackX_8 = pPVar1;
    pPStackX_20 = pPVar1;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
      uVar8 = func_?(&UNK_?);
      FUN_?(uVar8,0);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pcRam_? = pcVar7;
    (*pcRam_?)(&pPStackX_20);
    pDVar9 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
              *)(this->fields)._._._.data;
    if (pDVar9 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                   *)0x0) {
      iVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::StyleComplexSelector+PseudoStateData]::
              Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                        (pDVar9,(Object *)StringLiteral_color,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                         ->klass->rgctx_data[0x21].method);
      if (-1 < iVar10) {
        pDVar11 = (this->fields)._._._.data;
        if (pDVar11 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        pOVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            (pDVar11,(Object *)StringLiteral_color,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
        pSVar13 = TypeInfo__System__Single;
        if (pOVar12 == (Object *)0x0) {
          lVar14 = 0;
        }
        else {
          lVar14 = FUN_?(pOVar12,TypeInfo__System__Single);
          if (lVar14 == 0) {
            FUN_?(pOVar12,pSVar13);
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        pPVar1 = (this->fields).particleSystem;
        if (pPVar1 == (ParticleSystem *)0x0) goto code_?;
        if (iRam_? != 0) {
          uVar2 = (uint)((ulonglong)&pPStackX_8 >> 0xc);
          uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
          do {
            uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
            puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
            LOCK();
            bVar6 = uVar4 == *puVar5;
            if (bVar6) {
              *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
            }
            UNLOCK();
          } while (!bVar6);
        }
        pPStackX_8 = pPVar1;
        PStackX_18.m_ParticleSystem = pPVar1;
        if (lVar14 == 0) goto code_?;
        if ((((*(int *)(lVar14 + 0x18) == 0) || (*(uint *)(lVar14 + 0x18) < 2)) ||
            (*(uint *)(lVar14 + 0x18) < 3)) || (*(uint *)(lVar14 + 0x18) < 4)) {
          FUN_?();
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        auStack_15._4_4_ = *(float *)(lVar14 + 0x24);
        auStack_15._0_4_ = *(float *)(lVar14 + 0x20);
        uStack_16._4_4_ = *(float *)(lVar14 + 0x2c);
        uStack_16._0_4_ = *(float *)(lVar14 + 0x28);
        pPVar17 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MinMaxGradient::
                  ParticleSystem_MinMaxGradient_op_Implicit
                            (&PStack_18,(Color *)auStack_15,(MethodInfo *)0x0);
        PStack_19.m_Mode = pPVar17->m_Mode;
        PStack_19._4_4_ = *(undefined4 *)&pPVar17->field_0x4;
        PStack_19.m_GradientMin = pPVar17->m_GradientMin;
        PStack_19.m_GradientMax = pPVar17->m_GradientMax;
        PStack_19.m_ColorMin.r = (pPVar17->m_ColorMin).r;
        PStack_19.m_ColorMin.g = (pPVar17->m_ColorMin).g;
        PStack_19.m_ColorMin.b = (pPVar17->m_ColorMin).b;
        PStack_19.m_ColorMin.a = (pPVar17->m_ColorMin).a;
        PStack_19.m_ColorMax.r = (pPVar17->m_ColorMax).r;
        PStack_19.m_ColorMax.g = (pPVar17->m_ColorMax).g;
        PStack_19.m_ColorMax.b = (pPVar17->m_ColorMax).b;
        PStack_19.m_ColorMax.a = (pPVar17->m_ColorMax).a;
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
        ParticleSystem_MainModule_set_startColor(&PStackX_18,&PStack_19,(MethodInfo *)0x0);
      }
      pDVar9 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                *)(this->fields)._._._.data;
      fVar20 = 0.0;
      if (pDVar9 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                     *)0x0) {
        iVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::StyleComplexSelector+PseudoStateData]::
                Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                          (pDVar9,(Object *)StringLiteral_length,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                           ->klass->rgctx_data[0x21].method);
        if (iVar10 < 0) {
          return;
        }
        pDVar9 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                  *)(this->fields)._._._.data;
        if (pDVar9 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                       *)0x0) {
          iVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::StyleComplexSelector+PseudoStateData]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                            (pDVar9,(Object *)StringLiteral_wind,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                             ->klass->rgctx_data[0x21].method);
          if (-1 < iVar10) {
            pDVar11 = (this->fields)._._._.data;
            if ((pDVar11 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
               (pOVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                    (pDVar11,(Object *)StringLiteral_wind,
                                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                    ), pOVar12 == (Object *)0x0)) goto code_?;
            if ((pOVar12->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)
               ) {
              FUN_?(pOVar12,lRam_?);
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            fVar20 = *(float *)&pOVar12[1].klass;
          }
          pDVar11 = (this->fields)._._._.data;
          if ((pDVar11 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
             (pOVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                  (pDVar11,(Object *)StringLiteral_length,
                                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                  ), pOVar12 != (Object *)0x0)) {
            if ((pOVar12->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)
               ) {
              FUN_?(pOVar12);
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            fVar21 = *(float *)&pOVar12[1].klass;
            MVSmoke_SetupSmokeCulling
                      (this,fVar21 * (this->fields).lengthCullingScale,(this->fields)._._.gameObject,
                       (MethodInfo *)0x0);
            pPVar1 = (this->fields).particleSystem;
            if (pPVar1 != (ParticleSystem *)0x0) {
              if (iRam_? != 0) {
                uVar2 = (uint)((ulonglong)&pPStackX_8 >> 0xc);
                uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
                do {
                  uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
                  puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
                  LOCK();
                  bVar6 = uVar4 == *puVar5;
                  if (bVar6) {
                    *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar6);
              }
              fVar22 = fVar20 + _UNK_?;
              pcVar7 = pcRam_?;
              pPStackX_8 = pPVar1;
              pPStack_23 = pPVar1;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
                uVar8 = func_?(&UNK_?);
                FUN_?(uVar8,0);
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              pcRam_? = pcVar7;
              (*pcRam_?)(&pPStack_23,fVar21 / fVar22);
              pPVar1 = (this->fields).particleSystem;
              if (pPVar1 != (ParticleSystem *)0x0) {
                obj_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                   ((Component *)pPVar1,(MethodInfo *)0x0);
                obj = (this->fields)._._.transform;
                if (obj != (Transform *)0x0) {
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  auStack_15 = (undefined1  [8])0x0;
                  uStack_16 = (Gradient *)0x0;
                  pvVar24 = (obj->fields)._._.m_CachedPtr;
                  if (pvVar24 == (void *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  pcVar7 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
                    uVar8 = func_?(&UNK_?);
                    FUN_?(uVar8,0);
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  pcRam_? = pcVar7;
                  (*pcRam_?)(pvVar24);
                  if (obj_00 != (Transform *)0x0) {
                    PStack_18._0_8_ = auStack_15;
                    PStack_18.m_GradientMin = uStack_16;
                    if (cRam_? == '\0') {
                      FUN_?(&
                                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                   );
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pvVar24 = (obj_00->fields)._._.m_CachedPtr;
                    if (pvVar24 == (void *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                      ThrowHelper_2_ThrowNullReferenceException((Object *)obj_00,(MethodInfo *)0x0);
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    pcVar7 = pcRam_?;
                    if ((pcRam_? == (code *)0x0) &&
                       (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
                      uVar8 = func_?(&UNK_?);
                      FUN_?(uVar8,0);
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    pcRam_? = pcVar7;
                    (*pcRam_?)(pvVar24);
                    PStack_25.m_ParticleSystem = (this->fields).particleSystem;
                    if (PStack_25.m_ParticleSystem != (ParticleSystem *)0x0) {
                      if (iRam_? != 0) {
                        uVar2 = (uint)((ulonglong)&pPStackX_8 >> 0xc);
                        uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
                        do {
                          uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
                          puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
                          LOCK();
                          bVar6 = uVar4 == *puVar5;
                          if (bVar6) {
                            *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
                          }
                          UNLOCK();
                        } while (!bVar6);
                      }
                      pPStackX_8 = PStack_25.m_ParticleSystem;
                      min = (AnimationCurve *)FUN_?();
                      pvVar24 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                                AnimationCurve_Internal_Create
                                          ((Keyframe__Array *)0x0,(MethodInfo *)0x0);
                      (min->fields).m_Ptr = pvVar24;
                      (min->fields).m_RequiresNativeCleanup = 1;
                      if (pvVar24 != (void *)0x0) {
                        pcVar7 = pcRam_?;
                        if ((pcRam_? == (code *)0x0) &&
                           (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0))
                        {
                          uVar8 = func_?(&UNK_?);
                          FUN_?(uVar8,0);
                          pcVar7 = (code *)swi(3);
                          (*pcVar7)();
                          return;
                        }
                        pcRam_? = pcVar7;
                        (*pcRam_?)(pvVar24,0,0);
                        pvVar24 = (min->fields).m_Ptr;
                        if (pvVar24 != (void *)0x0) {
                          pcVar7 = pcRam_?;
                          if ((pcRam_? == (code *)0x0) &&
                             (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)
                             ) {
                            uVar8 = func_?(&UNK_?);
                            FUN_?(uVar8,0);
                            pcVar7 = (code *)swi(3);
                            (*pcVar7)();
                            return;
                          }
                          pcRam_? = pcVar7;
                          (*pcRam_?)(pvVar24,_UNK_?,fVar20);
                          PStack_19.m_Mode = 0;
                          PStack_19._4_4_ = 0;
                          PStack_19.m_GradientMin = (Gradient *)0x0;
                          PStack_19.m_GradientMax = (Gradient *)0x0;
                          PStack_19.m_ColorMin.r = 0.0;
                          PStack_19.m_ColorMin.g = 0.0;
                          UnityEngine.ParticleSystemModule.dll::UnityEngine::
                          ParticleSystem+MinMaxCurve::ParticleSystem_MinMaxCurve__ctor_2
                                    ((ParticleSystem_MinMaxCurve *)&PStack_19,_UNK_?,min,min
                                     ,(MethodInfo *)0x0);
                          PStack_18.m_Mode = PStack_19.m_Mode;
                          PStack_18._4_4_ = PStack_19._4_4_;
                          PStack_18.m_GradientMin = PStack_19.m_GradientMin;
                          PStack_18.m_GradientMax = PStack_19.m_GradientMax;
                          PStack_18.m_ColorMin.r = PStack_19.m_ColorMin.r;
                          PStack_18.m_ColorMin.g = PStack_19.m_ColorMin.g;
                          UnityEngine.ParticleSystemModule.dll::UnityEngine::
                          ParticleSystem+ForceOverLifetimeModule::
                          ParticleSystem_ForceOverLifetimeModule_set_x
                                    (&PStack_25,(ParticleSystem_MinMaxCurve *)&PStack_18,
                                     (MethodInfo *)0x0);
                          return;
                        }
                      }
                      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                      ThrowHelper_2_ThrowNullReferenceException((Object *)min,(MethodInfo *)0x0);
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                  }
                  FUN_?();
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
              }
            }
          }
          FUN_?();
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* CullingSubscriberBase SetupSmokeCulling(Single, GameObject) */

CullingSubscriberBase *
Assembly-CSharp.dll::MVSmoke::MVSmoke_SetupSmokeCulling
          (MVSmoke *this,float radius,GameObject *lodGameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingSubscriberBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._.cullingSubscriberBase != (CullingSubscriberBase *)0x0) {
    CullingSubscriberBase::CullingSubscriberBase_Destroy
              ((this->fields)._.cullingSubscriberBase,(MethodInfo *)0x0);
  }
  puVar1 = (undefined8 *)
           (*(this->klass->vtable).get_WorldPosition_1.methodPtr)
                     (aVStack_2,this,(this->klass->vtable).get_WorldPosition_1.method);
  uVar3 = *puVar1;
  fVar4 = *(float *)(puVar1 + 1);
  callback = (UnityAction_1_UnityEngine_CullingGroupEvent_ *)
             FUN_?(
                          TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>
                          );
  FUN_?(callback,this);
  this_00 = (CullingSubscriberBase *)FUN_?(TypeInfo__CullingSubscriberBase);
  CullingSubscriberBase::CullingSubscriberBase__ctor_1(this_00,callback,(MethodInfo *)0x0);
  aVStack_2[0]._0_8_ = uVar3;
  aVStack_2[0].z = fVar4;
  CullingSubscriberBase::CullingSubscriberBase_Setup(this_00,radius,aVStack_2,(MethodInfo *)0x0);
  bVar5 = iRam_? != 0;
  (this->fields)._.cullingSubscriberBase = this_00;
  if (bVar5) {
    uVar6 = (uint)((ulonglong)&(this->fields)._.cullingSubscriberBase >> 0xc);
    uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
    do {
      uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
      puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
      LOCK();
      bVar5 = uVar8 == *puVar9;
      if (bVar5) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
    this_00 = (this->fields)._.cullingSubscriberBase;
  }
  return this_00;
}


/* Void ToggleEmitter(Boolean) */

void Assembly-CSharp.dll::MVSmoke::MVSmoke_ToggleEmitter
               (MVSmoke *this,bool toggle,MethodInfo *method)

{
  puVar1 = (ulonglong *)CONCAT71(in_register_00000011,toggle);
  apPStackX_8[0] = (this->fields).particleSystem;
  if (apPStackX_8[0] == (ParticleSystem *)0x0) {
    FUN_?(this,puVar1);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)apPStackX_8 >> 0xc);
    method = (MethodInfo *)(ulonglong)(uVar3 & 0x3f);
    puVar1 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar1;
      LOCK();
      uVar5 = *puVar1;
      if (uVar4 == uVar5) {
        *puVar1 = uVar4 | 1L << (longlong)method;
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  pcVar2 = pcRam_?;
  pPStackX_20 = apPStackX_8[0];
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?,puVar1,method), pcVar2 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(&pPStackX_20,toggle);
  return;
}


/* MVSmoke(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVSmoke::MVSmoke__ctor
               (MVSmoke *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem__UnityEngine__Vector3__UnityEngine__Quaternion_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = cRam_? == '\0';
  (this->fields).lengthCullingScale = 1.5;
  if (bVar1) {
    FUN_?(&TypeInfo__PrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar2 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar2 != (PrefabPool *)0x0) {
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data,(pPVar2->fields).mvSmokePrefab,worldObjects,
               (MethodInfo *)0x0);
    piVar3 = &(this->fields)._._.interactionFlags;
    *piVar3 = *piVar3 | 0x18000;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__PrefabPool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar2 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar2 != (PrefabPool *)0x0) {
      pGVar4 = (this->fields)._._.gameObject;
      pPVar5 = (pPVar2->fields).particleFluffySmoke;
      if ((pGVar4 != (GameObject *)0x0) &&
         (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (pGVar4,(MethodInfo *)0x0), pTVar6 != (Transform *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        uStack_7 = 0;
        uStack_8 = 0;
        pvVar9 = (pTVar6->fields)._._.m_CachedPtr;
        if (pvVar9 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar6,(MethodInfo *)0x0);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pcVar10 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
          uVar11 = func_?(&UNK_?);
          FUN_?(uVar11,0);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pcRam_? = pcVar10;
        (*pcRam_?)(pvVar9,&uStack_7);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Quaternion);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pQVar12 = TypeInfo__UnityEngine__Quaternion->static_fields;
        uVar11._0_4_ = (pQVar12->identityQuaternion).x;
        uVar11._4_4_ = (pQVar12->identityQuaternion).y;
        uVar13._0_4_ = (pQVar12->identityQuaternion).z;
        uVar13._4_4_ = (pQVar12->identityQuaternion).w;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        uStack_14 = uStack_7;
        puStack_15 = (undefined *)CONCAT44(puStack_15._4_4_,uStack_8);
        uStack_16 = uVar11;
        uStack_17 = uVar13;
        pPVar5 = (ParticleSystem *)FUN_?(pPVar5);
        bVar1 = iRam_? != 0;
        (this->fields).particleSystem = pPVar5;
        if (bVar1) {
          uVar18 = (uint)((ulonglong)&(this->fields).particleSystem >> 0xc);
          uVar19 = (ulonglong)((uVar18 & 0x1fffff) >> 6);
          do {
            uVar20 = *(ulonglong *)(uVar19 * 8 + 0xADDR);
            puVar21 = (ulonglong *)(uVar19 * 8 + 0xADDR);
            LOCK();
            bVar1 = uVar20 == *puVar21;
            if (bVar1) {
              *puVar21 = uVar20 | 1L << (uVar18 & 0x3f);
            }
            UNLOCK();
          } while (!bVar1);
        }
        pPVar5 = (this->fields).particleSystem;
        if (pPVar5 != (ParticleSystem *)0x0) {
          pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)pPVar5,(MethodInfo *)0x0);
          pGVar4 = (this->fields)._._.gameObject;
          if ((pGVar4 != (GameObject *)0x0) &&
             (value = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                (pGVar4,(MethodInfo *)0x0), pTVar6 != (Transform *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                      (pTVar6,value,(MethodInfo *)0x0);
            pPVar5 = (this->fields).particleSystem;
            if (pPVar5 != (ParticleSystem *)0x0) {
              UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
              ParticleSystem_Stop_1(pPVar5,1,(MethodInfo *)0x0);
              pPStackX_20 = (this->fields).particleSystem;
              if (pPStackX_20 == (ParticleSystem *)0x0) {
                FUN_?(this,0,0);
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              if (iRam_? != 0) {
                uVar18 = (uint)((ulonglong)&stack0x00000008 >> 0xc);
                puVar21 = (ulonglong *)((ulonglong)((uVar18 & 0x1fffff) >> 6) * 8 + 0xADDR);
                do {
                  uVar20 = *puVar21;
                  LOCK();
                  uVar19 = *puVar21;
                  if (uVar20 == uVar19) {
                    *puVar21 = uVar20 | 1L << (ulonglong)(uVar18 & 0x3f);
                  }
                  UNLOCK();
                } while (uVar20 != uVar19);
              }
              pcVar10 = pcRam_?;
              if (pcRam_? == (code *)0x0) {
                pcVar10 = (code *)FUN_?(&UNK_?);
                if (pcVar10 == (code *)0x0) {
                  uVar11 = func_?(&UNK_?);
                  FUN_?(uVar11,0);
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
              }
              pcRam_? = pcVar10;
              (*pcRam_?)(&pPStackX_20,0);
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

