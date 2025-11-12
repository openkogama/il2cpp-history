
/* Void Initialize() */

void Assembly-CSharp.dll::MVPointLightPreset::MVPointLightPreset_Initialize
               (MVPointLightPreset *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    auStack_1._8_8_ = &UNK_?;
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    auStack_1._8_8_ = &UNK_?;
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    auStack_1._8_8_ = &UNK_?;
    FUN_?(&StringLiteral_Inserted_Preset_Waterplane_witho);
    LOCK();
    UNLOCK();
    auStack_1._8_8_ = &UNK_?;
    FUN_?(&StringLiteral_color);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
            *)(this->fields)._._._._.data;
  if (pDVar2 == (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)0x0) {
    auStack_1._8_8_ = &UNK_?;
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  auStack_1._8_8_ = &UNK_?;
  iVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::StyleComplexSelector+PseudoStateData]::
          Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                    (pDVar2,(Object *)StringLiteral_color,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                     ->klass->rgctx_data[0x21].method);
  if (iVar4 < 0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      auStack_1._8_8_ = &UNK_?;
      FUN_?();
    }
    auStack_1._8_8_ = &UNK_?;
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_Inserted_Preset_Waterplane_witho,(MethodInfo *)0x0);
  }
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
  pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
            *)(this->fields)._._._._.data;
  if (pDVar2 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)0x0) {
    iVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      (pDVar2,(Object *)StringLiteral_hide,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                       ->klass->rgctx_data[0x21].method);
    if (-1 < iVar4) {
      this_00 = (this->fields)._._._._.data;
      if ((this_00 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
         (pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__get_Item
                              (this_00,(Object *)StringLiteral_hide,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              ), pOVar5 == (Object *)0x0)) goto code_?;
      if ((pOVar5->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar5,lRam_?);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (this->fields)._.inputVisible = *(char *)&pOVar5[1].klass == '\0';
    }
    pMVar6 = (this->fields)._.lightObject;
    if (pMVar6 != (MVPointLightObject *)0x0) {
      MVLogicObject::MVLogicObject_SetupCulling
                ((MVLogicObject *)this,(pMVar6->fields).visualObject,
                 TypeRef__System__Activator__T._0_4_,(MethodInfo *)0x0);
      MVPointLight::MVPointLight_SetLightToData((MVPointLight *)this,(MethodInfo *)0x0);
      MVPointLight::MVPointLight_UpdateTexture((MVPointLight *)this,(MethodInfo *)0x0);
      MVPointLight::MVPointLight_UpdateVisible((MVPointLight *)this,(MethodInfo *)0x0);
      MVPointLight::MVPointLight_UpdateColorForLightSphere((MVPointLight *)this,(MethodInfo *)0x0);
      pLVar7 = (this->fields)._.lightComponent;
      if (pLVar7 != (Light *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Light>_UnityEngine__Light_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar8 = (pLVar7->fields)._._._.m_CachedPtr;
        if (pvVar8 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar7,(MethodInfo *)0x0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcVar3 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
          uVar9 = func_?(&UNK_?);
          FUN_?(uVar9,0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcRam_? = pcVar3;
        radius = (float)(*pcRam_?)(pvVar8);
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
        pCVar10 = (this->fields)._._.cullingSubscriberBase;
        if (pCVar10 != (CullingSubscriberBase *)0x0) {
          CullingSubscriberBase::CullingSubscriberBase_Destroy(pCVar10,(MethodInfo *)0x0);
          puVar11 = (undefined8 *)
                    (*(this->klass->vtable).get_WorldPosition_1.methodPtr)
                              (auStack_1,this,(this->klass->vtable).get_WorldPosition_1.method);
          uVar9 = *puVar11;
          uVar12 = *(undefined4 *)(puVar11 + 1);
          callback = (UnityAction_1_UnityEngine_CullingGroupEvent_ *)
                     FUN_?(
                                  TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>
                                  );
          FUN_?(callback,this);
          pCVar10 = (CullingSubscriberBase *)FUN_?(TypeInfo__CullingSubscriberBase);
          CullingSubscriberBase::CullingSubscriberBase__ctor_1(pCVar10,callback,(MethodInfo *)0x0);
          auStack_1._8_4_ = uVar12;
          auStack_1._0_8_ = uVar9;
          CullingSubscriberBase::CullingSubscriberBase_Setup
                    (pCVar10,radius,(Vector3 *)auStack_1,(MethodInfo *)0x0);
          bVar13 = iRam_? != 0;
          (this->fields)._._.cullingSubscriberBase = pCVar10;
          if (bVar13) {
            uVar14 = (uint)((ulonglong)&(this->fields)._._.cullingSubscriberBase >> 0xc);
            uVar15 = (ulonglong)((uVar14 & 0x1fffff) >> 6);
            do {
              uVar16 = *(ulonglong *)(uVar15 * 8 + 0xADDR);
              puVar17 = (ulonglong *)(uVar15 * 8 + 0xADDR);
              LOCK();
              bVar13 = uVar16 == *puVar17;
              if (bVar13) {
                *puVar17 = uVar16 | 1L << (uVar14 & 0x3f);
              }
              UNLOCK();
            } while (!bVar13);
          }
          this_01 = (Action_2_Int32Enum_Object_ *)
                    FUN_?(TypeInfo__System__Action<LogicInputState,_LogicObjectManager>);
          mscorlib.dll::System::Action`2[Int32Enum,Object]::Action_2_Int32Enum_Object___ctor
                    (this_01,(Object *)this,
                     MethodInfo__MVPointLight__OnInputStateUpdate_LogicInputState__LogicObjectManager_
                     ,(MethodInfo *)0x0);
          pIVar18 = LogicClientsideFactory::
                    LogicClientsideFactory_CreateStateChangeInputSignalReceiver
                              ((MVWorldObject *)this,1,
                               (Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0,
                               (Action_2_LogicInputState_LogicObjectManager_ *)this_01,
                               (MethodInfo *)0x0);
          bVar13 = iRam_? != 0;
          (this->fields)._._InputSignalReceiver_k__BackingField = pIVar18;
          if (bVar13) {
            uVar14 = (uint)((ulonglong)&(this->fields)._._InputSignalReceiver_k__BackingField >> 0xc
                           );
            uVar15 = (ulonglong)((uVar14 & 0x1fffff) >> 6);
            do {
              uVar16 = *(ulonglong *)(uVar15 * 8 + 0xADDR);
              puVar17 = (ulonglong *)(uVar15 * 8 + 0xADDR);
              LOCK();
              bVar13 = uVar16 == *puVar17;
              if (bVar13) {
                *puVar17 = uVar16 | 1L << (uVar14 & 0x3f);
              }
              UNLOCK();
            } while (!bVar13);
          }
          pLVar7 = (this->fields)._.lightComponent;
          if (((this->fields)._._InputSignalReceiver_k__BackingField != (IInputSignalReceiver *)0x0)
             && (uVar19 = FUN_?(1,TypeInfo__IInputSignalReceiver), pLVar7 != (Light *)0x0)) {
            if (cRam_? == '\0') {
              auStack_1._8_8_ = &UNK_?;
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                            ,uVar19,0);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (pLVar7 == (Light *)0x0) {
              auStack_1._8_8_ = &UNK_?;
              FUN_?();
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pvVar8 = (pLVar7->fields)._._._.m_CachedPtr;
            if (pvVar8 == (void *)0x0) {
              auStack_1._8_8_ = &UNK_?;
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar7,(MethodInfo *)0x0);
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pcVar3 = pcRam_?;
            if (pcRam_? == (code *)0x0) {
              auStack_1._8_8_ = &UNK_?;
              pcVar3 = (code *)FUN_?(&UNK_?);
              if (pcVar3 == (code *)0x0) {
                auStack_1._8_8_ = &UNK_?;
                uVar9 = func_?(&UNK_?);
                auStack_1._8_8_ = &UNK_?;
                FUN_?(uVar9,0);
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam_?)(pvVar8,uVar19);
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


/* MVPointLightPreset(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVPointLightPreset::MVPointLightPreset__ctor
               (MVPointLightPreset *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Application);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVPointLight::MVPointLight__ctor((MVPointLight *)this,data,worldObjects,(MethodInfo *)0x0);
  piVar1 = &(this->fields)._._._.interactionFlags;
  *piVar1 = *piVar1 | 0x10000;
  if (*(int *)&(TypeInfo__UnityEngine__Application->_1).field_0x1c == 0) {
    FUN_?();
  }
  return;
}

