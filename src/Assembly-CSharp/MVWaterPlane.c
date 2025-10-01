
/* Void Destroy() */

void Assembly-CSharp.dll::MVWaterPlane::MVWaterPlane_Destroy(MVWaterPlane *this,MethodInfo *method)

{
  if ((this->fields).addedToWPManager == 0) {
code_?:
    MVLogicObject::MVLogicObject_Destroy((MVLogicObject *)this,(MethodInfo *)0x0);
    return;
  }
  this_00 = (this->fields).waterManager;
  if (this_00 != (WaterPlaneManager *)0x0) {
    (this_00->fields).waterPlaneLogicCube = (MVWaterPlane *)0x0;
    func_?(&(this_00->fields).waterPlaneLogicCube,0);
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this_00,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                (pTVar1,(Transform *)0x0,0,(MethodInfo *)0x0);
      pTVar1 = (this_00->fields).underwaterCameraPlane;
      if (pTVar1 != (Transform *)0x0) {
        pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pTVar1,(MethodInfo *)0x0);
        value = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this_00,(MethodInfo *)0x0);
        if (pTVar1 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                    (pTVar1,value,(MethodInfo *)0x0);
          pTVar1 = (this_00->fields).underwaterCameraPlane;
          if (pTVar1 != (Transform *)0x0) {
            pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pTVar1,(MethodInfo *)0x0);
            if (pGVar2 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar2,0,(MethodInfo *)0x0);
              this_01 = (this_00->fields).water;
              if (this_01 != (Water *)0x0) {
                pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject((Component *)this_01,(MethodInfo *)0x0);
                if (pGVar2 != (GameObject *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar2,0,(MethodInfo *)0x0);
                  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                            ((Behaviour *)this_00,1,(MethodInfo *)0x0);
                  pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_gameObject((Component *)this_00,(MethodInfo *)0x0);
                  if (pGVar2 != (GameObject *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar2,1,(MethodInfo *)0x0);
                    goto code_?;
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
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Bounds GetLocalBounds(BoundsContext) */

Bounds * Assembly-CSharp.dll::MVWaterPlane::MVWaterPlane_GetLocalBounds
                   (Bounds *__return_storage_ptr__,MVWaterPlane *this,
                   BoundsContext__Enum boundsContext,MethodInfo *method)

{
  fVar1 = (this->fields).localBounds.m_Center.y;
  fVar2 = (this->fields).localBounds.m_Center.z;
  fVar3 = (this->fields).localBounds.m_Extents.x;
  (__return_storage_ptr__->m_Center).x = (this->fields).localBounds.m_Center.x;
  (__return_storage_ptr__->m_Center).y = fVar1;
  (__return_storage_ptr__->m_Center).z = fVar2;
  (__return_storage_ptr__->m_Extents).x = fVar3;
  fVar1 = (this->fields).localBounds.m_Extents.z;
  (__return_storage_ptr__->m_Extents).y = (this->fields).localBounds.m_Extents.y;
  (__return_storage_ptr__->m_Extents).z = fVar1;
  return __return_storage_ptr__;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVWaterPlane::MVWaterPlane_Initialize
               (MVWaterPlane *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&TypeInfo__System__Single);
    func_?(&::_1925626019DF8597605C21A63C8ED15E1FFE58D1E27D69E1E77ADD2D4C43AAFE_Field);
    func_?(&StringLiteral_lethal);
    func_?(&StringLiteral_waterColor);
    cRam_? = '\x01';
  }
  logicCube = this;
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  this_00 = (logicCube->fields).waterManager;
  if (this_00 != (WaterPlaneManager *)0x0) {
    WaterPlaneManager::WaterPlaneManager_AddWaterPlaneLogicCube(this_00,logicCube,(MethodInfo *)0x0)
    ;
    pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
             (logicCube->fields)._._._.data;
    (logicCube->fields).addedToWPManager = 1;
    if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
      this = (MVWaterPlane *)
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
      ;
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                        (pDVar1,(Object *)StringLiteral_waterColor,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        );
      if (bVar2 == 0) {
        pDVar3 = (logicCube->fields)._._._.data;
        in_stack_4 = 3;
        method = (MethodInfo *)TypeInfo__System__Single;
        this = (MVWaterPlane *)&UNK_?;
        array = (Array *)func_?();
        mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
        RuntimeHelpers_InitializeArray_1
                  (array,__1925626019DF8597605C21A63C8ED15E1FFE58D1E27D69E1E77ADD2D4C43AAFE_Field,
                   (MethodInfo *)0x0);
        if (pDVar3 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__set_Item
                  (pDVar3,(Object *)StringLiteral_waterColor,(Object *)array,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                  );
      }
      pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
               (logicCube->fields)._._._.data;
      if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
        bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                          (pDVar1,(Object *)StringLiteral_lethal,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                          );
        if (bVar2 == 0) {
          pDVar3 = (logicCube->fields)._._._.data;
          this = (MVWaterPlane *)((int)&this + 3);
          value = (Object *)func_?();
          if (pDVar3 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__set_Item
                    (pDVar3,(Object *)StringLiteral_lethal,value,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                    );
        }
        method = (MethodInfo *)(logicCube->klass->vtable).OnRunTimeDataUpdate.methodPtr;
        this = logicCube;
        (*(code *)(logicCube->klass->vtable).OnDataUpdate.method)();
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVWaterPlane::MVWaterPlane_OnDataUpdate
               (MVWaterPlane *this,MethodInfo *method)

{
  pMVar1 = this;
  lVar2 = ZEXT48(this) << 0x20;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral__MaskedColor);
    func_?(&StringLiteral_lethal);
    func_?(&StringLiteral_waterColor);
    cRam_? = '\x01';
  }
  pDVar3 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
           (pMVar1->fields)._._._.data;
  lVar4 = lVar2;
  if (pDVar3 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
code_?:
    lVar2 = lVar4;
    func_?();
code_?:
    this = (MVWaterPlane *)((ulonglong)lVar2 >> 0x20);
    func_?();
  }
  else {
    bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
             UIElements::TextureId]::
             Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                       (pDVar3,(Object *)StringLiteral_waterColor,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                       );
    if (bVar5 == 0) {
code_?:
      pDVar3 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
               (pMVar1->fields)._._._.data;
      lVar4 = lVar2;
      if (pDVar3 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
        bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                           (pDVar3,(Object *)StringLiteral_lethal,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                           );
        if (bVar5 == 0) {
          return;
        }
        pDVar3 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                 (pMVar1->fields)._._._.data;
        pWVar6 = (pMVar1->fields).waterManager;
        if (pDVar3 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
          TVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Object,UnityEngine::UIElements::TextureId]::
                   Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                             (pDVar3,(Object *)StringLiteral_lethal,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
          uVar8 = CONCAT44(TypeInfo__System__Boolean,TVar7.m_Index);
          if ((pWVar6 != (WaterPlaneManager *)0x0) && (TVar7.m_Index != 0)) {
            if (*(Il2CppClass **)(*(int *)TVar7.m_Index + 0x20) !=
                (TypeInfo__System__Boolean->_0).element_class) goto code_?;
            pbVar9 = (bool *)func_?(TVar7.m_Index);
            pWVar10 = (pWVar6->fields).water;
            if (pWVar10 != (Water *)0x0) {
              Assembly-CSharp-firstpass.dll::Water::Water_set_IsLethal
                        (pWVar10,*pbVar9,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      goto code_?;
    }
    pDVar3 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
             (pMVar1->fields)._._._.data;
    if (pDVar3 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
    goto code_?;
    unaff_EBX = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          (pDVar3,(Object *)StringLiteral_waterColor,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    uVar11 = ZEXT48(TypeInfo__System__Single);
    lVar2 = uVar11 << 0x20;
    lVar4 = lVar2;
    this = (MVWaterPlane *)TypeInfo__System__Single;
    if (unaff_EBX.m_Index == 0) goto code_?;
    iVar12 = func_?(unaff_EBX.m_Index,TypeInfo__System__Single);
    if (iVar12 != 0) {
      unaff_EBX.m_Index = (int32_t)(pMVar1->fields).waterManager;
      lVar2 = lVar4;
      if (((*(int *)(iVar12 + 0xc) == 0) ||
          (uVar13 = *(undefined4 *)(iVar12 + 0x10), *(uint *)(iVar12 + 0xc) < 2)) ||
         (uVar14 = *(undefined4 *)(iVar12 + 0x14), *(uint *)(iVar12 + 0xc) < 3))
      goto code_?;
      uVar15 = *(undefined4 *)(iVar12 + 0x18);
      fVar16 = 0.8;
      if ((WaterPlaneManager *)unaff_EBX.m_Index == (WaterPlaneManager *)0x0) goto code_?;
      if (cRam_? == '\0') {
        fVar16 = 0.8;
        func_?(&StringLiteral__RefrColor);
        func_?(&StringLiteral__Color);
        cRam_? = '\x01';
      }
      pRVar17 = (((WaterPlaneManager *)unaff_EBX.m_Index)->fields).underwaterCameraPlaneRenderer;
      if ((pRVar17 == (Renderer *)0x0) ||
         (pMVar18 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                              (pRVar17,(MethodInfo *)0x0), pMVar18 == (Material *)0x0))
      goto code_?;
      value_00.y = (float)uVar14;
      value_00.x = (float)uVar13;
      value_00.z = (float)uVar15;
      value_00.w = fVar16;
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                (pMVar18,StringLiteral__Color,value_00,(MethodInfo *)0x0);
      pWVar10 = (((WaterPlaneManager *)unaff_EBX.m_Index)->fields).water;
      if ((pWVar10 == (Water *)0x0) ||
         (pRVar17 = (pWVar10->fields).meshRenderer, pRVar17 == (Renderer *)0x0)) goto code_?;
      lVar2 = uVar11 << 0x20;
      puVar19 = &UNK_?;
      pMVar18 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                          (pRVar17,(MethodInfo *)0x0);
      lVar4 = lVar2;
      if (pMVar18 == (Material *)0x0) goto code_?;
      lVar2 = CONCAT44(puVar19,uVar15);
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                (pMVar18,StringLiteral__RefrColor,
                 (Vector4)CONCAT88(lVar2,CONCAT44((float)uVar14,(float)uVar13)),(MethodInfo *)0x0);
      pOVar20 = (pMVar1->fields)._._.component;
      lVar4 = lVar2;
      if ((pOVar20 == (ObjectPrefab *)0x0) ||
         (pRVar21 = (pOVar20->fields).meshRenderers, pRVar21 == (Renderer__Array *)0x0))
      goto code_?;
      if (pRVar21->max_length != 0) {
        if (pRVar21->vector[0] != (Renderer *)0x0) {
          pMVar18 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                              (pRVar21->vector[0],(MethodInfo *)0x0);
          if (((*(int *)(iVar12 + 0xc) == 0) || (*(uint *)(iVar12 + 0xc) < 2)) ||
             (*(uint *)(iVar12 + 0xc) < 3)) goto code_?;
          if (pMVar18 != (Material *)0x0) {
            value.y = (float)*(undefined4 *)(iVar12 + 0x14);
            value.x = (float)*(undefined4 *)(iVar12 + 0x10);
            value.z = (float)*(undefined4 *)(iVar12 + 0x18);
            value.w = 1.0;
            UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                      (pMVar18,StringLiteral__MaskedColor,value,(MethodInfo *)0x0);
            goto code_?;
          }
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  uVar8 = func_?(unaff_EBX.m_Index,this);
code_?:
  func_?(uVar8);
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* MVWaterPlane(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVWaterPlane::MVWaterPlane__ctor
               (MVWaterPlane *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Material);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
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
      if (pRVar3->max_length == 0) goto code_?;
      this_00 = pRVar3->vector[0];
      this_01 = ((((this->fields)._._.component)->fields).meshRenderers)->vector[0];
      if (this_01 != (Renderer *)0x0) {
        source = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                           (this_01,(MethodInfo *)0x0);
        this_03 = (Material *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material__ctor_1
                  (this_03,source,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                  (this_00,this_03,(MethodInfo *)0x0);
        pOVar2 = (this->fields)._._.component;
        if ((pOVar2 != (ObjectPrefab *)0x0) &&
           (pRVar3 = (pOVar2->fields).meshRenderers, pRVar3 != (Renderer__Array *)0x0)) {
          if (pRVar3->max_length == 0) goto code_?;
          if (pRVar3->vector[0] != (Renderer *)0x0) {
            pBVar4 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_bounds
                                ((Bounds *)&stack0xffffffcc,pRVar3->vector[0],(MethodInfo *)0x0);
            fVar5 = (pBVar4->m_Center).y;
            fVar6 = (pBVar4->m_Center).z;
            fVar7 = (pBVar4->m_Extents).x;
            fVar8 = (pBVar4->m_Extents).y;
            fVar9 = (pBVar4->m_Extents).z;
            (this->fields).localBounds.m_Center.x = (pBVar4->m_Center).x;
            (this->fields).localBounds.m_Center.y = fVar5;
            (this->fields).localBounds.m_Center.z = fVar6;
            (this->fields).localBounds.m_Extents.x = fVar7;
            (this->fields).localBounds.m_Extents.y = fVar8;
            (this->fields).localBounds.m_Extents.z = fVar9;
            fVar5 = (this->fields).localBounds.m_Center.z;
            uVar10 = (this->fields).localBounds.m_Center.x;
            uVar11 = (this->fields).localBounds.m_Center.y;
            this_02 = (this->fields)._._.gameObject;
            if (this_02 != (GameObject *)0x0) {
              this_04 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(this_02,(MethodInfo *)0x0);
              if (this_04 != (Transform *)0x0) {
                pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                    ((Vector3 *)&stack0xffffffd8,this_04,(MethodInfo *)0x0);
                uVar13 = pVVar12->x;
                uVar14 = pVVar12->y;
                fVar6 = pVVar12->z;
                (this->fields).localBounds.m_Center.x = (float)uVar10 - (float)uVar13;
                (this->fields).localBounds.m_Center.y = (float)uVar11 - (float)uVar14;
                (this->fields).localBounds.m_Center.z = fVar5 - fVar6;
                pWVar15 = MVGameControllerBase::MVGameControllerBase_get_WaterPlaneManager
                                    ((MethodInfo *)0x0);
                (this->fields).waterManager = pWVar15;
                func_?(&(this->fields).waterManager,pWVar15);
                piVar16 = &(this->fields)._._.interactionFlags;
                *(uint *)piVar16 = (uint)*piVar16 | 0x8000;
                uVar17 = *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4);
                piVar16 = &(this->fields)._._.interactionFlags;
                *(uint *)piVar16 = (uint)*piVar16 & 0xffffdfff;
                *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) = uVar17;
                return;
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
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}

