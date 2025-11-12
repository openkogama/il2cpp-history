
/* Void Awake() */

void Assembly-CSharp.dll::ObjectEnabler::ObjectEnabler_Awake(ObjectEnabler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__Material_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::Material>_UnityEngine__Material_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
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
  if (pPVar1 == (PrefabPool *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pMVar3 = (pPVar1->fields).objectHiddenMaterial;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar3 = (Material *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pMVar3,
                      UnityEngine__Material_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::Material>_UnityEngine__Material_
                     );
  bVar4 = iRam_? != 0;
  (this->fields).objectMaterial = pMVar3;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(this->fields).objectMaterial >> 0xc);
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
  return;
}


/* Void DrawObject(MeshFilter[]) */

void Assembly-CSharp.dll::ObjectEnabler::ObjectEnabler_DrawObject
               (ObjectEnabler *this,MeshFilter__Array *previewMeshes,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Graphics);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = 0;
  if (previewMeshes != (MeshFilter__Array *)0x0) {
    ppMVar2 = previewMeshes->vector;
    while( true ) {
      if ((int)previewMeshes->max_length <= (int)uVar1) {
        return;
      }
      if ((uint)previewMeshes->max_length <= uVar1) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this_00 = *ppMVar2;
      submeshIndex = 0;
      if (this_00 == (MeshFilter *)0x0) break;
      while( true ) {
        pMVar4 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_sharedMesh
                            (this_00,(MethodInfo *)0x0);
        if (pMVar4 == (Mesh *)0x0) goto code_?;
        iVar5 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_subMeshCount
                           (pMVar4,(MethodInfo *)0x0);
        if (iVar5 <= submeshIndex) break;
        pMVar4 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_sharedMesh
                            (this_00,(MethodInfo *)0x0);
        this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this_00,(MethodInfo *)0x0);
        if (this_01 == (Transform *)0x0) goto code_?;
        pMVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                  Transform_get_localToWorldMatrix(&MStack_7,this_01,(MethodInfo *)0x0);
        material = (this->fields).objectMaterial;
        iVar5 = (this->fields).nameToLayer;
        fVar8 = pMVar6->m00;
        fVar9 = pMVar6->m10;
        fVar10 = pMVar6->m20;
        fVar11 = pMVar6->m30;
        fVar12 = pMVar6->m01;
        fVar13 = pMVar6->m11;
        fVar14 = pMVar6->m21;
        fVar15 = pMVar6->m31;
        camera = (this->fields).mainCamera;
        fVar16 = pMVar6->m02;
        fVar17 = pMVar6->m12;
        fVar18 = pMVar6->m22;
        fVar19 = pMVar6->m32;
        fVar20 = pMVar6->m03;
        fVar21 = pMVar6->m13;
        fVar22 = pMVar6->m23;
        fVar23 = pMVar6->m33;
        if (*(int *)&(TypeInfo__UnityEngine__Graphics->_1).field_0x1c == 0) {
          FUN_?();
        }
        MStack_7.m00 = fVar8;
        MStack_7.m10 = fVar9;
        MStack_7.m20 = fVar10;
        MStack_7.m30 = fVar11;
        MStack_7.m01 = fVar12;
        MStack_7.m11 = fVar13;
        MStack_7.m21 = fVar14;
        MStack_7.m31 = fVar15;
        MStack_7.m02 = fVar16;
        MStack_7.m12 = fVar17;
        MStack_7.m22 = fVar18;
        MStack_7.m32 = fVar19;
        MStack_7.m03 = fVar20;
        MStack_7.m13 = fVar21;
        MStack_7.m23 = fVar22;
        MStack_7.m33 = fVar23;
        UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMesh_3
                  (pMVar4,&MStack_7,material,iVar5,camera,submeshIndex,(MethodInfo *)0x0);
        submeshIndex = submeshIndex + 1;
      }
      uVar1 = uVar1 + 1;
      ppMVar2 = ppMVar2 + 1;
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::ObjectEnabler::ObjectEnabler_Initialize
               (ObjectEnabler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Default);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
    FUN_?();
  }
  UpdateController::UpdateController_AddUpdateObject
            ((IUpdatecontrollerSubscriberUpdate *)this,UpdatePriority__Enum_UPDATEBUCKET_STANDARD,1,
             (MethodInfo *)0x0);
  iVar1 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Default,(MethodInfo *)0x0);
  (this->fields).nameToLayer = iVar1;
  pCVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
  bVar3 = iRam_? != 0;
  (this->fields).mainCamera = pCVar2;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields).mainCamera >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::ObjectEnabler::ObjectEnabler_OnDestroy
               (ObjectEnabler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
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
  pMVar1 = (this->fields).objectMaterial;
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
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
                  ,0,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((
      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?();
  }
  pvVar2 = (void *)0x0;
  if (pMVar1 != (Material *)0x0) {
    pvVar2 = (pMVar1->fields)._.m_CachedPtr;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar2,0);
  return;
}


/* Void UpdateControllerUpdate() */

void Assembly-CSharp.dll::ObjectEnabler::ObjectEnabler_UpdateControllerUpdate
               (ObjectEnabler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::ObjectLink>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::ObjectLink>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVCubeModelInstance);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = _UNK_?;
  if ((this->fields)._IsDrawingEnabled_k__BackingField != 0) {
    fVar1 = _UNK_?;
  }
  fVar2 = (this->fields).currentAlpha;
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcRam_? = pcVar3;
  fVar5 = (float)(*pcRam_?)();
  if (fVar5 < 0.0) {
    fVar5 = 0.0;
  }
  else if (_UNK_? < fVar5) {
    fVar5 = _UNK_?;
  }
  pMVar6 = (this->fields).objectMaterial;
  (this->fields).currentAlpha = (fVar1 - fVar2) * fVar5 + fVar2;
  if (pMVar6 != (Material *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Material);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    iVar7 = UnityEngine.CoreModule.dll::UnityEngine::Material::
             Material_GetFirstPropertyNameIdByAttribute
                       (pMVar6,ShaderPropertyFlags__Enum_MainColor,(MethodInfo *)0x0);
    if (iVar7 < 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Material->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__UnityEngine__Material);
      }
      iVar7 = TypeInfo__UnityEngine__Material->static_fields->k_ColorId;
    }
    pCVar8 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetColor_1
                        (aCStack_9,pMVar6,iVar7,(MethodInfo *)0x0);
    aCStack_9[0].r = pCVar8->r;
    aCStack_9[0].g = pCVar8->g;
    pMVar6 = (this->fields).objectMaterial;
    aCStack_9[0].a = (this->fields).currentAlpha;
    aCStack_9[0].b = pCVar8->b;
    if (pMVar6 != (Material *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                (pMVar6,aCStack_9,(MethodInfo *)0x0);
      pMVar10 = (MVCubeModelBase *)0x0;
      if ((this->fields).currentAlpha == fVar1 &&
          (this->fields)._IsDrawingEnabled_k__BackingField == 0) {
        return;
      }
      pMVar11 = (this->fields).woObjectEnabler;
      if (pMVar11 != (MVObjectEnabler *)0x0) {
        if ((pMVar11->fields).showingOutline == 0) {
          return;
        }
        lVar12 = 0x20;
        pMVar13 = pMVar10;
        while (pLVar14 = (pMVar11->fields)._._._.objectLinkRefs,
              pLVar14 != (List_1_MV_WorldObject_ObjectLink_ *)0x0) {
          uVar15 = (uint)pMVar13;
          if ((pLVar14->fields)._size <= (int)uVar15) {
            return;
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar16 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if ((pMVar16 == (MVGameControllerBase *)0x0) ||
             (pMVar17 = (pMVar16->fields).game, pMVar17 == (MVNetworkGame *)0x0)) break;
          pMVar13 = pMVar10;
          if ((pMVar17->fields).worldNetwork != (WorldNetwork *)0x0) {
            pMVar13 = (MVCubeModelBase *)
                      (((pMVar17->fields).worldNetwork)->fields)._.worldObjectClientManager;
          }
          pMVar11 = (this->fields).woObjectEnabler;
          if ((pMVar11 == (MVObjectEnabler *)0x0) ||
             (pLVar14 = (pMVar11->fields)._._._.objectLinkRefs,
             pLVar14 == (List_1_MV_WorldObject_ObjectLink_ *)0x0)) break;
          if ((uint)(pLVar14->fields)._size <= uVar15) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                      ((MethodInfo *)0x0);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pOVar18 = (pLVar14->fields)._items;
          if (pOVar18 == (ObjectLink__Array *)0x0) break;
          if ((uint)pOVar18->max_length <= uVar15) {
            FUN_?();
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          lVar19 = *(longlong *)((longlong)pOVar18->vector + lVar12 + -0x20);
          if ((lVar19 == 0) ||
             (iVar7 = *(int32_t *)(lVar19 + 0x18), pMVar13 == (MVCubeModelBase *)0x0)) break;
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          this_00 = *(Dictionary_2_System_Int32_MVWorldObjectClient_ **)&(pMVar13->fields)._._;
          pMStackX_8 = (MVCubeModelBase *)0x0;
          if (this_00 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
            FUN_?();
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__TryGetValue
                    ((Dictionary_2_System_Int32_System_Object_ *)this_00,iVar7,
                     (Object **)&pMStackX_8,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                    );
          if (pMStackX_8 != (MVCubeModelBase *)0x0) {
            bVar20 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
            if (((bVar20 <= (pMStackX_8->klass->_1).naturalAligment) &&
                ((MVCubeModelInstance__Class *)
                 (pMStackX_8->klass->_1).typeHierarchy[(ulonglong)bVar20 - 1] ==
                 TypeInfo__MVCubeModelInstance)) && (pMStackX_8 != (MVCubeModelBase *)0x0)) {
              ppIVar21 = (pMStackX_8->klass->_1).typeHierarchy;
              if ((MVCubeModelInstance__Class *)
                  ppIVar21[(ulonglong)(TypeInfo__MVCubeModelInstance->_1).naturalAligment - 1] !=
                  TypeInfo__MVCubeModelInstance) break;
              pMVar13 = pMVar10;
              if ((MVCubeModelInstance__Class *)
                  ppIVar21[(ulonglong)(TypeInfo__MVCubeModelInstance->_1).naturalAligment - 1] ==
                  TypeInfo__MVCubeModelInstance) {
                pMVar13 = pMStackX_8;
              }
              if (*(char *)&pMVar13[1].monitor != '\0') {
                ppIVar21 = (pMStackX_8->klass->_1).typeHierarchy;
                if ((MVCubeModelInstance__Class *)
                    ppIVar21[(ulonglong)(TypeInfo__MVCubeModelInstance->_1).naturalAligment - 1] !=
                    TypeInfo__MVCubeModelInstance) break;
                pMVar13 = pMVar10;
                if ((MVCubeModelInstance__Class *)
                    ppIVar21[(ulonglong)(TypeInfo__MVCubeModelInstance->_1).naturalAligment - 1] ==
                    TypeInfo__MVCubeModelInstance) {
                  pMVar13 = pMStackX_8;
                }
                previewMeshes =
                     MVCubeModelBase::MVCubeModelBase_get_MeshFilters(pMVar13,(MethodInfo *)0x0);
                ObjectEnabler_DrawObject(this,previewMeshes,(MethodInfo *)0x0);
              }
            }
          }
          pMVar11 = (this->fields).woObjectEnabler;
          pMVar13 = (MVCubeModelBase *)(ulonglong)(uVar15 + 1);
          lVar12 = lVar12 + 8;
          if (pMVar11 == (MVObjectEnabler *)0x0) break;
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

