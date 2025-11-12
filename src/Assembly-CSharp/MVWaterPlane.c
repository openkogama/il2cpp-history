
/* Void Destroy() */

void Assembly-CSharp.dll::MVWaterPlane::MVWaterPlane_Destroy(MVWaterPlane *this,MethodInfo *method)

{
  if ((this->fields).addedToWPManager != 0) {
    this_00 = (this->fields).waterManager;
    if (this_00 == (WaterPlaneManager *)0x0) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    WaterPlaneManager::WaterPlaneManager_RemoveWaterPlaneLogicCube(this_00,this,(MethodInfo *)0x0);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
    FUN_?();
  }
  UpdateController::UpdateController_RemoveUpdateObject
            ((IUpdatecontrollerSubscriberUpdate *)this,(MethodInfo *)0x0);
  if ((this->fields)._.cullingSubscriberBase != (CullingSubscriberBase *)0x0) {
    CullingSubscriberBase::CullingSubscriberBase_Destroy
              ((this->fields)._.cullingSubscriberBase,(MethodInfo *)0x0);
    bVar2 = iRam_? != 0;
    (this->fields)._.cullingSubscriberBase = (CullingSubscriberBase *)0x0;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(this->fields)._.cullingSubscriberBase >> 0xc);
      puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar5 = *puVar4;
        LOCK();
        uVar6 = *puVar4;
        if (uVar5 == uVar6) {
          *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (uVar5 != uVar6);
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar7 = (this->fields)._._.gameObject;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pGVar7 != (GameObject *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pGVar7->fields)._.m_CachedPtr != (void *)0x0) {
      pGVar7 = (this->fields)._._.gameObject;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                ((Object_1 *)pGVar7,0.0,(MethodInfo *)0x0);
    }
  }
  if ((this->fields)._._.initializedFromInventory != 0) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar8 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar8 != (MVGameControllerBase *)0x0) &&
     (pMVar9 = (pMVar8->fields).game, pMVar9 != (MVNetworkGame *)0x0)) {
    pRVar10 = (pMVar9->fields).runtimeVariableNetworkManager;
    item = (this->fields)._._._.id;
    if (pRVar10 != (RuntimeVariableNetworkManager *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_01 = (HashSet_1_System_Int32Enum_ *)(pRVar10->fields).runtimeDataVariables;
      if (this_01 != (HashSet_1_System_Int32Enum_ *)0x0) {
        bVar11 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
                HashSet_1_System_Int32Enum__Contains
                          (this_01,item,
                           MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
        if (bVar11 != 0) {
          pMVar9 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar9 == (MVNetworkGame *)0x0) ||
             (pRVar10 = (pMVar9->fields).runtimeVariableNetworkManager,
             pRVar10 == (RuntimeVariableNetworkManager *)0x0)) goto DAT_?;
          RuntimeVariableNetworkManager::RuntimeVariableNetworkManager_RemoveRuntimeDataVariables
                    (pRVar10,(this->fields)._._._.id,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
DAT_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Bounds GetLocalBounds(BoundsContext) */

Bounds * Assembly-CSharp.dll::MVWaterPlane::MVWaterPlane_GetLocalBounds
                   (Bounds *__return_storage_ptr__,MVWaterPlane *this,
                   BoundsContext__Enum boundsContext,MethodInfo *method)

{
  fVar1 = (this->fields).localBounds.m_Center.y;
  uVar2 = *(undefined8 *)&(this->fields).localBounds.m_Center.z;
  fVar3 = (this->fields).localBounds.m_Extents.y;
  fVar4 = (this->fields).localBounds.m_Extents.z;
  (__return_storage_ptr__->m_Center).x = (this->fields).localBounds.m_Center.x;
  (__return_storage_ptr__->m_Center).y = fVar1;
  *(undefined8 *)&(__return_storage_ptr__->m_Center).z = uVar2;
  (__return_storage_ptr__->m_Extents).y = fVar3;
  (__return_storage_ptr__->m_Extents).z = fVar4;
  return __return_storage_ptr__;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVWaterPlane::MVWaterPlane_Initialize
               (MVWaterPlane *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Single);
    LOCK();
    UNLOCK();
    FUN_?(&_1925626019DF8597605C21A63C8ED15E1FFE58D1E27D69E1E77ADD2D4C43AAFE_Field);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_lethal);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_waterColor);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  this_00 = (this->fields).waterManager;
  if (this_00 != (WaterPlaneManager *)0x0) {
    WaterPlaneManager::WaterPlaneManager_AddWaterPlaneLogicCube(this_00,this,(MethodInfo *)0x0);
    pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
              *)(this->fields)._._._.data;
    (this->fields).addedToWPManager = 1;
    if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                   *)0x0) {
      iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::StyleComplexSelector+PseudoStateData]::
              Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                        (pDVar1,(Object *)StringLiteral_waterColor,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                         ->klass->rgctx_data[0x21].method);
      if (iVar2 < 0) {
        pDVar3 = (this->fields)._._._.data;
        array = (Array *)FUN_?(TypeInfo__System__Single,3);
        mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
        RuntimeHelpers_InitializeArray_1
                  (array,__1925626019DF8597605C21A63C8ED15E1FFE58D1E27D69E1E77ADD2D4C43AAFE_Field,
                   (MethodInfo *)0x0);
        if (pDVar3 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        in_R9D = CONCAT31((int3)(in_R9D >> 8),1);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  (pDVar3,(Object *)StringLiteral_waterColor,(Object *)array,in_R9D,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
      }
      pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                *)(this->fields)._._._.data;
      if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                     *)0x0) {
        iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::StyleComplexSelector+PseudoStateData]::
                Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                          (pDVar1,(Object *)StringLiteral_lethal,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                           ->klass->rgctx_data[0x21].method);
        lVar4 = lRam_?;
        if (iVar2 < 0) {
          pDVar3 = (this->fields)._._._.data;
          uStackX_8 = 0;
          if (*(int *)(lRam_? + 0x28) < 0) {
            if ((*(longlong *)(lRam_? + 0x60) == 0) ||
               ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
              value = (Object *)FUN_?(lRam_?);
              FUN_?(value + 1,&uStackX_8,(longlong)*(int *)(lVar4 + 0xf8) + -0x10);
              if (iRam_? != 0) {
                uVar5 = (uint)((ulonglong)(value + 1) >> 0xc);
                puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
                do {
                  uVar7 = *puVar6;
                  LOCK();
                  uVar8 = *puVar6;
                  if (uVar7 == uVar8) {
                    *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
                  }
                  UNLOCK();
                } while (uVar7 != uVar8);
              }
            }
            else {
              value = (Object *)0x0;
            }
          }
          else {
            value = (Object *)((ulonglong)uStackX_9 << 8);
          }
          if (pDVar3 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    (pDVar3,(Object *)StringLiteral_lethal,value,CONCAT31((int3)(in_R9D >> 8),1),
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
        }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(this->klass->vtable).OnDataUpdate.methodPtr)
                  (this,(this->klass->vtable).OnDataUpdate.method);
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVWaterPlane::MVWaterPlane_OnDataUpdate
               (MVWaterPlane *this,MethodInfo *method)

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
    FUN_?(&StringLiteral__MaskedColor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_lethal);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_waterColor);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
            *)(this->fields)._._._.data;
  if (pDVar1 == (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)0x0) goto code_?;
  iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
           UIElements::StyleComplexSelector+PseudoStateData]::
           Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                     (pDVar1,(Object *)StringLiteral_waterColor,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      ->klass->rgctx_data[0x21].method);
  if (-1 < iVar2) {
    pDVar3 = (this->fields)._._._.data;
    if ((pDVar3 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
       (pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            (pDVar3,(Object *)StringLiteral_waterColor,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            ), pSVar5 = TypeInfo__System__Single, pOVar4 == (Object *)0x0))
    goto code_?;
    lVar6 = FUN_?(pOVar4);
    if (lVar6 == 0) {
      FUN_?(pOVar4,pSVar5);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pWVar8 = (this->fields).waterManager;
    if (((*(int *)(lVar6 + 0x18) == 0) ||
        (fVar9 = *(float *)(lVar6 + 0x20), *(uint *)(lVar6 + 0x18) < 2)) ||
       (fVar10 = *(float *)(lVar6 + 0x24), *(uint *)(lVar6 + 0x18) < 3)) goto code_?;
    fVar11 = *(float *)(lVar6 + 0x28);
    if (pWVar8 == (WaterPlaneManager *)0x0) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&StringLiteral__RefrColor);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral__Color);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pRVar12 = (pWVar8->fields).underwaterCameraPlaneRenderer;
    if (pRVar12 == (Renderer *)0x0) goto code_?;
    pMVar13 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                        (pRVar12,(MethodInfo *)0x0);
    aCStack_14[0].g = fVar10;
    aCStack_14[0].r = fVar9;
    aCStack_14[0].a = 0.8;
    aCStack_14[0].b = fVar11;
    if (pMVar13 == (Material *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
              (pMVar13,StringLiteral__Color,aCStack_14,(MethodInfo *)0x0);
    pWVar15 = (pWVar8->fields).water;
    if ((pWVar15 == (Water *)0x0) ||
       (pRVar12 = (pWVar15->fields).meshRenderer, pRVar12 == (Renderer *)0x0))
    goto code_?;
    pMVar13 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                        (pRVar12,(MethodInfo *)0x0);
    aCStack_14[0].a = 0.8;
    if (pMVar13 == (Material *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
              (pMVar13,StringLiteral__RefrColor,aCStack_14,(MethodInfo *)0x0);
    pOVar16 = (this->fields)._._.component;
    if ((pOVar16 == (ObjectPrefab *)0x0) ||
       (pRVar17 = (pOVar16->fields).meshRenderers, pRVar17 == (Renderer__Array *)0x0))
    goto code_?;
    if ((int)pRVar17->max_length == 0) {
code_?:
      FUN_?();
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (pRVar17->vector[0] == (Renderer *)0x0) goto code_?;
    pMVar13 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                        (pRVar17->vector[0],(MethodInfo *)0x0);
    if (((*(int *)(lVar6 + 0x18) == 0) || (*(uint *)(lVar6 + 0x18) < 2)) ||
       (*(uint *)(lVar6 + 0x18) < 3)) goto code_?;
    if (pMVar13 == (Material *)0x0) goto code_?;
    aCStack_14[0].g = *(float *)(lVar6 + 0x24);
    aCStack_14[0].r = *(float *)(lVar6 + 0x20);
    aCStack_14[0].a = 1.0;
    aCStack_14[0].b = *(float *)(lVar6 + 0x28);
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
              (pMVar13,StringLiteral__MaskedColor,aCStack_14,(MethodInfo *)0x0);
  }
  pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
            *)(this->fields)._._._.data;
  if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)0x0) {
    iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
             UIElements::StyleComplexSelector+PseudoStateData]::
             Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                       (pDVar1,(Object *)StringLiteral_lethal,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        ->klass->rgctx_data[0x21].method);
    if (iVar2 < 0) {
      return;
    }
    pDVar3 = (this->fields)._._._.data;
    pWVar8 = (this->fields).waterManager;
    if (((pDVar3 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
        (pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                   Object]::Dictionary_2_System_Object_System_Object__get_Item
                             (pDVar3,(Object *)StringLiteral_lethal,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             ), pWVar8 != (WaterPlaneManager *)0x0)) && (pOVar4 != (Object *)0x0))
    {
      if ((pOVar4->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar4,lRam_?);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pWVar15 = (pWVar8->fields).water;
      bVar18 = *(bool *)&pOVar4[1].klass;
      if (pWVar15 != (Water *)0x0) {
        bVar19 = cRam_? == '\0';
        (pWVar15->fields).isLethal = bVar18;
        if (bVar19) {
          FUN_?(&StringLiteral__HorizonColor);
          LOCK();
          UNLOCK();
          FUN_?(&StringLiteral__BumpMap);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pRVar12 = (pWVar15->fields).meshRenderer;
        if (pRVar12 != (Renderer *)0x0) {
          pMVar13 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                              (pRVar12,(MethodInfo *)0x0);
          if (bVar18 == 0) {
            pTVar20 = (pWVar15->fields).m_WaterBumpTexture;
            if (pMVar13 != (Material *)0x0) {
              iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                                 (StringLiteral__BumpMap,(MethodInfo *)0x0);
              UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTextureImpl
                        (pMVar13,iVar2,pTVar20,(MethodInfo *)0x0);
              aCStack_14[0].r = (pWVar15->fields).m_WaterHorizon.r;
              aCStack_14[0].g = (pWVar15->fields).m_WaterHorizon.g;
              aCStack_14[0].b = (pWVar15->fields).m_WaterHorizon.b;
              aCStack_14[0].a = (pWVar15->fields).m_WaterHorizon.a;
code_?:
              UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
                        (pMVar13,StringLiteral__HorizonColor,aCStack_14,(MethodInfo *)0x0);
              return;
            }
          }
          else {
            pTVar20 = (pWVar15->fields).m_LethalBumpTexture;
            if (pMVar13 != (Material *)0x0) {
              iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                                 (StringLiteral__BumpMap,(MethodInfo *)0x0);
              UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTextureImpl
                        (pMVar13,iVar2,pTVar20,(MethodInfo *)0x0);
              aCStack_14[0].r = (pWVar15->fields).m_LethalHorizon.r;
              aCStack_14[0].g = (pWVar15->fields).m_LethalHorizon.g;
              aCStack_14[0].b = (pWVar15->fields).m_LethalHorizon.b;
              aCStack_14[0].a = (pWVar15->fields).m_LethalHorizon.a;
              goto code_?;
            }
          }
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


/* MVWaterPlane(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVWaterPlane::MVWaterPlane__ctor
               (MVWaterPlane *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Material);
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
              ((MVLogicObject *)this,data,(pPVar1->fields).mvWaterPlanePrefab,worldObjects,
               (MethodInfo *)0x0);
    pOVar2 = (this->fields)._._.component;
    if ((pOVar2 != (ObjectPrefab *)0x0) &&
       (pRVar3 = (pOVar2->fields).meshRenderers, pRVar3 != (Renderer__Array *)0x0)) {
      if ((int)pRVar3->max_length == 0) {
code_?:
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pRVar5 = pRVar3->vector[0];
      this_00 = ((((this->fields)._._.component)->fields).meshRenderers)->vector[0];
      if (this_00 != (Renderer *)0x0) {
        source = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                           (this_00,(MethodInfo *)0x0);
        this_02 = (Material *)FUN_?(TypeInfo__UnityEngine__Material);
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material__ctor_1
                  (this_02,source,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_SetMaterial
                  (pRVar5,this_02,(MethodInfo *)0x0);
        pOVar2 = (this->fields)._._.component;
        if ((pOVar2 != (ObjectPrefab *)0x0) &&
           (pRVar3 = (pOVar2->fields).meshRenderers, pRVar3 != (Renderer__Array *)0x0)) {
          if ((int)pRVar3->max_length == 0) goto code_?;
          pRVar5 = pRVar3->vector[0];
          if (pRVar5 != (Renderer *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            uStack_6 = 0;
            uStack_7 = 0;
            uStack_8 = 0;
            pvVar9 = (pRVar5->fields)._._.m_CachedPtr;
            if (pvVar9 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar5,(MethodInfo *)0x0);
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pcVar4 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
              uVar10 = func_?(&UNK_?);
              FUN_?(uVar10,0);
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pcRam_? = pcVar4;
            (*pcRam_?)(pvVar9);
            (this->fields).localBounds.m_Center.x = (float)uStack_6;
            (this->fields).localBounds.m_Center.y = uStack_6._4_4_;
            *(undefined8 *)&(this->fields).localBounds.m_Center.z = uStack_7;
            (this->fields).localBounds.m_Extents.y = (float)(undefined4)uStack_8;
            (this->fields).localBounds.m_Extents.z = (float)uStack_8._4_4_;
            this_01 = (this->fields)._._.gameObject;
            uStack_6._0_4_ = (this->fields).localBounds.m_Center.x;
            uStack_6._4_4_ = (this->fields).localBounds.m_Center.y;
            fVar11 = (this->fields).localBounds.m_Center.z;
            if ((this_01 != (GameObject *)0x0) &&
               (obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                (this_01,(MethodInfo *)0x0), obj != (Transform *)0x0)) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              uStack_12 = 0;
              fStack_13 = 0.0;
              pvVar9 = (obj->fields)._._.m_CachedPtr;
              if (pvVar9 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pcVar4 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
                uVar10 = func_?(&UNK_?);
                FUN_?(uVar10,0);
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pcRam_? = pcVar4;
              (*pcRam_?)(pvVar9,&uStack_12);
              bVar14 = cRam_? == '\0';
              (this->fields).localBounds.m_Center.x = (float)uStack_6 - (float)uStack_12;
              (this->fields).localBounds.m_Center.y = uStack_6._4_4_ - uStack_12._4_4_;
              (this->fields).localBounds.m_Center.z = fVar11 - fStack_13;
              if (bVar14) {
                FUN_?(&TypeInfo__MVGameControllerBase);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pMVar15 = TypeInfo__MVGameControllerBase->static_fields->instance;
              if (pMVar15 != (MVGameControllerBase *)0x0) {
                bVar14 = iRam_? != 0;
                (this->fields).waterManager = (pMVar15->fields).waterPlaneManager;
                if (bVar14) {
                  uVar16 = (uint)((ulonglong)&(this->fields).waterManager >> 0xc);
                  uVar17 = (ulonglong)((uVar16 & 0x1fffff) >> 6);
                  do {
                    uVar18 = *(ulonglong *)(uVar17 * 8 + 0xADDR);
                    puVar19 = (ulonglong *)(uVar17 * 8 + 0xADDR);
                    LOCK();
                    bVar14 = uVar18 == *puVar19;
                    if (bVar14) {
                      *puVar19 = uVar18 | 1L << (uVar16 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar14);
                }
                (this->fields)._._.interactionFlags =
                     (this->fields)._._.interactionFlags & 0xffffffffffffdfffU | 0x8000;
                return;
              }
            }
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

