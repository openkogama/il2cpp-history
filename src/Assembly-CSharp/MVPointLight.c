
/* Void Initialize() */

void Assembly-CSharp.dll::MVPointLight::MVPointLight_Initialize
               (MVPointLight *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<LogicInputState,_LogicObjectManager>);
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
    FUN_?(&TypeInfo__IInputSignalReceiver);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVPointLight__OnInputStateUpdate_LogicInputState__LogicObjectManager_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_hide);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)(this->fields)._._._.data;
  if (this_00 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0
     ) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      (this_00,(Object *)StringLiteral_hide,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                       ->klass->rgctx_data[0x21].method);
    if (-1 < iVar1) {
      this_01 = (this->fields)._._._.data;
      if ((this_01 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
         (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                   Object]::Dictionary_2_System_Object_System_Object__get_Item
                             (this_01,(Object *)StringLiteral_hide,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             ), pOVar2 == (Object *)0x0)) goto code_?;
      if ((pOVar2->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar2,lRam_?);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (this->fields).inputVisible = *(char *)&pOVar2[1].klass == '\0';
    }
    pMVar4 = (this->fields).lightObject;
    if (pMVar4 != (MVPointLightObject *)0x0) {
      MVLogicObject::MVLogicObject_SetupCulling
                ((MVLogicObject *)this,(pMVar4->fields).visualObject,
                 TypeRef__System__Activator__T._0_4_,(MethodInfo *)0x0);
      MVPointLight_SetLightToData(this,(MethodInfo *)0x0);
      MVPointLight_UpdateTexture(this,(MethodInfo *)0x0);
      MVPointLight_UpdateVisible(this,(MethodInfo *)0x0);
      MVPointLight_UpdateColorForLightSphere(this,(MethodInfo *)0x0);
      pLVar5 = (this->fields).lightComponent;
      if (pLVar5 != (Light *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Light>_UnityEngine__Light_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar6 = (pLVar5->fields)._._._.m_CachedPtr;
        if (pvVar6 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar5,(MethodInfo *)0x0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcVar3 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
          uVar7 = func_?(&UNK_?);
          FUN_?(uVar7,0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcRam_? = pcVar3;
        radius = (float)(*pcRam_?)(pvVar6);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__CullingSubscriberBase);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>)
          ;
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pCVar8 = (this->fields)._.cullingSubscriberBase;
        if (pCVar8 != (CullingSubscriberBase *)0x0) {
          CullingSubscriberBase::CullingSubscriberBase_Destroy(pCVar8,(MethodInfo *)0x0);
          puVar9 = (undefined8 *)
                    (*(this->klass->vtable).get_WorldPosition_1.methodPtr)
                              (auStack_10,this,(this->klass->vtable).get_WorldPosition_1.method);
          uVar7 = *puVar9;
          uVar11 = *(undefined4 *)(puVar9 + 1);
          callback = (UnityAction_1_UnityEngine_CullingGroupEvent_ *)
                     FUN_?(
                                  TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>
                                  );
          FUN_?(callback,this);
          pCVar8 = (CullingSubscriberBase *)FUN_?(TypeInfo__CullingSubscriberBase);
          CullingSubscriberBase::CullingSubscriberBase__ctor_1(pCVar8,callback,(MethodInfo *)0x0);
          auStack_10._8_4_ = uVar11;
          auStack_10._0_8_ = uVar7;
          CullingSubscriberBase::CullingSubscriberBase_Setup
                    (pCVar8,radius,(Vector3 *)auStack_10,(MethodInfo *)0x0);
          bVar12 = iRam_? != 0;
          (this->fields)._.cullingSubscriberBase = pCVar8;
          if (bVar12) {
            uVar13 = (uint)((ulonglong)&(this->fields)._.cullingSubscriberBase >> 0xc);
            uVar14 = (ulonglong)((uVar13 & 0x1fffff) >> 6);
            do {
              uVar15 = *(ulonglong *)(uVar14 * 8 + 0xADDR);
              puVar16 = (ulonglong *)(uVar14 * 8 + 0xADDR);
              LOCK();
              bVar12 = uVar15 == *puVar16;
              if (bVar12) {
                *puVar16 = uVar15 | 1L << (uVar13 & 0x3f);
              }
              UNLOCK();
            } while (!bVar12);
          }
          this_02 = (Action_2_Int32Enum_Object_ *)
                    FUN_?(TypeInfo__System__Action<LogicInputState,_LogicObjectManager>);
          mscorlib.dll::System::Action`2[Int32Enum,Object]::Action_2_Int32Enum_Object___ctor
                    (this_02,(Object *)this,
                     MethodInfo__MVPointLight__OnInputStateUpdate_LogicInputState__LogicObjectManager_
                     ,(MethodInfo *)0x0);
          pIVar17 = LogicClientsideFactory::
                    LogicClientsideFactory_CreateStateChangeInputSignalReceiver
                              ((MVWorldObject *)this,1,
                               (Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0,
                               (Action_2_LogicInputState_LogicObjectManager_ *)this_02,
                               (MethodInfo *)0x0);
          bVar12 = iRam_? != 0;
          (this->fields)._InputSignalReceiver_k__BackingField = pIVar17;
          if (bVar12) {
            uVar13 = (uint)((ulonglong)&(this->fields)._InputSignalReceiver_k__BackingField >> 0xc);
            uVar14 = (ulonglong)((uVar13 & 0x1fffff) >> 6);
            do {
              uVar15 = *(ulonglong *)(uVar14 * 8 + 0xADDR);
              puVar16 = (ulonglong *)(uVar14 * 8 + 0xADDR);
              LOCK();
              bVar12 = uVar15 == *puVar16;
              if (bVar12) {
                *puVar16 = uVar15 | 1L << (uVar13 & 0x3f);
              }
              UNLOCK();
            } while (!bVar12);
          }
          pLVar5 = (this->fields).lightComponent;
          if (((this->fields)._InputSignalReceiver_k__BackingField != (IInputSignalReceiver *)0x0)
             && (uVar18 = FUN_?(1,TypeInfo__IInputSignalReceiver), pLVar5 != (Light *)0x0)) {
            if (cRam_? == '\0') {
              auStack_10._8_8_ = &UNK_?;
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                            ,uVar18,0);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (pLVar5 == (Light *)0x0) {
              auStack_10._8_8_ = &UNK_?;
              FUN_?();
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pvVar6 = (pLVar5->fields)._._._.m_CachedPtr;
            if (pvVar6 == (void *)0x0) {
              auStack_10._8_8_ = &UNK_?;
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar5,(MethodInfo *)0x0);
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pcVar3 = pcRam_?;
            if (pcRam_? == (code *)0x0) {
              auStack_10._8_8_ = &UNK_?;
              pcVar3 = (code *)FUN_?(&UNK_?);
              if (pcVar3 == (code *)0x0) {
                auStack_10._8_8_ = &UNK_?;
                uVar7 = func_?(&UNK_?);
                auStack_10._8_8_ = &UNK_?;
                FUN_?(uVar7,0);
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam_?)(pvVar6,uVar18);
            return;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean IsVisible() */

bool Assembly-CSharp.dll::MVPointLight::MVPointLight_IsVisible
               (MVPointLight *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
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
    FUN_?(&StringLiteral_hide);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)(this->fields)._._._.data;
  if (this_00 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0
     ) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      (this_00,(Object *)StringLiteral_hide,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                       ->klass->rgctx_data[0x21].method);
    if ((iVar1 < 0) || ((this->fields).inputVisible == 0)) {
      return 0;
    }
    this_01 = (this->fields)._._._.data;
    if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (this_01,(Object *)StringLiteral_hide,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pOVar2 != (Object *)0x0) {
        if ((pOVar2->klass->_0).element_class == *(Il2CppClass **)(lRam_? + 0x40)) {
          return *(char *)&pOVar2[1].klass == '\0';
        }
        FUN_?(pOVar2,lRam_?);
        pcVar3 = (code *)swi(3);
        bVar4 = (*pcVar3)();
        return bVar4;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVPointLight::MVPointLight_OnDataUpdate
               (MVPointLight *this,MethodInfo *method)

{
  MVPointLight_SetLightToData(this,(MethodInfo *)0x0);
  MVPointLight_UpdateVisible(this,(MethodInfo *)0x0);
  MVPointLight_UpdateTexture(this,(MethodInfo *)0x0);
  MVPointLight_UpdateColorForLightSphere(this,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::MVPointLight::MVPointLight_OnInputStateUpdate
               (MVPointLight *this,LogicInputState__Enum logicInputState,
               LogicObjectManager *logicObjectManager,MethodInfo *method)

{
  if (logicInputState == LogicInputState__Enum_FromColdToHot) {
    pLVar1 = (this->fields).lightComponent;
    if (pLVar1 == (Light *)0x0) {
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)pLVar1,1,(MethodInfo *)0x0);
    (this->fields).inputVisible = 1;
  }
  else {
    if (logicInputState != LogicInputState__Enum_FromHotToCold) {
      return;
    }
    pLVar1 = (this->fields).lightComponent;
    if (pLVar1 == (Light *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)pLVar1,0,(MethodInfo *)0x0);
    (this->fields).inputVisible = 0;
  }
  pMVar3 = (this->fields).lightObject;
  if (pMVar3 != (MVPointLightObject *)0x0) {
    obj = (pMVar3->fields).pointLightPlaneMesh;
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                    ,0);
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_hide);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)(this->fields)._._._.data;
    if (this_00 !=
        (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
        0x0) {
      pSVar4 = StringLiteral_hide;
      iVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::StyleComplexSelector+PseudoStateData]::
              Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                        (this_00,(Object *)StringLiteral_hide,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                         ->klass->rgctx_data[0x21].method);
      if ((iVar5 < 0) || ((this->fields).inputVisible == 0)) {
        uVar6 = (ulonglong)pSVar4 & 0xffffffffffffff00;
      }
      else {
        this_01 = (this->fields)._._._.data;
        if ((this_01 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
           (pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                     ::Object]::Dictionary_2_System_Object_System_Object__get_Item
                               (this_01,(Object *)StringLiteral_hide,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                               ), pOVar7 == (Object *)0x0)) goto code_?;
        if ((pOVar7->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
          FUN_?(pOVar7,lRam_?);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar6 = CONCAT71((int7)((ulonglong)pOVar7->klass >> 8),*(char *)&pOVar7[1].klass == '\0');
      }
      if (obj != (MeshRenderer *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                        ,uVar6,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (obj == (MeshRenderer *)0x0) {
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pvVar8 = (obj->fields)._._._.m_CachedPtr;
        if (pvVar8 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar9 = func_?(&UNK_?);
          FUN_?(uVar9,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam_?)(pvVar8,uVar6 & 0xff);
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetLightToData() */

void Assembly-CSharp.dll::MVPointLight::MVPointLight_SetLightToData
               (MVPointLight *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
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
    FUN_?(&StringLiteral_intensity);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_range);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_color);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
            *)(this->fields)._._._.data;
  if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)0x0) {
    iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      (pDVar1,(Object *)StringLiteral_color,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                       ->klass->rgctx_data[0x21].method);
    if (-1 < iVar2) {
      pDVar3 = (this->fields)._._._.data;
      if ((pDVar3 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
         (pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                   Object]::Dictionary_2_System_Object_System_Object__get_Item
                             (pDVar3,(Object *)StringLiteral_color,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             ), pSVar5 = TypeInfo__System__Single, pOVar4 == (Object *)0x0)) {
code_?:
        FUN_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar7 = FUN_?(pOVar4);
      if (lVar7 == 0) {
        FUN_?(pOVar4,pSVar5);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pLVar8 = (this->fields).lightComponent;
      if (((*(int *)(lVar7 + 0x18) == 0) || (*(uint *)(lVar7 + 0x18) < 2)) ||
         (*(uint *)(lVar7 + 0x18) < 3)) {
        FUN_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      fStack_9 = *(float *)(lVar7 + 0x28);
      if (pLVar8 == (Light *)0x0) goto code_?;
      uStack_10 = CONCAT44(*(undefined4 *)(lVar7 + 0x24),*(undefined4 *)(lVar7 + 0x20));
      uStack_11 = 0x3f800000;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Light>_UnityEngine__Light_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar12 = (pLVar8->fields)._._._.m_CachedPtr;
      if (pvVar12 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar8,(MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcVar6 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
        uVar13 = func_?(&UNK_?);
        FUN_?(uVar13,0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcRam_? = pcVar6;
      (*pcRam_?)(pvVar12,&uStack_10);
    }
    pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
              *)(this->fields)._._._.data;
    if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                   *)0x0) {
      iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::StyleComplexSelector+PseudoStateData]::
              Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                        (pDVar1,(Object *)StringLiteral_intensity,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                         ->klass->rgctx_data[0x21].method);
      if (iVar2 < 0) {
        return;
      }
      pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                *)(this->fields)._._._.data;
      if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                     *)0x0) {
        iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::StyleComplexSelector+PseudoStateData]::
                Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                          (pDVar1,(Object *)StringLiteral_range,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                           ->klass->rgctx_data[0x21].method);
        if (iVar2 < 0) {
          return;
        }
        pDVar3 = (this->fields)._._._.data;
        if ((pDVar3 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
           (pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                     ::Object]::Dictionary_2_System_Object_System_Object__get_Item
                               (pDVar3,(Object *)StringLiteral_range,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                               ), pOVar4 != (Object *)0x0)) {
          if ((pOVar4->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
            FUN_?(pOVar4,lRam_?);
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pDVar3 = (this->fields)._._._.data;
          value = *(float *)&pOVar4[1].klass;
          if ((pDVar3 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
             (pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                 (pDVar3,(Object *)StringLiteral_intensity,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 ), pOVar4 != (Object *)0x0)) {
            if ((pOVar4->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40))
            {
              FUN_?(pOVar4,lRam_?);
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pLVar8 = (this->fields).lightComponent;
            if (pLVar8 != (Light *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Light::Light_set_intensity
                        (pLVar8,*(float *)&pOVar4[1].klass,(MethodInfo *)0x0);
              pLVar8 = (this->fields).lightComponent;
              if (pLVar8 != (Light *)0x0) {
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Light>_UnityEngine__Light_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pvVar12 = (pLVar8->fields)._._._.m_CachedPtr;
                if (pvVar12 != (void *)0x0) {
                  pcVar6 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
                    uVar13 = func_?(&UNK_?);
                    FUN_?(uVar13,0);
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  pcRam_? = pcVar6;
                  (*pcRam_?)(pvVar12,value);
                  fVar14 = (value / _UNK_?) * _UNK_?;
                  if (fVar14 < _UNK_?) {
                    fVar14 = _UNK_?;
                  }
                  pMVar15 = (this->fields).lightObject;
                  if ((pMVar15 != (MVPointLightObject *)0x0) &&
                     (obj = (pMVar15->fields).pointLightPlaneTransform, obj != (Transform *)0x0)) {
                    uStack_10 = CONCAT44(fVar14,fVar14);
                    fStack_9 = fVar14;
                    if (cRam_? == '\0') {
                      FUN_?(&
                                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                   );
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pvVar12 = (obj->fields)._._.m_CachedPtr;
                    if (pvVar12 == (void *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    pcVar6 = pcRam_?;
                    if ((pcRam_? == (code *)0x0) &&
                       (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
                      uVar13 = func_?(&UNK_?);
                      FUN_?(uVar13,0);
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    pcRam_? = pcVar6;
                    (*pcRam_?)(pvVar12,&uStack_10);
                    this_00 = (this->fields)._.cullingSubscriberBase;
                    if (this_00 != (CullingSubscriberBase *)0x0) {
                      CullingSubscriberBase::CullingSubscriberBase_set_Radius
                                (this_00,value,(MethodInfo *)0x0);
                      return;
                    }
                  }
                  FUN_?();
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar8,(MethodInfo *)0x0);
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetupLightCulling(Single) */

void Assembly-CSharp.dll::MVPointLight::MVPointLight_SetupLightCulling
               (MVPointLight *this,float radius,MethodInfo *method)

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
  pCVar1 = (this->fields)._.cullingSubscriberBase;
  if (pCVar1 == (CullingSubscriberBase *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  CullingSubscriberBase::CullingSubscriberBase_Destroy(pCVar1,(MethodInfo *)0x0);
  puVar3 = (undefined8 *)
           (*(this->klass->vtable).get_WorldPosition_1.methodPtr)
                     (aVStack_4,this,(this->klass->vtable).get_WorldPosition_1.method);
  uVar5 = *puVar3;
  fVar6 = *(float *)(puVar3 + 1);
  callback = (UnityAction_1_UnityEngine_CullingGroupEvent_ *)
             FUN_?(
                          TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>
                          );
  FUN_?(callback,this);
  pCVar1 = (CullingSubscriberBase *)FUN_?(TypeInfo__CullingSubscriberBase);
  CullingSubscriberBase::CullingSubscriberBase__ctor_1(pCVar1,callback,(MethodInfo *)0x0);
  aVStack_4[0]._0_8_ = uVar5;
  aVStack_4[0].z = fVar6;
  CullingSubscriberBase::CullingSubscriberBase_Setup(pCVar1,radius,aVStack_4,(MethodInfo *)0x0);
  bVar7 = iRam_? != 0;
  (this->fields)._.cullingSubscriberBase = pCVar1;
  if (bVar7) {
    uVar8 = (uint)((ulonglong)&(this->fields)._.cullingSubscriberBase >> 0xc);
    uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
    do {
      uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
      puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
      LOCK();
      bVar7 = uVar10 == *puVar11;
      if (bVar7) {
        *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  return;
}


/* Void UpdateColorForLightSphere() */

void Assembly-CSharp.dll::MVPointLight::MVPointLight_UpdateColorForLightSphere
               (MVPointLight *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Single);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__TintColor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_color);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._._.data;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (this_00,(Object *)StringLiteral_color,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    pSVar2 = TypeInfo__System__Single;
    if (pOVar1 == (Object *)0x0) {
      lVar3 = 0;
    }
    else {
      lVar3 = FUN_?(pOVar1);
      if (lVar3 == 0) {
        FUN_?(pOVar1,pSVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pMVar5 = (this->fields).lightObject;
    if ((pMVar5 != (MVPointLightObject *)0x0) &&
       (obj = (pMVar5->fields).pointLightPlaneMesh, obj != (MeshRenderer *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar6 = (obj->fields)._._._.m_CachedPtr;
      if (pvVar6 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar7 = func_?(&UNK_?);
        FUN_?(uVar7,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
      lVar8 = (*pcRam_?)(pvVar6);
      if (lVar8 != 0) {
        if (*(int *)(lVar8 + 0x18) == 0) {
code_?:
          FUN_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (lVar3 != 0) {
          if (((*(int *)(lVar3 + 0x18) == 0) ||
              (CStack_9.r = *(float *)(lVar3 + 0x20), *(uint *)(lVar3 + 0x18) < 2)) ||
             (CStack_9.g = *(float *)(lVar3 + 0x24), *(uint *)(lVar3 + 0x18) < 3))
          goto code_?;
          CStack_9.b = *(float *)(lVar3 + 0x28);
          if (*(Material **)(lVar8 + 0x20) != (Material *)0x0) {
            CStack_9.a = 1.0;
            UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
                      (*(Material **)(lVar8 + 0x20),StringLiteral__TintColor,&CStack_9,
                       (MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdateTexture() */

void Assembly-CSharp.dll::MVPointLight::MVPointLight_UpdateTexture
               (MVPointLight *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
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
    FUN_?(&StringLiteral_halo);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__unity3d);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)(this->fields)._._._.data;
  if (this_00 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0
     ) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      (this_00,(Object *)StringLiteral_halo,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                       ->klass->rgctx_data[0x21].method);
    if (iVar1 < 0) {
      return;
    }
    pMVar2 = (this->fields).lightObject;
    if (((pMVar2 != (MVPointLightObject *)0x0) &&
        (pSVar3 = (pMVar2->fields).streamedTexture, pSVar3 != (StreamedTextureToMeshRenderer *)0x0))
       && (pSVar4 = (pSVar3->fields)._._.url, pSVar4 != (String *)0x0)) {
      pSVar4 = mscorlib.dll::System::String::String_Remove_1
                         (pSVar4,(pSVar4->fields)._stringLength + -9,(MethodInfo *)0x0);
      this_01 = (this->fields)._._._.data;
      if ((this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
         (pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                   Object]::Dictionary_2_System_Object_System_Object__get_Item
                             (this_01,(Object *)StringLiteral_halo,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             ), pOVar5 != (Object *)0x0)) {
        if ((pOVar5->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
          FUN_?(pOVar5);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar1 = *(int32_t *)&pOVar5[1].klass;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__Number);
          LOCK();
          UNLOCK();
          FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
             field_0x135 & 1) == 0) {
          FUN_?();
        }
        if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
          FUN_?();
        }
        aRStack_7[0]._pointer._value = (void *)0x0;
        aRStack_7[0]._length = 0;
        aRStack_7[0]._12_4_ = 0;
        str1 = mscorlib.dll::System::Number::Number_FormatInt32
                         (iVar1,aRStack_7,(IFormatProvider *)0x0,(MethodInfo *)0x0);
        pSVar4 = mscorlib.dll::System::String::String_Concat_5
                           (pSVar4,str1,StringLiteral__unity3d,(MethodInfo *)0x0);
        pMVar2 = (this->fields).lightObject;
        if ((pMVar2 != (MVPointLightObject *)0x0) &&
           (pSVar3 = (pMVar2->fields).streamedTexture,
           pSVar3 != (StreamedTextureToMeshRenderer *)0x0)) {
          bVar8 = iRam_? != 0;
          (pSVar3->fields)._._.url = pSVar4;
          if (bVar8) {
            uVar9 = (uint)((ulonglong)&(pSVar3->fields)._._.url >> 0xc);
            puVar10 = (ulonglong *)((ulonglong)((uVar9 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar11 = *puVar10;
              LOCK();
              uVar12 = *puVar10;
              if (uVar11 == uVar12) {
                *puVar10 = uVar11 | 1L << (uVar9 & 0x3f);
              }
              UNLOCK();
            } while (uVar11 != uVar12);
          }
          pMVar2 = (this->fields).lightObject;
          if ((pMVar2 != (MVPointLightObject *)0x0) &&
             (pSVar3 = (pMVar2->fields).streamedTexture,
             pSVar3 != (StreamedTextureToMeshRenderer *)0x0)) {
            StreamingAsset::StreamingAsset_Download_Cached
                      ((StreamingAsset *)pSVar3,(pSVar3->fields)._._.url,
                       (pSVar3->fields)._._.onAssetSetAction,
                       WWWRequestPriority__Enum_WaitUntilSyncronizingIsDone,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void UpdateVisible() */

void Assembly-CSharp.dll::MVPointLight::MVPointLight_UpdateVisible
               (MVPointLight *this,MethodInfo *method)

{
  pMVar1 = (this->fields).lightObject;
  if (pMVar1 != (MVPointLightObject *)0x0) {
    obj = (pMVar1->fields).pointLightPlaneMesh;
    if (cRam_? == '\0') {
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
      FUN_?(&StringLiteral_hide);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)(this->fields)._._._.data;
    if (this_00 !=
        (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
        0x0) {
      pSVar2 = StringLiteral_hide;
      iVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::StyleComplexSelector+PseudoStateData]::
              Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                        (this_00,(Object *)StringLiteral_hide,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                         ->klass->rgctx_data[0x21].method);
      if ((iVar3 < 0) || ((this->fields).inputVisible == 0)) {
        uVar4 = (ulonglong)pSVar2 & 0xffffffffffffff00;
      }
      else {
        this_01 = (this->fields)._._._.data;
        if ((this_01 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
           (pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                     ::Object]::Dictionary_2_System_Object_System_Object__get_Item
                               (this_01,(Object *)StringLiteral_hide,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                               ), pOVar5 == (Object *)0x0)) goto code_?;
        if ((pOVar5->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
          FUN_?(pOVar5,lRam_?);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar4 = CONCAT71((int7)((ulonglong)pOVar5->klass >> 8),*(char *)&pOVar5[1].klass == '\0');
      }
      if (obj != (MeshRenderer *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                        ,uVar4,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (obj == (MeshRenderer *)0x0) {
          FUN_?();
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pvVar7 = (obj->fields)._._._.m_CachedPtr;
        if (pvVar7 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pcVar6 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
          uVar8 = func_?(&UNK_?);
          FUN_?(uVar8,0);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pcRam_? = pcVar6;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam_?)(pvVar7,uVar4 & 0xff);
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* MVPointLight(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVPointLight::MVPointLight__ctor
               (MVPointLight *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVPointLightObject);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data,(ObjectPrefab *)(pPVar1->fields).mvPointLightPrefab,
               worldObjects,(MethodInfo *)0x0);
    piVar2 = &(this->fields)._._.interactionFlags;
    *piVar2 = *piVar2 | 0x18000;
    pMVar3 = (MVPointLightObject *)(this->fields)._._.component;
    if (pMVar3 == (MVPointLightObject *)0x0) {
      (this->fields).lightObject = (MVPointLightObject *)0x0;
    }
    else {
      bVar4 = (TypeInfo__MVPointLightObject->_1).naturalAligment;
      if (((((ObjectPrefab__Class *)pMVar3->klass)->_1).naturalAligment < bVar4) ||
         ((((ObjectPrefab__Class *)pMVar3->klass)->_1).typeHierarchy[(ulonglong)bVar4 - 1] !=
          (Il2CppClass *)TypeInfo__MVPointLightObject)) {
        FUN_?(pMVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      (this->fields).lightObject = pMVar3;
      bVar4 = (TypeInfo__MVPointLightObject->_1).naturalAligment;
      if (((((ObjectPrefab__Class *)pMVar3->klass)->_1).naturalAligment < bVar4) ||
         ((((ObjectPrefab__Class *)pMVar3->klass)->_1).typeHierarchy[(ulonglong)bVar4 - 1] !=
          (Il2CppClass *)TypeInfo__MVPointLightObject)) {
        FUN_?(pMVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)&(this->fields).lightObject >> 0xc);
      lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar9 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar10 = uVar8 == *puVar9;
        if (bVar10) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
    iVar11 = iRam_?;
    pMVar3 = (this->fields).lightObject;
    if (pMVar3 != (MVPointLightObject *)0x0) {
      (this->fields).lightComponent = (pMVar3->fields).pointLight;
      if (iVar11 != 0) {
        uVar6 = (uint)((ulonglong)&(this->fields).lightComponent >> 0xc);
        lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar9 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar10 = uVar8 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
      this_00 = (this->fields).lightComponent;
      if (this_00 != (Light *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)this_00,0,(MethodInfo *)0x0);
        this_01 = (this->fields)._._.gameObject;
        if (this_01 != (GameObject *)0x0) {
          obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (this_01,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
          if (obj == (Transform *)0x0) {
            FUN_?();
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uStack_13._0_4_ = (pVVar12->oneVector).x;
          uStack_13._4_4_ = (pVVar12->oneVector).y;
          fStack_14 = (pVVar12->oneVector).z;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar15 = (obj->fields)._._.m_CachedPtr;
          if (pvVar15 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pcVar5 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
            uVar16 = func_?(&UNK_?);
            FUN_?(uVar16,0);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pcRam_? = pcVar5;
          (*pcRam_?)(pvVar15,&uStack_13);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

