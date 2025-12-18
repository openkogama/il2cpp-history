
/* Void AddPreviewBox() */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_AddPreviewBox
               (MVWorldObjectClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&PreviewBox_MethodInfo__UnityEngine__GameObject__AddComponent<PreviewBox>__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  PreviewBox_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<PreviewBox>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_PreviewBox);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = PreviewBox_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<PreviewBox>__;
  pGVar2 = (this->fields).gameObject;
  if (pGVar2 == (GameObject *)0x0) goto code_?;
  if ((PreviewBox_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<PreviewBox>__->
      field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(
                 PreviewBox_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<PreviewBox>__
                 );
  }
  this_00 = (Component *)
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentInChildren_3
                      (pGVar2,0,((pMVar1->field7_0x38).rgctx_data)->method);
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
  if (this_00 == (Component *)0x0) {
code_?:
    pGVar2 = MVWorldObjectClient_CreateBox
                        (this,StringLiteral_PreviewBox,_UNK_?,(MethodInfo *)0x0);
    if (pGVar2 == (GameObject *)0x0) goto code_?;
    this_00 = (Component *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                        (pGVar2,
                         PreviewBox_MethodInfo__UnityEngine__GameObject__AddComponent<PreviewBox>__)
    ;
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((this_00->fields)._.m_CachedPtr == (void *)0x0) goto code_?;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar3 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar3 == (PrefabPool *)0x0) {
code_?:
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pMVar5 = (pPVar3->fields).previewBoxMaterial;
  pVVar6 = MVWorldObjectClient_GetBoundsCornersLocal
                      (this,BoundsContext__Enum_BoxVisualization,(MethodInfo *)0x0);
  if (this_00 == (Component *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshFilter>__
                  ,pMVar5,pVVar6,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshRenderer>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar7 = this_00[1].monitor;
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
  if (pMVar7 == (MonitorData *)0x0) {
code_?:
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        (this_00,(MethodInfo *)0x0);
    if (pGVar2 == (GameObject *)0x0) goto code_?;
    pOVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                        (pGVar2,
                         UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshRenderer>__
                        );
    bVar9 = iRam_? != 0;
    this_00[1].monitor = (MonitorData *)pOVar8;
    if (bVar9) {
      uVar10 = (uint)((ulonglong)&this_00[1].monitor >> 0xc);
      uVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
      do {
        uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
        puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
        LOCK();
        bVar9 = uVar12 == *puVar13;
        if (bVar9) {
          *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
        }
        UNLOCK();
      } while (!bVar9);
    }
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (*(longlong *)(pMVar7 + 0x10) == 0) goto code_?;
  }
  if ((Renderer *)this_00[1].monitor == (Renderer *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_SetMaterial
            ((Renderer *)this_00[1].monitor,pMVar5,(MethodInfo *)0x0);
  pvVar14 = this_00[1].fields._.m_CachedPtr;
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
  if (pvVar14 == (void *)0x0) {
code_?:
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        (this_00,(MethodInfo *)0x0);
    if (pGVar2 == (GameObject *)0x0) goto code_?;
    pOVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                        (pGVar2,
                         UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshFilter>__
                        );
    bVar9 = iRam_? != 0;
    this_00[1].fields._.m_CachedPtr = pOVar8;
    if (bVar9) {
      uVar10 = (uint)((ulonglong)&this_00[1].fields >> 0xc);
      uVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
      do {
        uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
        puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
        LOCK();
        bVar9 = uVar12 == *puVar13;
        if (bVar9) {
          *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
        }
        UNLOCK();
      } while (!bVar9);
    }
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (*(longlong *)((longlong)pvVar14 + 0x10) == 0) goto code_?;
  }
  if ((Renderer *)this_00[1].monitor != (Renderer *)0x0) {
    pMVar5 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                        ((Renderer *)this_00[1].monitor,(MethodInfo *)0x0);
    if (pMVar5 != (Material *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_hideFlags
                ((Object_1 *)pMVar5,HideFlags__Enum_DontSave,(MethodInfo *)0x0);
      pMVar15 = this_00[1].fields._.m_CachedPtr;
      if (pMVar15 != (MeshFilter *)0x0) {
        pMVar16 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_mesh
                            (pMVar15,(MethodInfo *)0x0);
        if (pMVar16 != (Mesh *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Mesh>_UnityEngine__Mesh_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar14 = (pMVar16->fields)._.m_CachedPtr;
          if (pvVar14 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pMVar16,(MethodInfo *)0x0);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pcVar4 = pcRam_?;
          if (pcRam_? == (code *)0x0) {
            pcVar4 = (code *)FUN_?(&UNK_?);
            if (pcVar4 == (code *)0x0) {
              uVar17 = func_?(&UNK_?);
              FUN_?(uVar17,0);
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          pcRam_? = pcVar4;
          (*pcRam_?)(pvVar14);
          pMVar15 = this_00[1].fields._.m_CachedPtr;
          if (pMVar15 != (MeshFilter *)0x0) {
            pMVar16 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_mesh
                                (pMVar15,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
              FUN_?();
            }
            diagonalWidth = _UNK_?;
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__SharedCubeFunctions,pVVar6,_UNK_?,0);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            uVar18 = 0;
            pVVar19 = pVVar6->vector;
            uVar11 = uVar18;
            uVar12 = uVar18;
            if (pVVar6 == (Vector3__Array *)0x0) {
              FUN_?();
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            do {
              uVar10 = (uint)uVar11;
              if ((uint)pVVar6->max_length <= uVar10) goto DAT_?;
              uVar17._0_4_ = pVVar19->x;
              uVar17._4_4_ = pVVar19->y;
              fVar20 = pVVar19->z;
              uVar21 = uVar10 + 1 & 0x80000003;
              if ((int)uVar21 < 0) {
                uVar21 = (uVar21 - 1 | 0xfffffffc) + 1;
              }
              if ((uint)pVVar6->max_length <= uVar21) goto DAT_?;
              uVar22._0_4_ = pVVar6->vector[(int)uVar21].x;
              uVar22._4_4_ = pVVar6->vector[(int)uVar21].y;
              fVar23 = pVVar6->vector[(int)uVar21].z;
              if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
                FUN_?();
              }
              VStack_24._0_8_ = uVar22;
              VStack_24.z = fVar23;
              aVStack_25[0]._0_8_ = uVar17;
              aVStack_25[0].z = fVar20;
              SharedCubeFunctions::SharedCubeFunctions_AddCubeLine
                        (pMVar16,aVStack_25,&VStack_24,diagonalWidth,(MethodInfo *)0x0);
              uVar12 = uVar12 + 1;
              pVVar19 = pVVar19 + 1;
              uVar11 = (ulonglong)(uVar10 + 1);
            } while ((longlong)uVar12 < 4);
            uVar10 = 4;
            pVVar19 = pVVar6->vector + 4;
            lVar26 = 4;
            do {
              if ((uint)pVVar6->max_length <= uVar10) goto DAT_?;
              uVar27._0_4_ = pVVar19->x;
              uVar27._4_4_ = pVVar19->y;
              fVar20 = pVVar19->z;
              uVar21 = uVar10 + 1 & 0x80000003;
              if ((int)uVar21 < 0) {
                uVar21 = (uVar21 - 1 | 0xfffffffc) + 1;
              }
              if ((uint)pVVar6->max_length <= uVar21 + 4) goto DAT_?;
              uVar28._0_4_ = pVVar6->vector[(longlong)(int)uVar21 + 4].x;
              uVar28._4_4_ = pVVar6->vector[(longlong)(int)uVar21 + 4].y;
              fVar23 = pVVar6->vector[(longlong)(int)uVar21 + 4].z;
              if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
                FUN_?();
              }
              VStack_24._0_8_ = uVar27;
              VStack_24.z = fVar20;
              aVStack_25[0]._0_8_ = uVar28;
              aVStack_25[0].z = fVar23;
              SharedCubeFunctions::SharedCubeFunctions_AddCubeLine
                        (pMVar16,&VStack_24,aVStack_25,diagonalWidth,(MethodInfo *)0x0);
              uVar10 = uVar10 + 1;
              lVar26 = lVar26 + 1;
              pVVar19 = pVVar19 + 1;
            } while (lVar26 < 8);
            pVVar19 = pVVar6->vector;
            pVVar29 = pVVar6->vector + 7;
            uVar11 = uVar18;
            while (uVar10 = (uint)uVar18, uVar10 < (uint)pVVar6->max_length) {
              uVar30._0_4_ = pVVar19->x;
              uVar30._4_4_ = pVVar19->y;
              fVar20 = pVVar19->z;
              if ((uint)pVVar6->max_length <= 7 - uVar10) break;
              uVar31._0_4_ = pVVar29->x;
              uVar31._4_4_ = pVVar29->y;
              fVar23 = pVVar29->z;
              if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
                FUN_?();
              }
              VStack_24._0_8_ = uVar30;
              VStack_24.z = fVar20;
              aVStack_25[0]._0_8_ = uVar31;
              aVStack_25[0].z = fVar23;
              SharedCubeFunctions::SharedCubeFunctions_AddCubeLine
                        (pMVar16,&VStack_24,aVStack_25,diagonalWidth,(MethodInfo *)0x0);
              uVar18 = (ulonglong)(uVar10 + 1);
              uVar11 = uVar11 + 1;
              pVVar19 = pVVar19 + 1;
              pVVar29 = pVVar29 + -1;
              if (3 < (longlong)uVar11) {
                return;
              }
            }
DAT_?:
            FUN_?();
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void AddSelectionBox() */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_AddSelectionBox
               (MVWorldObjectClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&SelectionBox_MethodInfo__UnityEngine__GameObject__AddComponent<SelectionBox>__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  SelectionBox_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<SelectionBox>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_SelectionBox);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = SelectionBox_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<SelectionBox>__;
  pGVar2 = (this->fields).gameObject;
  if (pGVar2 == (GameObject *)0x0) goto code_?;
  if ((SelectionBox_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<SelectionBox>__->
      field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(
                 SelectionBox_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<SelectionBox>__
                 );
  }
  this_00 = (SelectionBox *)
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentInChildren_3
                      (pGVar2,0,((pMVar1->field7_0x38).rgctx_data)->method);
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
  if (this_00 == (SelectionBox *)0x0) {
code_?:
    pGVar2 = MVWorldObjectClient_CreateBox
                       (this,StringLiteral_SelectionBox,_UNK_?,(MethodInfo *)0x0);
    if (pGVar2 == (GameObject *)0x0) goto code_?;
    this_00 = (SelectionBox *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                        (pGVar2,
                         SelectionBox_MethodInfo__UnityEngine__GameObject__AddComponent<SelectionBox>__
                        );
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((this_00->fields)._._._._.m_CachedPtr == (void *)0x0) goto code_?;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar3 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar3 != (PrefabPool *)0x0) {
    material = (pPVar3->fields).selectBoxMaterial;
    corners = MVWorldObjectClient_GetBoundsCornersLocal
                        (this,BoundsContext__Enum_BoxVisualization,(MethodInfo *)0x0);
    if (this_00 != (SelectionBox *)0x0) {
      SelectionBox::SelectionBox_FadeIn(this_00,_UNK_?,material,corners,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ApplyData(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_ApplyData
               (MVWorldObjectClient *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
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
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__RuntimeVariablesRepository);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__WorldObjectDataParameters);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__WorldObjectType);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Nan_scale_detected);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pWVar1 = TypeInfo__MV__WorldObject__WorldObjectDataParameters;
  pDVar2 = (Dictionary_2_System_Object_System_Object_ *)0x0;
  uStackX_10 = 0;
  iVar3._0_2_ = (TypeInfo__MV__WorldObject__WorldObjectDataParameters->_0).byval_arg.attrs;
  iVar3._2_1_ = (TypeInfo__MV__WorldObject__WorldObjectDataParameters->_0).byval_arg.type;
  iVar3._3_1_ = (TypeInfo__MV__WorldObject__WorldObjectDataParameters->_0).byval_arg.field_0xb;
  if (iVar3 < 0) {
    if (((TypeInfo__MV__WorldObject__WorldObjectDataParameters->_0).generic_class ==
         (Il2CppGenericClass *)0x0) ||
       (pDVar4 = pDVar2,
       ((TypeInfo__MV__WorldObject__WorldObjectDataParameters->_1).field_0x6d & 8) == 0)) {
      pDVar4 = (Dictionary_2_System_Object_System_Object_ *)
                FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters);
      FUN_?(&pDVar4->fields,&uStackX_10,(longlong)(int)(pWVar1->_1).instance_size + -0x10);
      if (iRam_? != 0) {
        uVar5 = (uint)((ulonglong)&pDVar4->fields >> 0xc);
        uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
        do {
          uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
          puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
          LOCK();
          bVar9 = uVar7 == *puVar8;
          if (bVar9) {
            *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (!bVar9);
      }
    }
  }
  else {
    pDVar4 = (Dictionary_2_System_Object_System_Object_ *)((ulonglong)uStackX_11 << 8);
  }
  if ((data != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
     (pOVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (data,(Object *)pDVar4,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         ), pOVar10 != (Object *)0x0)) {
    if ((pOVar10->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
      FUN_?(pOVar10);
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    (this->fields)._.id = *(int32_t *)&pOVar10[1].klass;
    uStackX_10 = 1;
    pOVar10 = (Object *)
             FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&uStackX_10);
    pOVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (data,pOVar10,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pOVar10 != (Object *)0x0) {
      if ((pOVar10->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar10);
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      (this->fields)._.groupId = *(int32_t *)&pOVar10[1].klass;
      uStackX_10 = 2;
      pOVar10 = (Object *)
               FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&uStackX_10);
      pOVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (data,pOVar10,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pOVar10 != (Object *)0x0) {
        if ((pOVar10->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
          FUN_?(pOVar10);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        (this->fields)._.itemId = *(int32_t *)&pOVar10[1].klass;
        uStackX_10 = 3;
        pOVar10 = (Object *)
                 FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&uStackX_10);
        pOVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (data,pOVar10,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        if (pOVar10 != (Object *)0x0) {
          if ((pOVar10->klass->_0).element_class !=
              (TypeInfo__MV__WorldObject__WorldObjectType->_0).element_class) {
            FUN_?(pOVar10);
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          (this->fields)._.type = *(int32_t *)&pOVar10[1].klass;
          uStackX_10 = 6;
          pOVar10 = (Object *)
                   FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&uStackX_10);
          pOVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                   Object]::Dictionary_2_System_Object_System_Object__get_Item
                             (data,pOVar10,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
          if (pOVar10 != (Object *)0x0) {
            if ((pOVar10->klass->_0).element_class !=
                (TypeInfo__UnityEngine__Vector3->_0).element_class) {
              FUN_?(pOVar10);
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pOVar12 = pOVar10[1].klass;
            fStack_13 = *(float *)&pOVar10[1].monitor;
            uStack_14 = pOVar12;
            if (((0x7f800000 < ((uint)pOVar12 & 0x7fffffff)) ||
                (uStack_14._4_4_ = (uint)((ulonglong)pOVar12 >> 0x20),
                0x7f800000 < (uStack_14._4_4_ & 0x7fffffff))) || (0x7f800000 < (uint)ABS(fStack_13))
               ) {
              if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                FUN_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                        ((Object *)StringLiteral_Nan_scale_detected,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Vector3);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pOVar12 = *(Object__Class **)&TypeInfo__UnityEngine__Vector3->static_fields->oneVector
              ;
              fStack_13 = (TypeInfo__UnityEngine__Vector3->static_fields->oneVector).z;
            }
            obj = (this->fields).transform;
            if (obj == (Transform *)0x0) {
              FUN_?();
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            uStack_14 = pOVar12;
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
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pcVar11 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
              uVar16 = func_?(&UNK_?);
              FUN_?(uVar16,0);
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pcRam_? = pcVar11;
            (*pcRam_?)(pvVar15,&uStack_14);
            uStackX_10 = 7;
            pOVar10 = (Object *)
                     FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&uStackX_10)
            ;
            pDVar17 = (Dictionary_2_System_Object_System_Object_ *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                      ::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                (data,pOVar10,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                );
            pDVar4 = pDVar2;
            if (pDVar17 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
              bVar18 = (
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                      ->_1).naturalAligment;
              if (((pDVar17->klass->_1).naturalAligment < bVar18) ||
                 (pDVar4 = pDVar17,
                 (Dictionary_2_System_Object_System_Object___Class *)
                 (pDVar17->klass->_1).typeHierarchy[(ulonglong)bVar18 - 1] !=
                 TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)
                 ) {
                FUN_?(pDVar17);
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
            }
            bVar9 = iRam_? != 0;
            (this->fields)._.data = pDVar4;
            if (bVar9) {
              uVar5 = (uint)((ulonglong)&(this->fields)._.data >> 0xc);
              uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
              do {
                uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
                puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
                LOCK();
                bVar9 = uVar7 == *puVar8;
                if (bVar9) {
                  *puVar8 = uVar7 | 1L << (ulonglong)(uVar5 & 0x3f);
                }
                UNLOCK();
              } while (!bVar9);
            }
            uStackX_10 = 8;
            pOVar10 = (Object *)
                     FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&uStackX_10)
            ;
            iVar19 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,UnityEngine::UIElements::StyleComplexSelector+PseudoStateData]::
                    Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                              ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                                *)data,pOVar10,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                               ->klass->rgctx_data[0x21].method);
            if (iVar19 < 0) {
              worldObjectType = (this->fields)._.type;
              if (*(int *)&(TypeInfo__MV__WorldObject__RuntimeVariablesRepository->_1).field_0x1c ==
                  0) {
                FUN_?();
              }
              pDVar2 = MVWorldObject.dll::MV::WorldObject::RuntimeVariablesRepository::
                        RuntimeVariablesRepository_GetRuntimeVariables
                                  (worldObjectType,(MethodInfo *)0x0);
              (*(this->klass->vtable).set_RunTimeData.methodPtr)
                        (this,pDVar2,(this->klass->vtable).set_RunTimeData.method);
            }
            else {
              uStackX_10 = 8;
              pOVar10 = (Object *)
                       FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,
                                     &uStackX_10);
              pDVar4 = (Dictionary_2_System_Object_System_Object_ *)
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                  (data,pOVar10,
                                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                  );
              if (pDVar4 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                bVar18 = (
                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                        ->_1).naturalAligment;
                if (((pDVar4->klass->_1).naturalAligment < bVar18) ||
                   (pDVar2 = pDVar4,
                   (Dictionary_2_System_Object_System_Object___Class *)
                   (pDVar4->klass->_1).typeHierarchy[(ulonglong)bVar18 - 1] !=
                   TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   )) {
                  FUN_?(pDVar4);
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
              }
              (*(this->klass->vtable).set_RunTimeData.methodPtr)
                        (this,pDVar2,(this->klass->vtable).set_RunTimeData.method);
            }
            uStackX_10 = 9;
            pOVar10 = (Object *)
                     FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&uStackX_10)
            ;
            iVar19 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,UnityEngine::UIElements::StyleComplexSelector+PseudoStateData]::
                    Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                              ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                                *)data,pOVar10,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                               ->klass->rgctx_data[0x21].method);
            if (-1 < iVar19) {
              uStackX_10 = 9;
              pOVar10 = (Object *)
                       FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,
                                     &uStackX_10);
              pOVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                 (data,pOVar10,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 );
              if (pOVar10 == (Object *)0x0) goto code_?;
              if ((pOVar10->klass->_0).element_class !=
                  *(Il2CppClass **)(lRam_? + 0x40)) {
                FUN_?(pOVar10,lRam_?);
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              (this->fields)._.ownerActorNr = *(int32_t *)&pOVar10[1].klass;
            }
            uStackX_10 = 10;
            pOVar10 = (Object *)
                     FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&uStackX_10)
            ;
            iVar19 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,UnityEngine::UIElements::StyleComplexSelector+PseudoStateData]::
                    Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                              ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                                *)data,pOVar10,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                               ->klass->rgctx_data[0x21].method);
            if (-1 < iVar19) {
              uStackX_10 = 10;
              pOVar10 = (Object *)
                       FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,
                                     &uStackX_10);
              pOVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                 (data,pOVar10,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 );
              if (pOVar10 == (Object *)0x0) goto code_?;
              if ((pOVar10->klass->_0).element_class !=
                  *(Il2CppClass **)(lRam_? + 0x40)) {
                FUN_?(pOVar10,lRam_?);
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              (this->fields)._.previewOwnerProfileId = *(int32_t *)&pOVar10[1].klass;
            }
            return;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* MVWorldObjectClient Clone(Int32, Int32, CloneBookkeeping,
   Dictionary`2[System.Int32,MVWorldObjectClient],
   Dictionary`2[System.Int32,RuntimePrototypeCubeModel]) */

MVWorldObjectClient *
Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_Clone
          (MVWorldObjectClient *this,int32_t ownerActorNumber,int32_t cloneGroupId,
          CloneBookkeeping *cloneBookkeeping,
          Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,
          Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *prototypes,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__WorldObjectDataParameters);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_This_is_a_hack_created_for_spawn);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar1 = (Object *)(*(this->klass->vtable).get_RunTimeData.methodPtr)(this);
  pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
            ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                      (pOVar1,(MethodInfo *)0x0);
  key = (Dictionary_2_System_Object_System_Object_ *)0x0;
  pDVar3 = key;
  if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar4 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if (((pDVar2->klass->_1).naturalAligment < bVar4) ||
       (pDVar3 = pDVar2,
       (Dictionary_2_System_Object_System_Object___Class *)
       (pDVar2->klass->_1).typeHierarchy[(ulonglong)bVar4 - 1] !=
       TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      FUN_?(pDVar2);
      pcVar5 = (code *)swi(3);
      pMVar6 = (MVWorldObjectClient *)(*pcVar5)();
      return pMVar6;
    }
  }
  bVar7 = iRam_? != 0;
  (this->fields)._.runTimeData = pDVar3;
  if (bVar7) {
    uVar8 = (uint)((ulonglong)&(this->fields)._.runTimeData >> 0xc);
    lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
    do {
      uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
      puVar11 = (ulonglong *)(lVar9 + 0xADDR);
      LOCK();
      bVar7 = uVar10 == *puVar11;
      if (bVar7) {
        *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  pDVar3 = MVWorldObject.dll::MV::WorldObject::MVWorldObject::
            MVWorldObject_DeepCopyWorldObjectDataParameters((MVWorldObject *)this,(MethodInfo *)0x0)
  ;
  pIVar12 = (this->klass->vtable).set_RunTimeData.methodPtr;
  (*pIVar12)(this,(this->fields)._.runTimeData,(this->klass->vtable).set_RunTimeData.method);
  uVar8 = uStackX_8;
  pWVar13 = TypeInfo__MV__WorldObject__WorldObjectDataParameters;
  uStackX_8 = uStackX_8 & 0xffffff00;
  iVar14._0_2_ = (TypeInfo__MV__WorldObject__WorldObjectDataParameters->_0).byval_arg.attrs;
  iVar14._2_1_ = (TypeInfo__MV__WorldObject__WorldObjectDataParameters->_0).byval_arg.type;
  iVar14._3_1_ = (TypeInfo__MV__WorldObject__WorldObjectDataParameters->_0).byval_arg.field_0xb;
  if (iVar14 < 0) {
    if (((TypeInfo__MV__WorldObject__WorldObjectDataParameters->_0).generic_class ==
         (Il2CppGenericClass *)0x0) ||
       (((TypeInfo__MV__WorldObject__WorldObjectDataParameters->_1).field_0x6d & 8) == 0)) {
      key = (Dictionary_2_System_Object_System_Object_ *)
            FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters);
      FUN_?(&key->fields,&uStackX_8,(longlong)(int)(pWVar13->_1).instance_size + -0x10);
      if (iRam_? != 0) {
        uVar8 = (uint)((ulonglong)&key->fields >> 0xc);
        lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
        do {
          uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
          puVar11 = (ulonglong *)(lVar9 + 0xADDR);
          LOCK();
          bVar7 = uVar10 == *puVar11;
          if (bVar7) {
            *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
          }
          UNLOCK();
        } while (!bVar7);
      }
    }
  }
  else {
    key = (Dictionary_2_System_Object_System_Object_ *)
          (CONCAT44(uStackX_c,uVar8) & 0xffffffffffffff00);
  }
  if (cloneBookkeeping != (CloneBookkeeping *)0x0) {
    uStackX_8 = (cloneBookkeeping->fields).cloneIdIncrement;
    pOVar1 = (Object *)FUN_?(uRam_?,&uStackX_8);
    if (pDVar3 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      uVar15 = CONCAT71((int7)((ulonglong)pIVar12 >> 8),1);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                (pDVar3,(Object *)key,pOVar1,(InsertionBehavior__Enum)uVar15,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      uStackX_8 = CONCAT31(uStackX_8._1_3_,1);
      pOVar1 = (Object *)
                FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&uStackX_8);
      uStackX_8 = cloneGroupId;
      pOVar16 = (Object *)FUN_?(uRam_?,&uStackX_8);
      uVar15 = CONCAT71((int7)((ulonglong)uVar15 >> 8),1);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                (pDVar3,pOVar1,pOVar16,(InsertionBehavior__Enum)uVar15,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      if (((this->fields)._.ownerActorNr == -1) && (ownerActorNumber == 0)) {
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                  ((Object *)StringLiteral_This_is_a_hack_created_for_spawn,(MethodInfo *)0x0);
        uStackX_8 = CONCAT31(uStackX_8._1_3_,9);
        pOVar1 = (Object *)
                  FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&uStackX_8);
        uStackX_8 = 0xffffffff;
      }
      else {
        uStackX_8 = CONCAT31(uStackX_8._1_3_,9);
        pOVar1 = (Object *)
                  FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&uStackX_8);
        uStackX_8 = ownerActorNumber;
      }
      pOVar16 = (Object *)FUN_?(uRam_?,&uStackX_8);
      uVar15 = CONCAT71((int7)((ulonglong)uVar15 >> 8),1);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                (pDVar3,pOVar1,pOVar16,(InsertionBehavior__Enum)uVar15,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      uStackX_8 = CONCAT31(uStackX_8._1_3_,2);
      pOVar1 = (Object *)
                FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&uStackX_8);
      uStackX_8 = (this->fields)._.itemId;
      pOVar16 = (Object *)FUN_?(uRam_?,&uStackX_8);
      uVar15 = CONCAT71((int7)((ulonglong)uVar15 >> 8),1);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                (pDVar3,pOVar1,pOVar16,(InsertionBehavior__Enum)uVar15,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      uStackX_8 = CONCAT31(uStackX_8._1_3_,10);
      pOVar1 = (Object *)
                FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&uStackX_8);
      uStackX_8 = (this->fields)._.previewOwnerProfileId;
      pOVar16 = (Object *)FUN_?(uRam_?,&uStackX_8);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                (pDVar3,pOVar1,pOVar16,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar15 >> 8),1),
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      uVar15 = 0;
      pMVar6 = KoGaMaPackageClient::KoGaMaPackageClient_WorldObjectFactory
                          (pDVar3,worldObjects,prototypes,(MethodInfo *)0x0);
      if ((pMVar6 != (MVWorldObjectClient *)0x0) &&
         (this_00 = (cloneBookkeeping->fields).worldObjectIdsMaps,
         this_00 != (Dictionary_2_System_Int32_System_Int32_ *)0x0)) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
        Dictionary_2_System_Int32_System_Int32__TryInsert
                  (this_00,(this->fields)._.id,(pMVar6->fields)._.id,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar15 >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_->
                   klass->rgctx_data[0x22].method);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar17 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if ((((pMVar17 != (MVGameControllerBase *)0x0) &&
             (pMVar18 = (pMVar17->fields).game, pMVar18 != (MVNetworkGame *)0x0)) &&
            (pWVar19 = (pMVar18->fields).worldNetwork, pWVar19 != (WorldNetwork *)0x0)) &&
           (this_01 = (pWVar19->fields)._.worldObjectClientManager,
           this_01 != (MVWorldObjectClientManagerNetwork *)0x0)) {
          MVWorldObjectClientManagerNetwork::MVWorldObjectClientManagerNetwork_AddToWorldObjects
                    (this_01,pMVar6,(MethodInfo *)0x0);
          MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_GetLinksForClone
                    ((MVWorldObject *)this,(cloneBookkeeping->fields).linkIds,(MethodInfo *)0x0);
          MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_GetObjectLinksForClone
                    ((MVWorldObject *)this,(cloneBookkeeping->fields).objectLinkIds,
                     (MethodInfo *)0x0);
          (cloneBookkeeping->fields).cloneIdIncrement =
               (cloneBookkeeping->fields).cloneIdIncrement + 1;
          return pMVar6;
        }
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pMVar6 = (MVWorldObjectClient *)(*pcVar5)();
  return pMVar6;
}


/* Single ComputeObjectRadius() */

float Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_ComputeObjectRadius
                (MVWorldObjectClient *this,MethodInfo *method)

{
  lVar1 = (*(this->klass->vtable).GetLocalBounds.methodPtr)
                    (auStack_2,this,3,(this->klass->vtable).GetLocalBounds.method);
  fVar3 = *(float *)(lVar1 + 0xc);
  uVar4 = *(undefined8 *)(lVar1 + 0x10);
  puVar5 = (undefined8 *)
           (*(this->klass->vtable).get_Scale.methodPtr)
                     (&uStack_6,this,(this->klass->vtable).get_Scale.method);
  uStack_7._4_4_ = (float)((ulonglong)uVar4 >> 0x20);
  fStack_8 = (uStack_7._4_4_ + uStack_7._4_4_) * *(float *)(puVar5 + 1) * _UNK_?;
  uStack_6 = CONCAT44(((float)uVar4 + (float)uVar4) * (float)((ulonglong)*puVar5 >> 0x20) *
                       _UNK_?,
                       fVar3 * TypeRef__System__Activator__T._0_4_ * (float)*puVar5 * _UNK_?
                      );
  uStack_7 = uVar4;
  fVar3 = (float)FUN_?(&uStack_6);
  return fVar3;
}


/* Single ComputeObjectSqrRadius() */

float Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_ComputeObjectSqrRadius
                (MVWorldObjectClient *this,MethodInfo *method)

{
  lVar1 = (*(this->klass->vtable).GetLocalBounds.methodPtr)
                    (auStack_2,this,3,(this->klass->vtable).GetLocalBounds.method);
  fVar3 = *(float *)(lVar1 + 0xc);
  uVar4 = *(undefined8 *)(lVar1 + 0x10);
  fVar5 = (float)uVar4;
  puVar6 = (undefined8 *)
           (*(this->klass->vtable).get_Scale.methodPtr)
                     (auStack_7,this,(this->klass->vtable).get_Scale.method);
  fStack_8 = (float)((ulonglong)uVar4 >> 0x20);
  fVar9 = (fVar5 + fVar5) * (float)((ulonglong)*puVar6 >> 0x20) * _UNK_?;
  fVar5 = fVar3 * TypeRef__System__Activator__T._0_4_ * (float)*puVar6 * _UNK_?;
  fVar3 = (fStack_8 + fStack_8) * *(float *)(puVar6 + 1) * _UNK_?;
  return fVar9 * fVar9 + fVar5 * fVar5 + fVar3 * fVar3;
}


/* GameObject CreateBox(String, Single) */

GameObject *
Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_CreateBox
          (MVWorldObjectClient *this,String *name,float scale,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__GameObject);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (GameObject *)FUN_?(TypeInfo__UnityEngine__GameObject);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_Internal_CreateGameObject
            (pGVar1,name,(MethodInfo *)0x0);
  if (pGVar1 != (GameObject *)0x0) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (pGVar1,(MethodInfo *)0x0);
    this_00 = (this->fields).gameObject;
    if ((this_00 != (GameObject *)0x0) &&
       (value = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (this_00,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                (pTVar2,value,(MethodInfo *)0x0);
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (pGVar1,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
      if (pTVar2 == (Transform *)0x0) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        pGVar1 = (GameObject *)(*pcVar4)();
        return pGVar1;
      }
      uStack_5._0_4_ = (pVVar3->zeroVector).x;
      uStack_5._4_4_ = (pVVar3->zeroVector).y;
      fStack_6 = (pVVar3->zeroVector).z;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar7 = (pTVar2->fields)._._.m_CachedPtr;
      if (pvVar7 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        pGVar1 = (GameObject *)(*pcVar4)();
        return pGVar1;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar8 = func_?(&UNK_?);
        FUN_?(uVar8,0);
        pcVar4 = (code *)swi(3);
        pGVar1 = (GameObject *)(*pcVar4)();
        return pGVar1;
      }
      pcRam_? = pcVar4;
      (*pcRam_?)(pvVar7);
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (pGVar1,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Quaternion);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pQVar9 = TypeInfo__UnityEngine__Quaternion->static_fields;
      if (pTVar2 == (Transform *)0x0) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        pGVar1 = (GameObject *)(*pcVar4)();
        return pGVar1;
      }
      fStack_10 = (pQVar9->identityQuaternion).x;
      fStack_11 = (pQVar9->identityQuaternion).y;
      fStack_12 = (pQVar9->identityQuaternion).z;
      fStack_13 = (pQVar9->identityQuaternion).w;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar7 = (pTVar2->fields)._._.m_CachedPtr;
      if (pvVar7 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        pGVar1 = (GameObject *)(*pcVar4)();
        return pGVar1;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar8 = func_?(&UNK_?);
        FUN_?(uVar8,0);
        pcVar4 = (code *)swi(3);
        pGVar1 = (GameObject *)(*pcVar4)();
        return pGVar1;
      }
      pcRam_? = pcVar4;
      (*pcRam_?)(pvVar7);
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (pGVar1,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
      uStack_5._0_4_ = (pVVar3->oneVector).x;
      uStack_5._4_4_ = (pVVar3->oneVector).y;
      fVar14 = (pVVar3->oneVector).z * scale;
      if (pTVar2 == (Transform *)0x0) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        pGVar1 = (GameObject *)(*pcVar4)();
        return pGVar1;
      }
      uStack_5 = CONCAT44((float)uStack_5._4_4_ * scale,(float)(undefined4)uStack_5 * scale);
      fStack_6 = fVar14;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar7 = (pTVar2->fields)._._.m_CachedPtr;
      if (pvVar7 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        pGVar1 = (GameObject *)(*pcVar4)();
        return pGVar1;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar8 = func_?(&UNK_?);
        FUN_?(uVar8,0);
        pcVar4 = (code *)swi(3);
        pGVar1 = (GameObject *)(*pcVar4)();
        return pGVar1;
      }
      pcRam_? = pcVar4;
      (*pcRam_?)(pvVar7,&uStack_5);
      return pGVar1;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  pGVar1 = (GameObject *)(*pcVar4)();
  return pGVar1;
}


/* Void CreateConnectors() */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_CreateConnectors
               (MVWorldObjectClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Vector3__UnityEngine__Quaternion_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cVar1 = (*(this->klass->vtable).get_HasInputConnector.methodPtr)
                     (this,(this->klass->vtable).get_HasInputConnector.method);
  if (cVar1 != '\0') {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__PrefabPool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar2 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar2 == (PrefabPool *)0x0) goto code_?;
    pGVar3 = (pPVar2->fields).logicInputConnectorPrefab;
    puVar4 = (undefined8 *)
              (*(this->klass->vtable).get_InputConnectorOffset.methodPtr)
                        (&uStack_5,this,(this->klass->vtable).get_InputConnectorOffset.method);
    uVar6 = *puVar4;
    uVar7 = *(undefined4 *)(puVar4 + 1);
    puVar4 = (undefined8 *)
              (*(this->klass->vtable).get_InputConnectorRotation.methodPtr)
                        (&uStack_8,this,(this->klass->vtable).get_InputConnectorRotation.method);
    uStack_8 = *puVar4;
    uStack_9 = puVar4[1];
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    uStack_5 = uVar6;
    uStack_10 = uVar7;
    pGVar3 = (GameObject *)FUN_?(pGVar3);
    bVar11 = iRam_? != 0;
    (this->fields).inputConnectorObject = pGVar3;
    if (bVar11) {
      uVar12 = (uint)((ulonglong)&(this->fields).inputConnectorObject >> 0xc);
      lVar13 = (ulonglong)((uVar12 & 0x1fffff) >> 6) * 8;
      do {
        uVar14 = *(ulonglong *)(lVar13 + 0xADDR);
        puVar15 = (ulonglong *)(lVar13 + 0xADDR);
        LOCK();
        bVar11 = uVar14 == *puVar15;
        if (bVar11) {
          *puVar15 = uVar14 | 1L << (uVar12 & 0x3f);
        }
        UNLOCK();
      } while (!bVar11);
    }
    pGVar3 = (this->fields).inputConnectorObject;
    if (pGVar3 == (GameObject *)0x0) goto code_?;
    pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (pGVar3,(MethodInfo *)0x0);
    pGVar3 = (this->fields).gameObject;
    if ((pGVar3 == (GameObject *)0x0) ||
       (pTVar17 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar3,(MethodInfo *)0x0), pTVar16 == (Transform *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
              (pTVar16,pTVar17,0,(MethodInfo *)0x0);
  }
  cVar1 = (*(this->klass->vtable).get_HasOutputConnector.methodPtr)
                     (this,(this->klass->vtable).get_HasOutputConnector.method);
  if (cVar1 != '\0') {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__PrefabPool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar2 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar2 == (PrefabPool *)0x0) goto code_?;
    pGVar3 = (pPVar2->fields).logicOutputConnectorPrefab;
    puVar4 = (undefined8 *)
              (*(this->klass->vtable).get_OutputConnectorOffset.methodPtr)
                        (&uStack_5,this,(this->klass->vtable).get_OutputConnectorOffset.method);
    uVar6 = *puVar4;
    uVar7 = *(undefined4 *)(puVar4 + 1);
    puVar4 = (undefined8 *)
              (*(this->klass->vtable).get_OutputConnectorRotation.methodPtr)
                        (&uStack_8,this,(this->klass->vtable).get_OutputConnectorRotation.method);
    uVar18 = *puVar4;
    uVar19 = puVar4[1];
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    uStack_5 = uVar6;
    uStack_10 = uVar7;
    uStack_8 = uVar18;
    uStack_9 = uVar19;
    pGVar3 = (GameObject *)FUN_?(pGVar3);
    bVar11 = iRam_? != 0;
    (this->fields).outputConnectorObject = pGVar3;
    if (bVar11) {
      uVar12 = (uint)((ulonglong)&(this->fields).outputConnectorObject >> 0xc);
      lVar13 = (ulonglong)((uVar12 & 0x1fffff) >> 6) * 8;
      do {
        uVar14 = *(ulonglong *)(lVar13 + 0xADDR);
        puVar15 = (ulonglong *)(lVar13 + 0xADDR);
        LOCK();
        bVar11 = uVar14 == *puVar15;
        if (bVar11) {
          *puVar15 = uVar14 | 1L << (uVar12 & 0x3f);
        }
        UNLOCK();
      } while (!bVar11);
    }
    pGVar3 = (this->fields).outputConnectorObject;
    if (pGVar3 == (GameObject *)0x0) goto code_?;
    pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (pGVar3,(MethodInfo *)0x0);
    pGVar3 = (this->fields).gameObject;
    if ((pGVar3 == (GameObject *)0x0) ||
       (pTVar17 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar3,(MethodInfo *)0x0), pTVar16 == (Transform *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
              (pTVar16,pTVar17,0,(MethodInfo *)0x0);
  }
  cVar1 = (*(this->klass->vtable).get_HasObjectConnector.methodPtr)
                     (this,(this->klass->vtable).get_HasObjectConnector.method);
  if (cVar1 == '\0') {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar2 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar2 != (PrefabPool *)0x0) {
    pGVar3 = (pPVar2->fields).logicObjectConnectorPrefab;
    puVar4 = (undefined8 *)
              (*(this->klass->vtable).get_ObjectConnectorOffset.methodPtr)
                        (&uStack_5,this,(this->klass->vtable).get_ObjectConnectorOffset.method);
    uVar6 = *puVar4;
    uVar7 = *(undefined4 *)(puVar4 + 1);
    puVar4 = (undefined8 *)
              (*(this->klass->vtable).get_ObjectConnectorRotation.methodPtr)
                        (&uStack_8,this,(this->klass->vtable).get_ObjectConnectorRotation.method);
    uVar18 = *puVar4;
    uVar19 = puVar4[1];
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    uStack_5 = uVar6;
    uStack_10 = uVar7;
    uStack_8 = uVar18;
    uStack_9 = uVar19;
    pGVar3 = (GameObject *)FUN_?(pGVar3);
    bVar11 = iRam_? != 0;
    (this->fields).objectConnectorObject = pGVar3;
    if (bVar11) {
      uVar12 = (uint)((ulonglong)&(this->fields).objectConnectorObject >> 0xc);
      lVar13 = (ulonglong)((uVar12 & 0x1fffff) >> 6) * 8;
      do {
        uVar14 = *(ulonglong *)(lVar13 + 0xADDR);
        puVar15 = (ulonglong *)(lVar13 + 0xADDR);
        LOCK();
        bVar11 = uVar14 == *puVar15;
        if (bVar11) {
          *puVar15 = uVar14 | 1L << (uVar12 & 0x3f);
        }
        UNLOCK();
      } while (!bVar11);
    }
    pGVar3 = (this->fields).objectConnectorObject;
    if (pGVar3 != (GameObject *)0x0) {
      pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (pGVar3,(MethodInfo *)0x0);
      pGVar3 = (this->fields).gameObject;
      if ((pGVar3 != (GameObject *)0x0) &&
         (pTVar17 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (pGVar3,(MethodInfo *)0x0), pTVar16 != (Transform *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                  (pTVar16,pTVar17,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* Void CreateWorldObject(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_CreateWorldObject
               (MVWorldObjectClient *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVGroup);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVRuntimeDataVariables);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVWorldObjectClient_CreateConnectors(this,(MethodInfo *)0x0);
  MVWorldObjectClient_ApplyData(this,data,(MethodInfo *)0x0);
  this_00 = (this->fields).gameObject;
  name = (String *)
         (*(this->klass->vtable).ToString.methodPtr)(this,(this->klass->vtable).ToString.method);
  if (this_00 == (GameObject *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_SetName
            ((Object_1 *)this_00,name,(MethodInfo *)0x0);
  pMVar1 = (MVRuntimeDataVariables *)FUN_?(TypeInfo__MVRuntimeDataVariables);
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVRuntimeDataVariable>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<MVRuntimeDataVariable>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar2 = iRam_? != 0;
  (pMVar1->fields).owner = this;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&pMVar1->fields >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  this_01 = (List_1_MVRuntimeDataVariable_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<MVRuntimeDataVariable>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
             MethodInfo__System__Collections__Generic__List<MVRuntimeDataVariable>__List__);
  iVar7 = iRam_?;
  (pMVar1->fields).variables = this_01;
  if (iVar7 != 0) {
    uVar3 = (uint)((ulonglong)&(pMVar1->fields).variables >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
      iVar7 = iRam_?;
    } while (!bVar2);
  }
  (this->fields).runtimeDataVariables = pMVar1;
  if (iVar7 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields).runtimeDataVariables >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  if ((this->fields)._.groupId != -1) {
    if (worldObjects == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0)
    goto code_?;
    pMVar8 = (MVGroup *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__get_Item
                        ((Dictionary_2_System_Int32_System_Object_ *)worldObjects,
                         (this->fields)._.groupId,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                        );
    if (pMVar8 == (MVGroup *)0x0) {
      (this->fields).group = (MVGroup *)0x0;
    }
    else {
      bVar9 = (TypeInfo__MVGroup->_1).naturalAligment;
      if (((pMVar8->klass->_1).naturalAligment < bVar9) ||
         ((MVGroup__Class *)(pMVar8->klass->_1).typeHierarchy[(ulonglong)bVar9 - 1] !=
          TypeInfo__MVGroup)) {
        FUN_?(pMVar8);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      (this->fields).group = pMVar8;
      bVar9 = (TypeInfo__MVGroup->_1).naturalAligment;
      if (((pMVar8->klass->_1).naturalAligment < bVar9) ||
         ((MVGroup__Class *)(pMVar8->klass->_1).typeHierarchy[(ulonglong)bVar9 - 1] !=
          TypeInfo__MVGroup)) {
        FUN_?(pMVar8);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&(this->fields).group >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    pMVar8 = (this->fields).group;
    if (pMVar8 == (MVGroup *)0x0) goto code_?;
    (*(pMVar8->klass->vtable).AddChild.methodPtr)
              (pMVar8,this,(pMVar8->klass->vtable).AddChild.method);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar11 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar11 != (MVGameControllerBase *)0x0) &&
     (pMVar12 = (pMVar11->fields).game, pMVar12 != (MVNetworkGame *)0x0)) {
    pMVar13 = (pMVar12->fields).itemBusinessLogic;
    key = (this->fields)._.itemId;
    if (pMVar13 != (MVItemBusinessLogic *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__ContainsKey_int_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__get_Item_int_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pDVar14 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(pMVar13->fields).items;
      if (pDVar14 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
        iVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                 ::Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                           (pDVar14,key,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__ContainsKey_int_
                            ->klass->rgctx_data[0x21].method);
        pDVar14 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(pMVar13->fields).items;
        if (pDVar14 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
          if (iVar15 < 0) {
            iVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Int32,UnityEngine::Vector3]::
                     Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                               (pDVar14,key,
                                MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__ContainsKey_int_
                                ->klass->rgctx_data[0x21].method);
            if (iVar15 < 0) {
              return;
            }
            pDVar14 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(pMVar13->fields).items;
            if (pDVar14 == (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0)
            goto code_?;
          }
          pOVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Object]::Dictionary_2_System_Int32_System_Object__get_Item
                              ((Dictionary_2_System_Int32_System_Object_ *)pDVar14,key,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__get_Item_int_
                              );
          if (pOVar16 != (Object *)0x0) {
            if (*(char *)((longlong)&pOVar16[4].klass + 1) != '\0') {
              piVar17 = &(this->fields).interactionFlags;
              *piVar17 = *piVar17 | 0x4000;
            }
            return;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void DeSelect() */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_DeSelect
               (MVWorldObjectClient *this,MethodInfo *method)

{
  pMVar1 = this->klass;
  (this->fields).selectedConnector = 0;
  (*(pMVar1->vtable).RemoveSelectionBox.methodPtr)(this,(pMVar1->vtable).RemoveSelectionBox.method);
  if ((this->fields).selected != 0) {
    pMVar1 = this->klass;
    (this->fields).selected = 0;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pMVar1->vtable).OnSelectedChanged.methodPtr)
              (this,0,(pMVar1->vtable).OnSelectedChanged.method);
    return;
  }
  return;
}


/* Boolean Delete(MVWorldObjectClientManager, String ByRef) */

bool Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_Delete
               (MVWorldObjectClient *this,MVWorldObjectClientManager *worldObjectClientManager,
               String **errorText,MethodInfo *method)

{
  this_00 = (this->fields).gameObject;
  if (this_00 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,0,(MethodInfo *)0x0);
    if (worldObjectClientManager != (MVWorldObjectClientManager *)0x0) {
      MVWorldObjectClientManager::MVWorldObjectClientManager_UnregisterWorldObject
                (worldObjectClientManager,(this->fields)._.id,(MethodInfo *)0x0);
      return 1;
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  bVar2 = (*pcVar1)();
  return bVar2;
}


/* Void Destroy() */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_Destroy
               (MVWorldObjectClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).gameObject;
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
  if (pGVar1 != (GameObject *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pGVar1->fields)._.m_CachedPtr != (void *)0x0) {
      pGVar1 = (this->fields).gameObject;
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
                ((Object_1 *)pGVar1,0.0,(MethodInfo *)0x0);
    }
  }
  if ((this->fields).initializedFromInventory != 0) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar2 != (MVGameControllerBase *)0x0) &&
     (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) {
    pRVar4 = (pMVar3->fields).runtimeVariableNetworkManager;
    item = (this->fields)._.id;
    if (pRVar4 != (RuntimeVariableNetworkManager *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_00 = (HashSet_1_System_Int32Enum_ *)(pRVar4->fields).runtimeDataVariables;
      if (this_00 != (HashSet_1_System_Int32Enum_ *)0x0) {
        bVar5 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
                HashSet_1_System_Int32Enum__Contains
                          (this_00,item,
                           MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
        if (bVar5 != 0) {
          pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar3 == (MVNetworkGame *)0x0) ||
             (pRVar4 = (pMVar3->fields).runtimeVariableNetworkManager,
             pRVar4 == (RuntimeVariableNetworkManager *)0x0)) goto DAT_?;
          RuntimeVariableNetworkManager::RuntimeVariableNetworkManager_RemoveRuntimeDataVariables
                    (pRVar4,(this->fields)._.id,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
DAT_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void DestroyRecursive(MVWorldObjectClient) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_DestroyRecursive
               (MVWorldObjectClient *wo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVGroup);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVWorldObjectClient);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  LStack_1._list = (List_1_System_Object_ *)0x0;
  LStack_1._index = 0;
  LStack_1._version = 0;
  LStack_1._current = (Object *)0x0;
  if (wo == (MVWorldObjectClient *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar3 = (TypeInfo__MVGroup->_1).naturalAligment;
  if ((bVar3 <= (wo->klass->_1).naturalAligment) &&
     ((MVGroup__Class *)(wo->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] == TypeInfo__MVGroup)) {
    pLVar4 = MVGroup::MVGroup_get_Children((MVGroup *)wo,(MethodInfo *)0x0);
    if (pLVar4 == (List_1_MVWorldObjectClient_ *)0x0) goto code_?;
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)&uStack_6 >> 0xc);
      puVar7 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar8 = *puVar7;
        LOCK();
        uVar9 = *puVar7;
        if (uVar8 == uVar9) {
          *puVar7 = uVar8 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (uVar8 != uVar9);
    }
    pLStack_10 = (List_1_T_Enumerator_System_Object_ *)
                 ((ulonglong)(uint)(pLVar4->fields)._version << 0x20);
    uStack_11 = 0;
    LStack_1._8_8_ = pLStack_10;
    LStack_1._current = (Object *)0x0;
    uStack_6 = 0;
    pLStack_10 = &LStack_1;
    LStack_1._list = (List_1_System_Object_ *)pLVar4;
    while (bVar12 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                   ::List_1_T_Enumerator_System_Object__MoveNext
                             (&LStack_1,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                             ), wo_00 = LStack_1._current, bVar12 != 0) {
      if (*(int *)&(TypeInfo__MVWorldObjectClient->_1).field_0x1c == 0) {
        FUN_?();
      }
      MVWorldObjectClient_DestroyRecursive((MVWorldObjectClient *)wo_00,(MethodInfo *)0x0);
    }
  }
  (*(wo->klass->vtable).Destroy.methodPtr)(wo,(wo->klass->vtable).Destroy.method);
  return;
}


/* Boolean DoesScreenPointHitCollider(Vector3, Collider) */

bool Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_DoesScreenPointHitCollider
               (MVWorldObjectClient *this,Vector3 *point,Collider *collider,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CollisionDetectionGlobalBuffers);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if ((pMVar1 != (MainCameraManager *)0x0) &&
     (obj = (pMVar1->fields).mainCamera, obj != (Camera *)0x0)) {
    VStack_2.z = point->z;
    aPStack_3[0].m_index = (int32_t)point->x;
    aPStack_3[0].m_version = (int32_t)point->y;
    if (cRam_? == '\0') {
      VStack_2._0_8_ = aPStack_3[0];
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    VStack_2.x = 0.0;
    VStack_2.y = 0.0;
    VStack_2.z = 0.0;
    fStack_4 = 0.0;
    fStack_5 = 0.0;
    fStack_6 = 0.0;
    pvVar7 = (obj->fields)._._._.m_CachedPtr;
    if (pvVar7 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar8 = (code *)swi(3);
      bVar9 = (*pcVar8)();
      return bVar9;
    }
    pcVar8 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
      uVar10 = func_?(&UNK_?);
      FUN_?(uVar10,0);
      pcVar8 = (code *)swi(3);
      bVar9 = (*pcVar8)();
      return bVar9;
    }
    pcRam_? = pcVar8;
    (*pcRam_?)(pvVar7,aPStack_3,2,(PhysicsScene *)&VStack_2);
    if (*(int *)&(TypeInfo__CollisionDetectionGlobalBuffers->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__CollisionDetectionGlobalBuffers);
    }
    pRVar11 = TypeInfo__CollisionDetectionGlobalBuffers->static_fields->rayHitBuffer;
    if (*(int *)&(TypeInfo__UnityEngine__Physics->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Physics);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Physics->_1).field_0x1c == 0) {
      FUN_?();
    }
    uVar12 = 0;
    aPStack_3[0].m_index = 0;
    aPStack_3[0].m_version = 1;
    VStack_13.y = fStack_5;
    VStack_13.x = fStack_4;
    VStack_13.z = fStack_6;
    iVar14 = UnityEngine.PhysicsModule.dll::UnityEngine::PhysicsScene::PhysicsScene_Raycast_2
                      (aPStack_3,&VStack_2,&VStack_13,pRVar11,_UNK_?,-5,
                       QueryTriggerInteraction__Enum_UseGlobal,(MethodInfo *)0x0);
    if (0 < iVar14) {
      do {
        if (*(int *)&(TypeInfo__CollisionDetectionGlobalBuffers->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__CollisionDetectionGlobalBuffers);
        }
        pRVar11 = TypeInfo__CollisionDetectionGlobalBuffers->static_fields->rayHitBuffer;
        if (pRVar11 == (RaycastHit__Array *)0x0) goto code_?;
        if ((uint)pRVar11->max_length <= uVar12) {
          FUN_?();
          pcVar8 = (code *)swi(3);
          bVar9 = (*pcVar8)();
          return bVar9;
        }
        pCVar15 = UnityEngine.PhysicsModule.dll::UnityEngine::RaycastHit::RaycastHit_get_collider
                           (pRVar11->vector + (int)uVar12,(MethodInfo *)0x0);
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
        if (collider == (Collider *)0x0 && pCVar15 == (Collider *)0x0) {
          return 1;
        }
        if (collider == (Collider *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (pCVar15 == (Collider *)0x0) goto code_?;
          bVar16 = (pCVar15->fields)._._.m_CachedPtr == (void *)0x0;
        }
        else if (pCVar15 == (Collider *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          bVar16 = (collider->fields)._._.m_CachedPtr == (void *)0x0;
        }
        else {
          bVar16 = pCVar15 == collider;
        }
        if (bVar16) {
          return 1;
        }
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < iVar14);
    }
    return 0;
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  bVar9 = (*pcVar8)();
  return bVar9;
}


/* Vector3[] GetBoundsCornersLocal(BoundsContext) */

Vector3__Array *
Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_GetBoundsCornersLocal
          (MVWorldObjectClient *this,BoundsContext__Enum boundsContext,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pfVar1 = (float *)(*(this->klass->vtable).GetLocalBounds.methodPtr)
                              (&VStack_2,this,(ulonglong)boundsContext,
                               (this->klass->vtable).GetLocalBounds.method);
  uStack_3 = *(undefined8 *)(pfVar1 + 4);
  fVar4 = *pfVar1;
  fVar5 = pfVar1[1];
  fVar6 = pfVar1[2];
  fVar7 = pfVar1[3];
  if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar8 = fVar5 - (float)uStack_3;
  fVar9 = fVar6 - uStack_3._4_4_;
  fVar5 = (float)uStack_3 + fVar5;
  fVar6 = uStack_3._4_4_ + fVar6;
  if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
    FUN_?();
  }
  VStack_10.y = fVar5;
  VStack_10.x = fVar7 + fVar4;
  VStack_2.y = fVar8;
  VStack_2.x = fVar4 - fVar7;
  VStack_10.z = fVar6;
  VStack_2.z = fVar9;
  pVVar11 = SharedCubeFunctions::SharedCubeFunctions_GetCorners_2
                     (&VStack_2,&VStack_10,(MethodInfo *)0x0);
  return pVVar11;
}


/* Vector3[] GetBoundsCornersWorld(BoundsContext) */

Vector3__Array *
Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_GetBoundsCornersWorld
          (MVWorldObjectClient *this,BoundsContext__Enum boundsContext,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_MethodInfo__System__Linq__Enumerable__Select<UnityEngine::Vector3,_UnityEngine::Vector3>_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>__System__Func<UnityEngine::Vector3,_UnityEngine::Vector3>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__Vector3__MethodInfo__System__Linq__Enumerable__ToArray<UnityEngine::Vector3>_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_____
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Func<UnityEngine::Vector3,_UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVWorldObjectClient____c__DisplayClass166_0___GetBoundsCornersWorld_b__0_UnityEngine__Vector3_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVWorldObjectClient____c__DisplayClass166_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__MVWorldObjectClient____c__DisplayClass166_0);
  obj = (this->fields).transform;
  if (obj != (Transform *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_2 = 0;
    uStack_3 = 0;
    uStack_4 = 0;
    uStack_5 = 0;
    uStack_6 = 0;
    uStack_7 = 0;
    uStack_8 = 0;
    uStack_9 = 0;
    pvVar10 = (obj->fields)._._.m_CachedPtr;
    if (pvVar10 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar11 = (code *)swi(3);
      pVVar12 = (Vector3__Array *)(*pcVar11)();
      return pVVar12;
    }
    pcVar11 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
      uVar13 = func_?(&UNK_?);
      FUN_?(uVar13,0);
      pcVar11 = (code *)swi(3);
      pVVar12 = (Vector3__Array *)(*pcVar11)();
      return pVVar12;
    }
    pcRam_? = pcVar11;
    (*pcRam_?)(pvVar10,&uStack_2);
    if (lVar1 != 0) {
      *(undefined8 *)(lVar1 + 0x10) = uStack_2;
      *(undefined8 *)(lVar1 + 0x18) = uStack_3;
      *(undefined8 *)(lVar1 + 0x20) = uStack_4;
      *(undefined8 *)(lVar1 + 0x28) = uStack_5;
      *(undefined8 *)(lVar1 + 0x30) = uStack_6;
      *(undefined8 *)(lVar1 + 0x38) = uStack_7;
      *(undefined8 *)(lVar1 + 0x40) = uStack_8;
      *(undefined8 *)(lVar1 + 0x48) = uStack_9;
      pVVar12 = MVWorldObjectClient_GetBoundsCornersLocal(this,boundsContext,(MethodInfo *)0x0);
      selector = (Func_2_UnityEngine_Vector3_UnityEngine_Vector3_ *)
                 FUN_?(TypeInfo__System__Func<UnityEngine::Vector3,_UnityEngine::Vector3>);
      FUN_?(selector,lVar1,
                    MethodInfo__MVWorldObjectClient____c__DisplayClass166_0___GetBoundsCornersWorld_b__0_UnityEngine__Vector3_
                   );
      source = System.Core.dll::System::Linq::Enumerable::Enumerable_Select_6
                         ((IEnumerable_1_UnityEngine_Vector3_ *)pVVar12,selector,
                          System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_MethodInfo__System__Linq__Enumerable__Select<UnityEngine::Vector3,_UnityEngine::Vector3>_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>__System__Func<UnityEngine::Vector3,_UnityEngine::Vector3>_
                         );
      pMVar14 = 
      UnityEngine__Vector3__MethodInfo__System__Linq__Enumerable__ToArray<UnityEngine::Vector3>_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_____
      ;
      if ((
          UnityEngine__Vector3__MethodInfo__System__Linq__Enumerable__ToArray<UnityEngine::Vector3>_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_____
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?(
                     UnityEngine__Vector3__MethodInfo__System__Linq__Enumerable__ToArray<UnityEngine::Vector3>_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_____
                     );
      }
      if (source == (IEnumerable_1_UnityEngine_Vector3_ *)0x0) {
        s = (String *)func_?(&StringLiteral_source);
        pEVar15 = System.Core.dll::System::Linq::Error::Error_1_ArgumentNull(s,(MethodInfo *)0x0);
        FUN_?(pEVar15,pMVar14);
        pcVar11 = (code *)swi(3);
        pVVar12 = (Vector3__Array *)(*pcVar11)();
        return pVVar12;
      }
      BStack_16.items = (Vector3__Array *)0x0;
      BStack_16.count = 0;
      BStack_16._12_4_ = 0;
      System.Core.dll::System::Linq::Buffer`1[UnityEngine::Vector3]::
      Buffer_1_UnityEngine_Vector3___ctor
                (&BStack_16,source,(pMVar14->field7_0x38).rgctx_data[2].method);
      uStack_17 = BStack_16.items._0_4_;
      uStack_18 = BStack_16.items._4_4_;
      iStack_19 = BStack_16.count;
      uStack_20 = BStack_16._12_4_;
      pVVar12 = (Vector3__Array *)
               FUN_?(&uStack_17,(pMVar14->field7_0x38).rgctx_data[3].rgctxDataDummy);
      return pVVar12;
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  pVVar12 = (Vector3__Array *)(*pcVar11)();
  return pVVar12;
}


/* Vector3 GetClosestGridPoint(Single, Vector3) */

Vector3 * Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_GetClosestGridPoint
                    (Vector3 *__return_storage_ptr__,MVWorldObjectClient *this,float gridSize,
                    Vector3 *position,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).gameObject;
  if ((pGVar1 != (GameObject *)0x0) &&
     (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (pGVar1,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    QStack_3.x = 0.0;
    QStack_3.y = 0.0;
    QStack_3.z = 0.0;
    QStack_3.w = 0.0;
    pvVar4 = (pTVar2->fields)._._.m_CachedPtr;
    if (pvVar4 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
      pcVar5 = (code *)swi(3);
      pVVar6 = (Vector3 *)(*pcVar5)();
      return pVVar6;
    }
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar5 = (code *)swi(3);
      pVVar6 = (Vector3 *)(*pcVar5)();
      return pVVar6;
    }
    pcRam_? = pcVar5;
    (*pcRam_?)(pvVar4);
    pGVar1 = (this->fields).gameObject;
    if ((pGVar1 != (GameObject *)0x0) &&
       (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (pGVar1,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      VStack_8.x = 0.0;
      VStack_8.y = 0.0;
      VStack_8.z = 0.0;
      pvVar4 = (pTVar2->fields)._._.m_CachedPtr;
      if (pvVar4 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        pVVar6 = (Vector3 *)(*pcVar5)();
        return pVVar6;
      }
      pcVar5 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
        uVar7 = func_?(&UNK_?);
        FUN_?(uVar7,0);
        pcVar5 = (code *)swi(3);
        pVVar6 = (Vector3 *)(*pcVar5)();
        return pVVar6;
      }
      pcRam_? = pcVar5;
      (*pcRam_?)(pvVar4,&VStack_8);
      if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
        FUN_?();
      }
      uVar7._0_4_ = position->x;
      uVar7._4_4_ = position->y;
      VStack_9.z = VStack_8.z;
      VStack_8.z = position->z;
      VStack_9.x = VStack_8.x;
      VStack_9.y = VStack_8.y;
      aQStack_10[0].x = QStack_3.x;
      aQStack_10[0].y = QStack_3.y;
      aQStack_10[0].z = QStack_3.z;
      aQStack_10[0].w = QStack_3.w;
      VStack_8._0_8_ = uVar7;
      pVVar6 = SharedCubeFunctions::SharedCubeFunctions_GetClosestGridPoint
                         ((Vector3 *)&QStack_3,&VStack_8,aQStack_10,gridSize,&VStack_9,
                          (MethodInfo *)0x0);
      fVar11 = pVVar6->y;
      fVar12 = pVVar6->z;
      __return_storage_ptr__->x = pVVar6->x;
      __return_storage_ptr__->y = fVar11;
      __return_storage_ptr__->z = fVar12;
      return __return_storage_ptr__;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pVVar6 = (Vector3 *)(*pcVar5)();
  return pVVar6;
}


/* MVWorldObjectClient GetHitInteractionHandlingWO() */

MVWorldObjectClient *
Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_GetHitInteractionHandlingWO
          (MVWorldObjectClient *this,MethodInfo *method)

{
  while( true ) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug,method);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_WorldObject_has_ParentHandlesHit);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    iVar1 = (this->fields)._PlayInteractionType_k__BackingField;
    if (iVar1 == 0) {
      return (MVWorldObjectClient *)0x0;
    }
    if (iVar1 == 1) {
      return this;
    }
    if (iVar1 != 2) break;
    if ((this->fields)._.groupId == -1) {
      context = (this->fields).gameObject;
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning_1
                ((Object *)StringLiteral_WorldObject_has_ParentHandlesHit,(Object_1 *)context,
                 (MethodInfo *)0x0);
      return (MVWorldObjectClient *)0x0;
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if ((this_00 == (MVWorldObjectClientManager *)0x0) ||
       (this = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                         (this_00,(this->fields)._.groupId,(MethodInfo *)0x0),
       this == (MVWorldObjectClient *)0x0)) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      pMVar3 = (MVWorldObjectClient *)(*pcVar2)();
      return pMVar3;
    }
    method = (MethodInfo *)0x0;
  }
  return (MVWorldObjectClient *)0x0;
}


/* Vector3 GetInputConnectorPos() */

Vector3 * Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_GetInputConnectorPos
                    (Vector3 *__return_storage_ptr__,MVWorldObjectClient *this,MethodInfo *method)

{
  cVar1 = (*(this->klass->vtable).get_HasInputConnector.methodPtr)(this);
  if (cVar1 == '\0') {
    pGVar2 = (this->fields).gameObject;
    if ((pGVar2 == (GameObject *)0x0) ||
       (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (pGVar2,(MethodInfo *)0x0), pTVar3 == (Transform *)0x0))
    goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_4 = 0;
    fStack_5 = 0.0;
    pvVar6 = (pTVar3->fields)._._.m_CachedPtr;
    if (pvVar6 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar3,(MethodInfo *)0x0);
      pcVar7 = (code *)swi(3);
      pVVar8 = (Vector3 *)(*pcVar7)();
      return pVVar8;
    }
    pcVar7 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9,0);
      pcVar7 = (code *)swi(3);
      pVVar8 = (Vector3 *)(*pcVar7)();
      return pVVar8;
    }
  }
  else {
    pGVar2 = (this->fields).inputConnectorObject;
    if ((pGVar2 == (GameObject *)0x0) ||
       (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (pGVar2,(MethodInfo *)0x0), pTVar3 == (Transform *)0x0)) {
code_?:
      FUN_?();
      pcVar7 = (code *)swi(3);
      pVVar8 = (Vector3 *)(*pcVar7)();
      return pVVar8;
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_4 = 0;
    fStack_5 = 0.0;
    pvVar6 = (pTVar3->fields)._._.m_CachedPtr;
    if (pvVar6 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar3,(MethodInfo *)0x0);
      pcVar7 = (code *)swi(3);
      pVVar8 = (Vector3 *)(*pcVar7)();
      return pVVar8;
    }
    pcVar7 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9,0);
      pcVar7 = (code *)swi(3);
      pVVar8 = (Vector3 *)(*pcVar7)();
      return pVVar8;
    }
  }
  pcRam_? = pcVar7;
  (*pcRam_?)(pvVar6,&uStack_4);
  __return_storage_ptr__->x = (float)(undefined4)uStack_4;
  __return_storage_ptr__->y = (float)uStack_4._4_4_;
  __return_storage_ptr__->z = fStack_5;
  return __return_storage_ptr__;
}


/* Vector3 GetLocalAxis(RotationMode) */

Vector3 * Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_GetLocalAxis
                    (Vector3 *__return_storage_ptr__,MVWorldObjectClient *this,
                    RotationMode__Enum rotationMode,MethodInfo *method)

{
  if (rotationMode == RotationMode__Enum_X) {
    pTVar1 = (this->fields).transform;
    if (pTVar1 == (Transform *)0x0) goto code_?;
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                       (&VStack_3,pTVar1,(MethodInfo *)0x0);
  }
  else if ((rotationMode == RotationMode__Enum_Y) || (rotationMode != RotationMode__Enum_Z)) {
    pTVar1 = (this->fields).transform;
    if (pTVar1 == (Transform *)0x0) goto code_?;
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                       (&VStack_3,pTVar1,(MethodInfo *)0x0);
  }
  else {
    pTVar1 = (this->fields).transform;
    if (pTVar1 == (Transform *)0x0) {
code_?:
      FUN_?();
      pcVar4 = (code *)swi(3);
      pVVar2 = (Vector3 *)(*pcVar4)();
      return pVVar2;
    }
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                       (&VStack_3,pTVar1,(MethodInfo *)0x0);
  }
  fVar5 = pVVar2->y;
  fVar6 = pVVar2->z;
  __return_storage_ptr__->x = pVVar2->x;
  __return_storage_ptr__->y = fVar5;
  __return_storage_ptr__->z = fVar6;
  return __return_storage_ptr__;
}


/* Bounds GetLocalBounds(BoundsContext) */

Bounds * Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_GetLocalBounds
                   (Bounds *__return_storage_ptr__,MVWorldObjectClient *this,
                   BoundsContext__Enum boundsContext,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,this,CONCAT44(in_register_00000084,boundsContext));
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_GetLocalBounds_has_not_been_impl);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  plVar1 = (longlong *)FUN_?(&(this->klass->_0).byval_arg);
  if (plVar1 != (longlong *)0x0) {
    arg0 = (Object *)(**(code **)(*plVar1 + 0x1b8))(plVar1,*(undefined8 *)(*plVar1 + 0x1c0));
    pSVar2 = StringLiteral_GetLocalBounds_has_not_been_impl;
    PStack_3._arg0 = (Object *)0x0;
    PStack_3._arg1 = (Object *)0x0;
    PStack_3._arg2 = (Object *)0x0;
    PStack_3._args = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor(&PStack_3,arg0,(MethodInfo *)0x0);
    PStack_4._arg0 = PStack_3._arg0;
    PStack_4._arg1 = PStack_3._arg1;
    PStack_4._arg2 = PStack_3._arg2;
    PStack_4._args = PStack_3._args;
    pSVar2 = mscorlib.dll::System::String::String_FormatHelper
                       ((IFormatProvider *)0x0,pSVar2,&PStack_4,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)pSVar2,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar6 = (pVVar5->zeroVector).x;
    fVar7 = (pVVar5->zeroVector).y;
    fVar8 = (pVVar5->zeroVector).z;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    fVar9 = _UNK_?;
    pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
    (__return_storage_ptr__->m_Center).x = fVar6;
    (__return_storage_ptr__->m_Center).y = fVar7;
    (__return_storage_ptr__->m_Center).z = fVar8;
    uVar10 = (pVVar5->zeroVector).x;
    fVar8 = (pVVar5->zeroVector).y;
    fVar6 = (pVVar5->zeroVector).z;
    (__return_storage_ptr__->m_Extents).x = (float)uVar10 * fVar9;
    (__return_storage_ptr__->m_Extents).y = fVar8 * fVar9;
    (__return_storage_ptr__->m_Extents).z = fVar6 * fVar9;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  pBVar12 = (Bounds *)(*pcVar11)();
  return pBVar12;
}


/* Vector3 GetObjectConnectorPos() */

Vector3 * Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_GetObjectConnectorPos
                    (Vector3 *__return_storage_ptr__,MVWorldObjectClient *this,MethodInfo *method)

{
  cVar1 = (*(this->klass->vtable).get_HasObjectConnector.methodPtr)(this);
  if (cVar1 == '\0') {
    pGVar2 = (this->fields).gameObject;
    if ((pGVar2 == (GameObject *)0x0) ||
       (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (pGVar2,(MethodInfo *)0x0), pTVar3 == (Transform *)0x0))
    goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_4 = 0;
    fStack_5 = 0.0;
    pvVar6 = (pTVar3->fields)._._.m_CachedPtr;
    if (pvVar6 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar3,(MethodInfo *)0x0);
      pcVar7 = (code *)swi(3);
      pVVar8 = (Vector3 *)(*pcVar7)();
      return pVVar8;
    }
    pcVar7 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9,0);
      pcVar7 = (code *)swi(3);
      pVVar8 = (Vector3 *)(*pcVar7)();
      return pVVar8;
    }
  }
  else {
    pGVar2 = (this->fields).objectConnectorObject;
    if ((pGVar2 == (GameObject *)0x0) ||
       (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (pGVar2,(MethodInfo *)0x0), pTVar3 == (Transform *)0x0)) {
code_?:
      FUN_?();
      pcVar7 = (code *)swi(3);
      pVVar8 = (Vector3 *)(*pcVar7)();
      return pVVar8;
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_4 = 0;
    fStack_5 = 0.0;
    pvVar6 = (pTVar3->fields)._._.m_CachedPtr;
    if (pvVar6 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar3,(MethodInfo *)0x0);
      pcVar7 = (code *)swi(3);
      pVVar8 = (Vector3 *)(*pcVar7)();
      return pVVar8;
    }
    pcVar7 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9,0);
      pcVar7 = (code *)swi(3);
      pVVar8 = (Vector3 *)(*pcVar7)();
      return pVVar8;
    }
  }
  pcRam_? = pcVar7;
  (*pcRam_?)(pvVar6,&uStack_4);
  __return_storage_ptr__->x = (float)(undefined4)uStack_4;
  __return_storage_ptr__->y = (float)uStack_4._4_4_;
  __return_storage_ptr__->z = fStack_5;
  return __return_storage_ptr__;
}


/* Vector3 GetOutputConnectorPos() */

Vector3 * Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_GetOutputConnectorPos
                    (Vector3 *__return_storage_ptr__,MVWorldObjectClient *this,MethodInfo *method)

{
  cVar1 = (*(this->klass->vtable).get_HasOutputConnector.methodPtr)(this);
  if (cVar1 == '\0') {
    pGVar2 = (this->fields).gameObject;
    if ((pGVar2 == (GameObject *)0x0) ||
       (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (pGVar2,(MethodInfo *)0x0), pTVar3 == (Transform *)0x0))
    goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_4 = 0;
    fStack_5 = 0.0;
    pvVar6 = (pTVar3->fields)._._.m_CachedPtr;
    if (pvVar6 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar3,(MethodInfo *)0x0);
      pcVar7 = (code *)swi(3);
      pVVar8 = (Vector3 *)(*pcVar7)();
      return pVVar8;
    }
    pcVar7 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9,0);
      pcVar7 = (code *)swi(3);
      pVVar8 = (Vector3 *)(*pcVar7)();
      return pVVar8;
    }
  }
  else {
    pGVar2 = (this->fields).outputConnectorObject;
    if ((pGVar2 == (GameObject *)0x0) ||
       (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (pGVar2,(MethodInfo *)0x0), pTVar3 == (Transform *)0x0)) {
code_?:
      FUN_?();
      pcVar7 = (code *)swi(3);
      pVVar8 = (Vector3 *)(*pcVar7)();
      return pVVar8;
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_4 = 0;
    fStack_5 = 0.0;
    pvVar6 = (pTVar3->fields)._._.m_CachedPtr;
    if (pvVar6 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar3,(MethodInfo *)0x0);
      pcVar7 = (code *)swi(3);
      pVVar8 = (Vector3 *)(*pcVar7)();
      return pVVar8;
    }
    pcVar7 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9,0);
      pcVar7 = (code *)swi(3);
      pVVar8 = (Vector3 *)(*pcVar7)();
      return pVVar8;
    }
  }
  pcRam_? = pcVar7;
  (*pcRam_?)(pvVar6,&uStack_4);
  __return_storage_ptr__->x = (float)(undefined4)uStack_4;
  __return_storage_ptr__->y = (float)uStack_4._4_4_;
  __return_storage_ptr__->z = fStack_5;
  return __return_storage_ptr__;
}


/* Vector3 GetTargetPosition() */

Vector3 * Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_GetTargetPosition
                    (Vector3 *__return_storage_ptr__,MVWorldObjectClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Collider>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Did_not_find_collider__Using_tra);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = 
  UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Collider>__
  ;
  this_00 = (this->fields).gameObject;
  if (this_00 != (GameObject *)0x0) {
    if ((
        UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Collider>__
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(
                   UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Collider>__
                   );
    }
    obj_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
             GameObject_GetComponentInChildren_3
                       (this_00,0,((pMVar1->field7_0x38).rgctx_data)->method);
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
    if (obj_00 != (Object *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (obj_00[1].klass != (Object__Class *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Collider>_UnityEngine__Collider_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        uStack_2 = 0;
        uStack_3 = 0;
        uStack_4 = 0;
        pOVar5 = obj_00[1].klass;
        if (pOVar5 != (Object__Class *)0x0) {
          pcVar6 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
            uVar7 = func_?(&UNK_?);
            FUN_?(uVar7,0);
            pcVar6 = (code *)swi(3);
            pVVar8 = (Vector3 *)(*pcVar6)();
            return pVVar8;
          }
          pcRam_? = pcVar6;
          (*pcRam_?)(pOVar5,&uStack_2);
          __return_storage_ptr__->x = (float)uStack_2;
          __return_storage_ptr__->y = uStack_2._4_4_;
          __return_storage_ptr__->z = (float)uStack_3;
          return __return_storage_ptr__;
        }
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException(obj_00,(MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        pVVar8 = (Vector3 *)(*pcVar6)();
        return pVVar8;
      }
    }
    pSVar9 = StringLiteral_Did_not_find_collider__Using_tra;
    str1 = (String *)
           (*(this->klass->vtable).ToString.methodPtr)(this,(this->klass->vtable).ToString.method);
    pSVar9 = mscorlib.dll::System::String::String_Concat_4(pSVar9,str1,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)pSVar9,(MethodInfo *)0x0);
    obj = (this->fields).transform;
    if (obj != (Transform *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_2 = 0;
      uStack_3 = (ulonglong)uStack_3._4_4_ << 0x20;
      pvVar10 = (obj->fields)._._.m_CachedPtr;
      if (pvVar10 != (void *)0x0) {
        pcVar6 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
          uVar7 = func_?(&UNK_?);
          FUN_?(uVar7,0);
          pcVar6 = (code *)swi(3);
          pVVar8 = (Vector3 *)(*pcVar6)();
          return pVVar8;
        }
        pcRam_? = pcVar6;
        (*pcRam_?)(pvVar10,&uStack_2);
        __return_storage_ptr__->x = (float)uStack_2;
        __return_storage_ptr__->y = uStack_2._4_4_;
        __return_storage_ptr__->z = (float)uStack_3;
        return __return_storage_ptr__;
      }
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar6 = (code *)swi(3);
      pVVar8 = (Vector3 *)(*pcVar6)();
      return pVVar8;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  pVVar8 = (Vector3 *)(*pcVar6)();
  return pVVar8;
}


/* MVWorldObjectClient+TransformData GetTransformData(Dictionary`2[System.Object,System.Object]) */

MVWorldObjectClient_TransformData *
Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_GetTransformData
          (MVWorldObjectClient_TransformData *__return_storage_ptr__,MVWorldObjectClient *this,
          Dictionary_2_System_Object_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__WorldObjectDataParameters);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Nan_position_detected);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Nan_rotation_detected);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pWVar1 = TypeInfo__MV__WorldObject__WorldObjectDataParameters;
  auStackX_8[0] = 4;
  (__return_storage_ptr__->position).x = 0.0;
  (__return_storage_ptr__->position).y = 0.0;
  *(undefined8 *)&(__return_storage_ptr__->position).z = 0;
  (__return_storage_ptr__->rotation).y = 0.0;
  (__return_storage_ptr__->rotation).z = 0.0;
  (__return_storage_ptr__->rotation).w = 0.0;
  pOVar2 = (Object *)FUN_?(pWVar1,auStackX_8);
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__get_Item
                        (data,pOVar2,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    if (pOVar2 != (Object *)0x0) {
      if ((pOVar2->klass->_0).element_class != (TypeInfo__UnityEngine__Vector3->_0).element_class)
      {
        FUN_?(pOVar2,TypeInfo__UnityEngine__Vector3);
        pcVar3 = (code *)swi(3);
        pMVar4 = (MVWorldObjectClient_TransformData *)(*pcVar3)();
        return pMVar4;
      }
      fVar5 = *(float *)&pOVar2[1].monitor;
      *(Object__Class **)&__return_storage_ptr__->position = pOVar2[1].klass;
      (__return_storage_ptr__->position).z = fVar5;
      if (((0x7f800000 < (uint)ABS((__return_storage_ptr__->position).x)) ||
          (0x7f800000 < (uint)ABS((__return_storage_ptr__->position).y))) ||
         (0x7f800000 < (uint)ABS((__return_storage_ptr__->position).z))) {
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)StringLiteral_Nan_position_detected,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
        fVar7 = (pVVar6->zeroVector).y;
        fVar5 = (pVVar6->zeroVector).z;
        (__return_storage_ptr__->position).x = (pVVar6->zeroVector).x;
        (__return_storage_ptr__->position).y = fVar7;
        (__return_storage_ptr__->position).z = fVar5;
      }
      auStackX_8[0] = 5;
      pOVar2 = (Object *)
                FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,auStackX_8);
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          (data,pOVar2,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
      if (pOVar2 != (Object *)0x0) {
        if ((pOVar2->klass->_0).element_class ==
            (TypeInfo__UnityEngine__Quaternion->_0).element_class) {
          pMVar8 = pOVar2[1].monitor;
          *(Object__Class **)&__return_storage_ptr__->rotation = pOVar2[1].klass;
          *(MonitorData **)&(__return_storage_ptr__->rotation).z = pMVar8;
          uVar9 = (__return_storage_ptr__->rotation).y;
          uVar10 = (__return_storage_ptr__->rotation).z;
          if (((0x7f800000 < (uint)ABS((__return_storage_ptr__->rotation).x)) ||
              (0x7f800000 < (uVar9 & 0x7fffffff))) ||
             ((0x7f800000 < (uVar10 & 0x7fffffff) ||
              (0x7f800000 < (uint)ABS((__return_storage_ptr__->rotation).w))))) {
            if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                      ((Object *)StringLiteral_Nan_rotation_detected,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Quaternion);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pQVar11 = TypeInfo__UnityEngine__Quaternion->static_fields;
            fVar5 = (pQVar11->identityQuaternion).y;
            fVar7 = (pQVar11->identityQuaternion).z;
            fVar12 = (pQVar11->identityQuaternion).w;
            (__return_storage_ptr__->rotation).x = (pQVar11->identityQuaternion).x;
            (__return_storage_ptr__->rotation).y = fVar5;
            (__return_storage_ptr__->rotation).z = fVar7;
            (__return_storage_ptr__->rotation).w = fVar12;
          }
          return __return_storage_ptr__;
        }
        FUN_?(pOVar2,TypeInfo__UnityEngine__Quaternion);
        pcVar3 = (code *)swi(3);
        pMVar4 = (MVWorldObjectClient_TransformData *)(*pcVar3)();
        return pMVar4;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  pMVar4 = (MVWorldObjectClient_TransformData *)(*pcVar3)();
  return pMVar4;
}


/* Boolean HasEliteRequiredFlag(InteractionFlags) */

bool Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_HasEliteRequiredFlag
               (MVWorldObjectClient *this,InteractionFlags__Enum flag,MethodInfo *method)

{
  return ((this->fields).eliteRequiredFlags & CONCAT44(in_register_00000014,flag)) ==
         CONCAT44(in_register_00000014,flag);
}


/* Boolean HasInteractionFlag(InteractionFlags) */

bool Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
               (MVWorldObjectClient *this,InteractionFlags__Enum flag,MethodInfo *method)

{
  return ((this->fields).interactionFlags & CONCAT44(in_register_00000014,flag)) ==
         CONCAT44(in_register_00000014,flag);
}


/* Void HideConnectors() */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_HideConnectors
               (MVWorldObjectClient *this,MethodInfo *method)

{
  cVar1 = (*(this->klass->vtable).get_HasInputConnector.methodPtr)();
  if (cVar1 != '\0') {
    pGVar2 = (this->fields).inputConnectorObject;
    if (pGVar2 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,0,(MethodInfo *)0x0);
  }
  cVar1 = (*(this->klass->vtable).get_HasOutputConnector.methodPtr)(this);
  if (cVar1 != '\0') {
    pGVar2 = (this->fields).outputConnectorObject;
    if (pGVar2 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,0,(MethodInfo *)0x0);
  }
  cVar1 = (*(this->klass->vtable).get_HasObjectConnector.methodPtr)(this);
  if (cVar1 == '\0') {
    return;
  }
  pGVar2 = (this->fields).objectConnectorObject;
  if (pGVar2 != (GameObject *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                    ,0,0);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pGVar2 == (GameObject *)0x0) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pvVar4 = (pGVar2->fields)._.m_CachedPtr;
    if (pvVar4 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar2,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam_?)(pvVar4,0);
    return;
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void HighlightConnector(Boolean) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_HighlightConnector
               (MVWorldObjectClient *this,bool state,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__Renderer_MethodInfo__UnityEngine__Component__GetComponentInChildren<UnityEngine::Renderer>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Collider>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = 
  UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Collider>__
  ;
  if ((this->fields).selectedConnector == 0) {
    pGVar2 = (this->fields).outputConnectorObject;
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
    if (pGVar2 != (GameObject *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pMVar1 = 
      UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Collider>__
      ;
      if ((pGVar2->fields)._.m_CachedPtr != (void *)0x0) {
        pGVar2 = (this->fields).outputConnectorObject;
        if (pGVar2 == (GameObject *)0x0) goto code_?;
        if ((
            UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Collider>__
            ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?(
                       UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Collider>__
                       );
        }
        pCVar3 = (Component *)
                 UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                 GameObject_GetComponentInChildren_3
                           (pGVar2,0,((pMVar1->field7_0x38).rgctx_data)->method);
        if (pCVar3 == (Component *)0x0) goto code_?;
        pRVar4 = (Renderer *)
                 UnityEngine.CoreModule.dll::UnityEngine::Component::
                 Component_GetComponentInChildren_1
                           (pCVar3,
                            UnityEngine__Renderer_MethodInfo__UnityEngine__Component__GetComponentInChildren<UnityEngine::Renderer>__
                           );
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
        if (pRVar4 == (Renderer *)0x0) {
          return;
        }
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((pRVar4->fields)._._.m_CachedPtr == (void *)0x0) {
          return;
        }
        lVar5 = FUN_?();
        if (state == 0) {
          if (lVar5 == 0) goto code_?;
          pMVar6 = *(Material **)(lVar5 + 0x4b8);
        }
        else {
          if (lVar5 == 0) goto code_?;
          pMVar6 = *(Material **)(lVar5 + 0x4c0);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_SetMaterial
                  (pRVar4,pMVar6,(MethodInfo *)0x0);
      }
    }
    pGVar2 = (this->fields).inputConnectorObject;
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
    if (pGVar2 == (GameObject *)0x0) {
      return;
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pGVar2->fields)._.m_CachedPtr == (void *)0x0) {
      return;
    }
    if ((this->fields).inputConnectorObject == (GameObject *)0x0) goto code_?;
    pCVar3 = (Component *)FUN_?();
  }
  else {
    if ((this->fields).selectedConnector != 1) {
      if ((this->fields).selectedConnector != 2) {
        return;
      }
      if (((this->fields).outputConnectorObject == (GameObject *)0x0) ||
         (pCVar3 = (Component *)FUN_?(), pCVar3 == (Component *)0x0))
      goto code_?;
      pRVar4 = (Renderer *)
               UnityEngine.CoreModule.dll::UnityEngine::Component::
               Component_GetComponentInChildren_1
                         (pCVar3,
                          UnityEngine__Renderer_MethodInfo__UnityEngine__Component__GetComponentInChildren<UnityEngine::Renderer>__
                         );
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
      if (pRVar4 == (Renderer *)0x0) {
        return;
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((pRVar4->fields)._._.m_CachedPtr == (void *)0x0) {
        return;
      }
      lVar5 = FUN_?();
      if (state == 0) {
        if (lVar5 == 0) goto code_?;
        pMVar6 = *(Material **)(lVar5 + 0x4b8);
      }
      else {
        if (lVar5 == 0) goto code_?;
        pMVar6 = *(Material **)(lVar5 + 0x4c0);
      }
      goto code_?;
    }
    pGVar2 = (this->fields).inputConnectorObject;
    if (pGVar2 == (GameObject *)0x0) goto code_?;
    if ((
        UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Collider>__
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(
                   UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Collider>__
                   );
    }
    pCVar3 = (Component *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::
             GameObject_GetComponentInChildren_3
                       (pGVar2,0,((pMVar1->field7_0x38).rgctx_data)->method);
  }
  if (pCVar3 != (Component *)0x0) {
    pRVar4 = (Renderer *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponentInChildren_1
                       (pCVar3,
                        UnityEngine__Renderer_MethodInfo__UnityEngine__Component__GetComponentInChildren<UnityEngine::Renderer>__
                       );
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
    if (pRVar4 == (Renderer *)0x0) {
      return;
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pRVar4->fields)._._.m_CachedPtr == (void *)0x0) {
      return;
    }
    lVar5 = FUN_?();
    if (state == 0) {
      if (lVar5 == 0) goto code_?;
      pMVar6 = *(Material **)(lVar5 + 0x4a8);
    }
    else {
      if (lVar5 == 0) goto code_?;
      pMVar6 = *(Material **)(lVar5 + 0x4b0);
    }
code_?:
    UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_SetMaterial
              (pRVar4,pMVar6,(MethodInfo *)0x0);
    return;
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_Initialize
               (MVWorldObjectClient *this,MethodInfo *method)

{
  if ((this->fields)._.previewOwnerProfileId != 0) {
    (*(this->klass->vtable).AddPreviewBox.methodPtr)
              (this,(this->klass->vtable).AddPreviewBox.method);
    piVar1 = &(this->fields).interactionFlags;
    *piVar1 = *piVar1 | 0x20000;
  }
  return;
}


/* GameObject InstantiatePrefab(GameObject, MVWorldObjectClient+TransformData) */

GameObject *
Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_InstantiatePrefab
          (MVWorldObjectClient *this,GameObject *prefabObject,
          MVWorldObjectClient_TransformData *transformData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Vector3__UnityEngine__Quaternion_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Prefab_object_is_null_);
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
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (prefabObject != (GameObject *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((prefabObject->fields)._.m_CachedPtr != (void *)0x0) goto code_?;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
            ((Object *)StringLiteral_Prefab_object_is_null_,(MethodInfo *)0x0);
code_?:
  uStack_1._0_4_ = (transformData->rotation).y;
  uStack_1._4_4_ = (transformData->rotation).z;
  fStack_2 = (transformData->rotation).w;
  fVar3 = (transformData->position).x;
  fVar4 = (transformData->position).y;
  fVar5 = (transformData->position).z;
  fStack_6 = (transformData->rotation).x;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    fStack_7 = fVar3;
    fStack_8 = fVar4;
    fStack_9 = fVar5;
    FUN_?();
  }
  fStack_7 = fStack_6;
  fStack_8 = (float)(undefined4)uStack_1;
  fStack_9 = (float)uStack_1._4_4_;
  fStack_6 = fStack_2;
  fStack_10 = fVar3;
  fStack_11 = fVar4;
  fStack_12 = fVar5;
  pGVar13 = (GameObject *)FUN_?(prefabObject,&fStack_10,&fStack_7);
  if (pGVar13 != (GameObject *)0x0) {
    iVar14 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                      ((Object_1 *)pGVar13,(MethodInfo *)0x0);
    (this->fields).goId = iVar14;
    return pGVar13;
  }
  FUN_?();
  pcVar15 = (code *)swi(3);
  pGVar13 = (GameObject *)(*pcVar15)();
  return pGVar13;
}


/* ObjectPrefab InstantiatePrefab(ObjectPrefab, MVWorldObjectClient+TransformData) */

ObjectPrefab *
Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_InstantiatePrefab_1
          (MVWorldObjectClient *this,ObjectPrefab *prefabObject,
          MVWorldObjectClient_TransformData *transformData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  ObjectPrefab_MethodInfo__UnityEngine__Object__Instantiate<ObjectPrefab>_ObjectPrefab__UnityEngine__Vector3__UnityEngine__Quaternion_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Prefab_object_is_null_);
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
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (prefabObject != (ObjectPrefab *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((prefabObject->fields)._._._._.m_CachedPtr != (void *)0x0) goto code_?;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
            ((Object *)StringLiteral_Prefab_object_is_null_,(MethodInfo *)0x0);
code_?:
  uVar1 = (transformData->rotation).y;
  uVar2 = (transformData->rotation).z;
  fStack_3 = (transformData->rotation).w;
  fVar4 = (transformData->position).x;
  fVar5 = (transformData->position).y;
  QStack_6.x = (transformData->position).x;
  QStack_6.y = (transformData->position).y;
  fVar7 = (transformData->position).z;
  QStack_6.w = (transformData->rotation).x;
  QStack_6.z = fVar7;
  fStack_8 = (float)uVar1;
  fStack_9 = (float)uVar2;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar10 = 
  ObjectPrefab_MethodInfo__UnityEngine__Object__Instantiate<ObjectPrefab>_ObjectPrefab__UnityEngine__Vector3__UnityEngine__Quaternion_
  ;
  if ((
      ObjectPrefab_MethodInfo__UnityEngine__Object__Instantiate<ObjectPrefab>_ObjectPrefab__UnityEngine__Vector3__UnityEngine__Quaternion_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    if ((pMVar10->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar10);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  QStack_6.y = fStack_8;
  QStack_6.x = QStack_6.w;
  QStack_6.z = fStack_9;
  QStack_6.w = fStack_3;
  VStack_11.x = fVar4;
  VStack_11.y = fVar5;
  VStack_11.z = fVar7;
  pOVar12 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate
                     ((Object_1 *)prefabObject,&VStack_11,&QStack_6,(MethodInfo *)0x0);
  pvVar13 = ((pMVar10->field7_0x38).rgctx_data)->rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar13 + 0x135) & 1) == 0) {
    pvVar13 = (void *)FUN_?(pvVar13);
  }
  if (pOVar12 != (Object_1 *)0x0) {
    pOVar14 = (ObjectPrefab *)FUN_?(pOVar12);
    if (pOVar14 == (ObjectPrefab *)0x0) {
      FUN_?(pOVar12,pvVar13);
      pcVar15 = (code *)swi(3);
      pOVar14 = (ObjectPrefab *)(*pcVar15)();
      return pOVar14;
    }
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)pOVar14,(MethodInfo *)0x0);
    if (this_00 != (GameObject *)0x0) {
      iVar16 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                        ((Object_1 *)this_00,(MethodInfo *)0x0);
      (this->fields).goId = iVar16;
      return pOVar14;
    }
  }
  FUN_?();
  pcVar15 = (code *)swi(3);
  pOVar14 = (ObjectPrefab *)(*pcVar15)();
  return pOVar14;
}


/* Void InventoryInitialize() */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_InventoryInitialize
               (MVWorldObjectClient *this,MethodInfo *method)

{
  pMVar1 = this->klass;
  (this->fields).initializedFromInventory = 1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(pMVar1->vtable).InitializeInventory.methodPtr)
            (this,(pMVar1->vtable).InitializeInventory.method);
  return;
}


/* Boolean IsPointOverInputConnector(Vector3) */

bool Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_IsPointOverInputConnector
               (MVWorldObjectClient *this,Vector3 *mousePoint,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Collider>__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cVar1 = (*(this->klass->vtable).get_HasInputConnector.methodPtr)(this);
  pMVar2 = 
  UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Collider>__
  ;
  if (cVar1 != '\0') {
    this_00 = (this->fields).inputConnectorObject;
    if (this_00 != (GameObject *)0x0) {
      if ((
          UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Collider>__
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?(
                     UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Collider>__
                     );
      }
      collider = (Collider *)
                 UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                 GameObject_GetComponentInChildren_3
                           (this_00,0,((pMVar2->field7_0x38).rgctx_data)->method);
      VStack_3.z = mousePoint->z;
      VStack_3.x = mousePoint->x;
      VStack_3.y = mousePoint->y;
      bVar4 = MVWorldObjectClient_DoesScreenPointHitCollider
                        (this,&VStack_3,collider,(MethodInfo *)0x0);
      return bVar4;
    }
    FUN_?();
    pcVar5 = (code *)swi(3);
    bVar4 = (*pcVar5)();
    return bVar4;
  }
  return 0;
}


/* Boolean IsPointOverOutputConnector(Vector3) */

bool Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_IsPointOverOutputConnector
               (MVWorldObjectClient *this,Vector3 *mousePoint,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Collider>__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cVar1 = (*(this->klass->vtable).get_HasOutputConnector.methodPtr)(this);
  pMVar2 = 
  UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Collider>__
  ;
  if (cVar1 != '\0') {
    this_00 = (this->fields).outputConnectorObject;
    if (this_00 != (GameObject *)0x0) {
      if ((
          UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Collider>__
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?(
                     UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Collider>__
                     );
      }
      collider = (Collider *)
                 UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                 GameObject_GetComponentInChildren_3
                           (this_00,0,((pMVar2->field7_0x38).rgctx_data)->method);
      VStack_3.z = mousePoint->z;
      VStack_3.x = mousePoint->x;
      VStack_3.y = mousePoint->y;
      bVar4 = MVWorldObjectClient_DoesScreenPointHitCollider
                        (this,&VStack_3,collider,(MethodInfo *)0x0);
      return bVar4;
    }
    FUN_?();
    pcVar5 = (code *)swi(3);
    bVar4 = (*pcVar5)();
    return bVar4;
  }
  return 0;
}


/* Boolean OnClickHandler(EditorStateMachine, Collider) */

bool Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_OnClickHandler
               (MVWorldObjectClient *this,EditorStateMachine *esm,Collider *collider,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Collider>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cVar1 = (*(this->klass->vtable).get_HasInputConnector.methodPtr)(this);
  pMVar2 = 
  UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Collider>__
  ;
  if (cVar1 == '\0') {
code_?:
    cVar1 = (*(this->klass->vtable).get_HasOutputConnector.methodPtr)(this);
    pMVar2 = 
    UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Collider>__
    ;
    if (cVar1 == '\0') {
code_?:
      cVar1 = (*(this->klass->vtable).get_HasObjectConnector.methodPtr)(this);
      pMVar2 = 
      UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Collider>__
      ;
      if (cVar1 == '\0') {
        return 0;
      }
      pGVar3 = (this->fields).objectConnectorObject;
      if (pGVar3 == (GameObject *)0x0) goto code_?;
      if ((
          UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Collider>__
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?(
                     UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Collider>__
                     );
      }
      pCVar4 = (Collider *)
               UnityEngine.CoreModule.dll::UnityEngine::GameObject::
               GameObject_GetComponentInChildren_3
                         (pGVar3,0,((pMVar2->field7_0x38).rgctx_data)->method);
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
      if (collider != (Collider *)0x0 || pCVar4 != (Collider *)0x0) {
        if (pCVar4 == (Collider *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (collider == (Collider *)0x0) goto code_?;
          bVar5 = (collider->fields)._._.m_CachedPtr == (void *)0x0;
        }
        else if (collider == (Collider *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          bVar5 = (pCVar4->fields)._._.m_CachedPtr == (void *)0x0;
        }
        else {
          bVar5 = collider == pCVar4;
        }
        if (!bVar5) {
          return 0;
        }
      }
      (this->fields).selectedConnector = 3;
      if (esm == (EditorStateMachine *)0x0) goto code_?;
      if ((esm->fields)._.lockState != 0) {
        return 1;
      }
      nextState = EditorEvent__Enum_ESAddObjectLink;
      goto code_?;
    }
    pGVar3 = (this->fields).outputConnectorObject;
    if (pGVar3 == (GameObject *)0x0) goto code_?;
    if ((
        UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Collider>__
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(
                   UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Collider>__
                   );
    }
    pCVar4 = (Collider *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::
             GameObject_GetComponentInChildren_3
                       (pGVar3,0,((pMVar2->field7_0x38).rgctx_data)->method);
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
    if (collider != (Collider *)0x0 || pCVar4 != (Collider *)0x0) {
      if (pCVar4 == (Collider *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (collider == (Collider *)0x0) goto code_?;
        bVar5 = (collider->fields)._._.m_CachedPtr == (void *)0x0;
      }
      else if (collider == (Collider *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        bVar5 = (pCVar4->fields)._._.m_CachedPtr == (void *)0x0;
      }
      else {
        bVar5 = collider == pCVar4;
      }
      if (!bVar5) goto code_?;
    }
    (this->fields).selectedConnector = 2;
  }
  else {
    pGVar3 = (this->fields).inputConnectorObject;
    if (pGVar3 == (GameObject *)0x0) goto code_?;
    if ((
        UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Collider>__
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(
                   UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Collider>__
                   );
    }
    pCVar4 = (Collider *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::
             GameObject_GetComponentInChildren_3
                       (pGVar3,0,((pMVar2->field7_0x38).rgctx_data)->method);
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
    if (collider != (Collider *)0x0 || pCVar4 != (Collider *)0x0) {
      if (pCVar4 == (Collider *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (collider == (Collider *)0x0) goto code_?;
        bVar5 = (collider->fields)._._.m_CachedPtr == (void *)0x0;
      }
      else if (collider == (Collider *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        bVar5 = (pCVar4->fields)._._.m_CachedPtr == (void *)0x0;
      }
      else {
        bVar5 = collider == pCVar4;
      }
      if (!bVar5) goto code_?;
    }
    (this->fields).selectedConnector = 1;
  }
  if (esm == (EditorStateMachine *)0x0) {
code_?:
    FUN_?();
    pcVar6 = (code *)swi(3);
    bVar7 = (*pcVar6)();
    return bVar7;
  }
  if ((esm->fields)._.lockState != 0) {
    return 1;
  }
  nextState = EditorEvent__Enum_ESAddLink;
code_?:
  FSMEntity::FSMEntity_PushState_1
            ((FSMEntity *)esm,nextState,EditorEvent__Enum_UndefinedState,(MethodInfo *)0x0);
  return 1;
}


/* Boolean OnExitObject(EditorStateMachine) */

bool Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_OnExitObject
               (MVWorldObjectClient *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__EditorEvent);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  auStackX_10[0] = 0xc;
  value = (Object *)FUN_?(TypeInfo__EditorEvent,auStackX_10);
  if (e != (EditorStateMachine *)0x0) {
    FSMEntity::FSMEntity_set_Event((FSMEntity *)e,value,(MethodInfo *)0x0);
    return 0;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  bVar2 = (*pcVar1)();
  return bVar2;
}


/* Void OnSelectedChanged(Boolean) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_OnSelectedChanged
               (MVWorldObjectClient *this,bool selected,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__SelectedEventArgs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).SelectedChanged != (UnityAction_2_MVWorldObjectClient_SelectedEventArgs_ *)0x0)
  {
    pUVar1 = (this->fields).SelectedChanged;
    lVar2 = FUN_?(TypeInfo__SelectedEventArgs);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__EventArgs);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__System__EventArgs->_1).field_0x1c == 0) {
      FUN_?();
    }
    *(bool *)(lVar2 + 0x10) = selected;
    (*(pUVar1->fields)._._.invoke_impl)
              ((pUVar1->fields)._._.method_code,this,lVar2,(pUVar1->fields)._._.method);
  }
  return;
}


/* Void PartialRemoveFromWOData(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_PartialRemoveFromWOData
               (MVWorldObjectClient *this,Dictionary_2_System_Object_System_Object_ *entriesToRemove
               ,MethodInfo *method)

{
  MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialRemoveFromHashtable_1
            ((this->fields)._.data,entriesToRemove,0,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(this->klass->vtable).OnDataUpdate.methodPtr)(this,(this->klass->vtable).OnDataUpdate.method);
  return;
}


/* Void PartialUpdateWOData(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_PartialUpdateWOData
               (MVWorldObjectClient *this,Dictionary_2_System_Object_System_Object_ *woData,
               MethodInfo *method)

{
  MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialUpdateHashtable
            ((this->fields)._.data,woData,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(this->klass->vtable).OnDataUpdate.methodPtr)(this,(this->klass->vtable).OnDataUpdate.method);
  return;
}


/* Void PositionChangedNotify() */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_PositionChangedNotify
               (MVWorldObjectClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PositionChangedEventArgs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).PositionChanged !=
      (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
    pUVar1 = (this->fields).PositionChanged;
    obj = (this->fields).transform;
    if (obj == (Transform *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_3 = 0;
    uStack_4 = 0;
    pvVar5 = (obj->fields)._._.m_CachedPtr;
    if (pvVar5 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)(pvVar5,&uStack_3);
    lVar7 = FUN_?(TypeInfo__PositionChangedEventArgs);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__EventArgs);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__System__EventArgs->_1).field_0x1c == 0) {
      FUN_?();
    }
    *(undefined8 *)(lVar7 + 0x10) = uStack_3;
    *(undefined4 *)(lVar7 + 0x18) = uStack_4;
    (*(pUVar1->fields)._._.invoke_impl)
              ((pUVar1->fields)._._.method_code,this,lVar7,(pUVar1->fields)._._.method);
  }
  return;
}


/* Void ReceiveInteractionPackage(InteractionData, MVPlayer) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_ReceiveInteractionPackage
               (MVWorldObjectClient *this,InteractionData *interactionStruct,MVPlayer *p,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarPackages);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_InteractionPackage>__get_Item_MV__WorldObject__InteractionPackageType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__InteractionData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__AvatarPackages->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__AvatarPackages);
  }
  this_00 = TypeInfo__AvatarPackages->static_fields->packages;
  if (*(int *)&(TypeInfo__MV__WorldObject__InteractionData->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (this_00 != (Dictionary_2_MV_WorldObject_InteractionPackageType_InteractionPackage_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
             Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                       ((Dictionary_2_System_ByteEnum_System_Object_ *)this_00,
                        (uint)interactionStruct->interactionType,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::InteractionPackageType,_InteractionPackage>__get_Item_MV__WorldObject__InteractionPackageType_
                       );
    if (pOVar1 != (Object *)0x0) {
      uStack_2._0_1_ = interactionStruct->interactionType;
      uStack_2._1_1_ = interactionStruct->playerKilledByType;
      uStack_2._2_2_ = *(undefined2 *)&interactionStruct->field_0x12;
      fStack_3 = interactionStruct->damage;
      fStack_4 = (interactionStruct->impulse).x;
      fStack_5 = (interactionStruct->impulse).y;
      fStack_6 = (interactionStruct->impulse).z;
      (*(code *)pOVar1->klass[1]._0.image)(pOVar1,this,p,&fStack_3,pOVar1->klass[1]._0.gc_desc);
      return;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void ReceivePackage(MVPlayer, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_ReceivePackage
               (MVWorldObjectClient *this,MVPlayer *p,
               Dictionary_2_System_Object_System_Object_ *package,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__PackageType);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Unknown_package_type);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (package == (Dictionary_2_System_Object_System_Object_ *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uStack_2 = 0;
  uStack_3 = 0;
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&pDStack_5 >> 0xc);
    puVar6 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar7 = *puVar6;
      LOCK();
      uVar8 = *puVar6;
      if (uVar7 == uVar8) {
        *puVar6 = uVar7 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar7 != uVar8);
  }
  uStack_9 = (ulonglong)(uint)(package->fields)._version;
  uStack_10 = 2;
  DStack_11._version = (undefined4)uStack_9;
  DStack_11._index = uStack_9._4_4_;
  DStack_11._current.key = (Object *)0x0;
  DStack_11._current.value = (Object *)0x0;
  DStack_11._getEnumeratorRetType = 2;
  DStack_11._36_4_ = 0;
  uStack_12 = 0;
  pDStack_13 = &DStack_11;
  pDStack_5 = package;
  DStack_11._dictionary = package;
  while( true ) {
    bVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[System
            ::Object,System::Object]::
            Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                      (&DStack_11,
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                      );
    pOVar15 = DStack_11._current.value;
    pBVar16 = TypeInfo__System__Byte;
    if (bVar14 == 0) {
      return;
    }
    if (DStack_11._current.key == (Object *)0x0) goto code_?;
    pOVar17 = DStack_11._current.key;
    if (((DStack_11._current.key)->klass->_0).element_class !=
        (TypeInfo__MV__WorldObject__PackageType->_0).element_class) break;
    if (*(char *)&DStack_11._current.key[1].klass == '\0') {
      byteArray = (Byte__Array *)0x0;
      pDStack_18 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      uStack_19 = 0;
      uStack_20._0_1_ = 0;
      uStack_20._1_1_ = 0;
      uStack_20._2_2_ = 0;
      if ((DStack_11._current.value != (Object *)0x0) &&
         (byteArray = (Byte__Array *)FUN_?(DStack_11._current.value,TypeInfo__System__Byte),
         byteArray == (Byte__Array *)0x0)) {
        FUN_?(pOVar15,pBVar16);
        break;
      }
      MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData__ctor_7
                ((InteractionData *)&pDStack_18,byteArray,(MethodInfo *)0x0);
      pDStack_5 = pDStack_18;
      uStack_9 = uStack_19;
      uStack_2 = CONCAT44(uStack_2._4_4_,uStack_20);
      (*(this->klass->vtable).ReceiveInteractionPackage.methodPtr)
                (this,&pDStack_5,p,(this->klass->vtable).ReceiveInteractionPackage.method);
    }
    else {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Unknown_package_type,(MethodInfo *)0x0);
    }
  }
  FUN_?(pOVar17);
code_?:
  FUN_?();
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void RemovePreviewBox() */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_RemovePreviewBox
               (MVWorldObjectClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  PreviewBox_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<PreviewBox>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).gameObject;
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
  if (pGVar1 != (GameObject *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pMVar2 = PreviewBox_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<PreviewBox>__;
    if ((pGVar1->fields)._.m_CachedPtr != (void *)0x0) {
      pGVar1 = (this->fields).gameObject;
      if (pGVar1 == (GameObject *)0x0) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((PreviewBox_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<PreviewBox>__->
          field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?(
                     PreviewBox_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<PreviewBox>__
                     );
      }
      this_00 = (Component *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                GameObject_GetComponentInChildren_3
                          (pGVar1,0,((pMVar2->field7_0x38).rgctx_data)->method);
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
      if (this_00 != (Component *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((this_00->fields)._.m_CachedPtr != (void *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Object);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             (this_00,(MethodInfo *)0x0);
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
                    ((Object_1 *)pGVar1,0.0,(MethodInfo *)0x0);
        }
      }
    }
  }
  return;
}


/* Void RemoveSelectionBox() */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_RemoveSelectionBox
               (MVWorldObjectClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  SelectionBox_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<SelectionBox>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).gameObject;
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
  if (pGVar1 != (GameObject *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pMVar2 = 
    SelectionBox_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<SelectionBox>__;
    if ((pGVar1->fields)._.m_CachedPtr != (void *)0x0) {
      pGVar1 = (this->fields).gameObject;
      if (pGVar1 == (GameObject *)0x0) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((SelectionBox_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<SelectionBox>__
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?(
                     SelectionBox_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<SelectionBox>__
                     );
      }
      pOVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
               GameObject_GetComponentInChildren_3
                         (pGVar1,0,((pMVar2->field7_0x38).rgctx_data)->method);
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
      if (pOVar4 != (Object *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pcVar3 = pcRam_?;
        if (pOVar4[1].klass != (Object__Class *)0x0) {
          *(undefined4 *)&pOVar4[3].klass = 0x3f4ccccd;
          *(undefined1 *)&pOVar4[3].monitor = 1;
          pcVar5 = pcRam_?;
          if ((pcVar3 == (code *)0x0) &&
             (pcVar3 = (code *)FUN_?(&UNK_?), pcVar5 = pcVar3, pcVar3 == (code *)0x0
             )) {
            uVar6 = func_?(&UNK_?);
            FUN_?(uVar6,0);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pcRam_? = pcVar5;
          uVar7 = (*pcVar3)();
          *(undefined4 *)((longlong)&pOVar4[3].klass + 4) = uVar7;
        }
      }
    }
  }
  return;
}


/* Void ResetRotation() */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_ResetRotation
               (MVWorldObjectClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RotationChangedEventArgs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  puVar1 = (undefined8 *)
           (*(this->klass->vtable).get_WorldPivot.methodPtr)
                     (&uStack_2,this,(this->klass->vtable).get_WorldPivot.method);
  pTVar3 = (this->fields).transform;
  uVar4 = *puVar1;
  fVar5 = *(float *)(puVar1 + 1);
  if (pTVar3 != (Transform *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_6 = 0;
    uStack_7 = 0;
    pvVar8 = (pTVar3->fields)._._.m_CachedPtr;
    if (pvVar8 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar3,(MethodInfo *)0x0);
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pcVar9 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pcRam_? = pcVar9;
    (*pcRam_?)(pvVar8);
    pTVar3 = (this->fields).transform;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Quaternion);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pQVar10 = TypeInfo__UnityEngine__Quaternion->static_fields;
    if (pTVar3 == (Transform *)0x0) {
      FUN_?();
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    uStack_2._0_4_ = (pQVar10->identityQuaternion).x;
    uStack_2._4_4_ = (pQVar10->identityQuaternion).y;
    fStack_11 = (pQVar10->identityQuaternion).z;
    fStack_12 = (pQVar10->identityQuaternion).w;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar8 = (pTVar3->fields)._._.m_CachedPtr;
    if (pvVar8 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar3,(MethodInfo *)0x0);
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pcVar9 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pcRam_? = pcVar9;
    (*pcRam_?)(pvVar8,&uStack_2);
    puVar1 = (undefined8 *)
             (*(this->klass->vtable).get_WorldPivot.methodPtr)
                       (&uStack_2,this,(this->klass->vtable).get_WorldPivot.method);
    fStack_13 = (float)uVar4;
    fStack_14 = (float)((ulonglong)uVar4 >> 0x20);
    uVar4 = *puVar1;
    fVar15 = *(float *)(puVar1 + 1);
    pTVar3 = (this->fields).transform;
    if (pTVar3 != (Transform *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar8 = (pTVar3->fields)._._.m_CachedPtr;
      if (pvVar8 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar3,(MethodInfo *)0x0);
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pcVar9 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pcRam_? = pcVar9;
      (*pcRam_?)(pvVar8);
      pTVar3 = (this->fields).transform;
      fVar5 = (fVar5 - fVar15) + 0.0;
      if (pTVar3 == (Transform *)0x0) {
        FUN_?();
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uStack_2 = CONCAT44((fStack_14 - (float)((ulonglong)uVar4 >> 0x20)) + 0.0,
                           (fStack_13 - (float)uVar4) + 0.0);
      fStack_11 = fVar5;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar8 = (pTVar3->fields)._._.m_CachedPtr;
      if (pvVar8 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar3,(MethodInfo *)0x0);
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pcVar9 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pcRam_? = pcVar9;
      (*pcRam_?)(pvVar8,&uStack_2);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Quaternion);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pQVar10 = TypeInfo__UnityEngine__Quaternion->static_fields;
      if ((uStack_6._4_4_ * (pQVar10->identityQuaternion).y +
           (float)uStack_6 * (pQVar10->identityQuaternion).x +
           (float)uStack_7 * (pQVar10->identityQuaternion).z +
           uStack_7._4_4_ * (pQVar10->identityQuaternion).w <= _UNK_?) &&
         ((this->fields).RotationChanged !=
          (UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs_ *)0x0)) {
        pUVar16 = (this->fields).RotationChanged;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Quaternion);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        uVar4 = *(undefined8 *)
                  &TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion;
        uVar17 = *(undefined8 *)
                 &(TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion).z;
        lVar18 = FUN_?(TypeInfo__RotationChangedEventArgs);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__EventArgs);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__System__EventArgs->_1).field_0x1c == 0) {
          FUN_?();
        }
        *(undefined8 *)(lVar18 + 0x20) = uVar4;
        *(undefined8 *)(lVar18 + 0x28) = uVar17;
        (*(pUVar16->fields)._._.invoke_impl)
                  ((pUVar16->fields)._._.method_code,this,lVar18,(pUVar16->fields)._._.method);
      }
      return;
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void RotateAround(Vector3, Vector3, Single) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_RotateAround
               (MVWorldObjectClient *this,Vector3 *pivot,Vector3 *axis,float angle,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RotationChangedEventArgs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).transform;
  if (pTVar1 != (Transform *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_2 = 0;
    uStack_3 = 0;
    pvVar4 = (pTVar1->fields)._._.m_CachedPtr;
    if (pvVar4 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcRam_? = pcVar5;
    (*pcRam_?)(pvVar4,&uStack_2);
    pTVar1 = (this->fields).transform;
    if (pTVar1 != (Transform *)0x0) {
      VStack_7.x = axis->x;
      VStack_7.y = axis->y;
      VStack_7.z = axis->z;
      auStack_8._0_4_ = pivot->x;
      auStack_8._4_4_ = pivot->y;
      stack0xffffffffffffffd0 = CONCAT44(fStack_9,pivot->z);
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_RotateAround
                (pTVar1,(Vector3 *)auStack_8,&VStack_7,angle,(MethodInfo *)0x0);
      pTVar1 = (this->fields).transform;
      if (pTVar1 != (Transform *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        auStack_8._0_4_ = 0.0;
        auStack_8._4_4_ = 0.0;
        stack0xffffffffffffffd0 = 0;
        pvVar4 = (pTVar1->fields)._._.m_CachedPtr;
        if (pvVar4 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pcVar5 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
          uVar6 = func_?(&UNK_?);
          FUN_?(uVar6,0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pcRam_? = pcVar5;
        (*pcRam_?)(pvVar4,auStack_8);
        bVar10 = _UNK_? <
                uStack_2._4_4_ * (float)auStack_8._4_4_ +
                (float)uStack_2 * (float)auStack_8._0_4_ +
                (float)uStack_3 * (float)auStack_8._8_4_ + uStack_3._4_4_ * fStack_9;
        if ((!bVar10) &&
           ((this->fields).RotationChanged !=
            (UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs_ *)0x0)) {
          pUVar11 = (this->fields).RotationChanged;
          lVar12 = FUN_?(TypeInfo__RotationChangedEventArgs);
          if ((bool)cRam_? == bVar10) {
            FUN_?(&TypeInfo__System__EventArgs);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__System__EventArgs->_1).field_0x1c == 0) {
            FUN_?();
          }
          *(undefined4 *)(lVar12 + 0x20) = auStack_8._0_4_;
          *(undefined4 *)(lVar12 + 0x24) = auStack_8._4_4_;
          *(undefined4 *)(lVar12 + 0x28) = auStack_8._8_4_;
          *(float *)(lVar12 + 0x2c) = fStack_9;
          (*(pUVar11->fields)._._.invoke_impl)
                    ((pUVar11->fields)._._.method_code,this,lVar12,(pUVar11->fields)._._.method);
        }
        return;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void RotateAroundLocal(Vector3, RotationMode, Single) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_RotateAroundLocal
               (MVWorldObjectClient *this,Vector3 *pivot,RotationMode__Enum rotationMode,float angle
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RotationChangedEventArgs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).transform;
  if (pTVar1 != (Transform *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_2 = 0;
    uStack_3 = 0;
    pvVar4 = (pTVar1->fields)._._.m_CachedPtr;
    if (pvVar4 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcRam_? = pcVar5;
    (*pcRam_?)(pvVar4,&uStack_2);
    if (rotationMode == RotationMode__Enum_X) {
      pTVar1 = (this->fields).transform;
      if (pTVar1 == (Transform *)0x0) goto code_?;
      pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                         ((Vector3 *)auStack_8,pTVar1,(MethodInfo *)0x0);
    }
    else if ((rotationMode == RotationMode__Enum_Y) || (rotationMode != RotationMode__Enum_Z)) {
      pTVar1 = (this->fields).transform;
      if (pTVar1 == (Transform *)0x0) goto code_?;
      pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                         ((Vector3 *)auStack_8,pTVar1,(MethodInfo *)0x0);
    }
    else {
      pTVar1 = (this->fields).transform;
      if (pTVar1 == (Transform *)0x0) goto code_?;
      pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                         ((Vector3 *)auStack_8,pTVar1,(MethodInfo *)0x0);
    }
    pTVar1 = (this->fields).transform;
    uVar6._0_4_ = pVVar7->x;
    uVar6._4_4_ = pVVar7->y;
    if (pTVar1 != (Transform *)0x0) {
      auStack_8._0_4_ = pivot->x;
      auStack_8._4_4_ = pivot->y;
      stack0xffffffffffffffd0 = CONCAT44(fStack_9,pivot->z);
      VStack_10._0_8_ = uVar6;
      VStack_10.z = pVVar7->z;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_RotateAround
                (pTVar1,(Vector3 *)auStack_8,&VStack_10,angle,(MethodInfo *)0x0);
      pTVar1 = (this->fields).transform;
      if (pTVar1 != (Transform *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        auStack_8._0_4_ = 0.0;
        auStack_8._4_4_ = 0.0;
        stack0xffffffffffffffd0 = 0;
        pvVar4 = (pTVar1->fields)._._.m_CachedPtr;
        if (pvVar4 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pcVar5 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
          uVar6 = func_?(&UNK_?);
          FUN_?(uVar6,0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pcRam_? = pcVar5;
        (*pcRam_?)(pvVar4,auStack_8);
        bVar11 = _UNK_? <
                uStack_2._4_4_ * (float)auStack_8._4_4_ +
                (float)uStack_2 * (float)auStack_8._0_4_ +
                (float)uStack_3 * (float)auStack_8._8_4_ + uStack_3._4_4_ * fStack_9;
        if ((!bVar11) &&
           ((this->fields).RotationChanged !=
            (UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs_ *)0x0)) {
          pUVar12 = (this->fields).RotationChanged;
          lVar13 = FUN_?(TypeInfo__RotationChangedEventArgs);
          if ((bool)cRam_? == bVar11) {
            FUN_?(&TypeInfo__System__EventArgs);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__System__EventArgs->_1).field_0x1c == 0) {
            FUN_?();
          }
          *(undefined4 *)(lVar13 + 0x20) = auStack_8._0_4_;
          *(undefined4 *)(lVar13 + 0x24) = auStack_8._4_4_;
          *(undefined4 *)(lVar13 + 0x28) = auStack_8._8_4_;
          *(float *)(lVar13 + 0x2c) = fStack_9;
          (*(pUVar12->fields)._._.invoke_impl)
                    ((pUVar12->fields)._._.method_code,this,lVar13,(pUVar12->fields)._._.method);
        }
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void RuntimeDataUpdate(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_RuntimeDataUpdate
               (MVWorldObjectClient *this,Dictionary_2_System_Object_System_Object_ *dataDelta,
               MethodInfo *method)

{
  this_00 = (this->fields).runtimeDataVariables;
  if (this_00 != (MVRuntimeDataVariables *)0x0) {
    MVRuntimeDataVariables::MVRuntimeDataVariables_Receive(this_00,dataDelta,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(this->klass->vtable).OnRunTimeDataUpdate.methodPtr)
              (this,(this->klass->vtable).OnRunTimeDataUpdate.method);
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SendPackage(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_SendPackage
               (MVWorldObjectClient *this,Dictionary_2_System_Object_System_Object_ *package,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
     (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) {
    pMVar3 = (pMVar2->fields).operationRequests;
    iVar4 = (this->fields)._.id;
    if (pMVar3 != (MVNetworkGame_OperationRequests *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_00 = (Dictionary_2_System_Byte_System_Object_ *)
                FUN_?(
                             TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                             );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object___ctor
                (this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                );
      aiStackX_20[0] = iVar4;
      value = (Object *)FUN_?(uRam_?,aiStackX_20);
      if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
        uVar5 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
        method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                    ->klass->rgctx_data[0x22].method;
        uVar6 = (undefined7)((ulonglong)method_00 >> 8);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object__TryInsert
                  (this_00,0x17,value,(InsertionBehavior__Enum)uVar5,method_00);
        uVar7 = CONCAT71(uVar6,0x56);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object__TryInsert
                  (this_00,0x56,(Object *)package,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar5 >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   ->klass->rgctx_data[0x22].method);
        pPVar8 = (pMVar3->fields).peer;
        if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
        }
        if (pPVar8 != (PhotonPeer *)0x0) {
          (*(pPVar8->klass->vtable).SendOperation.methodPtr)
                    (pPVar8,CONCAT71((int7)((ulonglong)uVar7 >> 8),0x1c),this_00,
                     TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                     (pPVar8->klass->vtable).SendOperation.method);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void SetName() */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_SetName
               (MVWorldObjectClient *this,MethodInfo *method)

{
  obj = (this->fields).gameObject;
  lVar1 = (*(this->klass->vtable).ToString.methodPtr)(this,(this->klass->vtable).ToString.method);
  if (obj == (GameObject *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Object>_UnityEngine__Object_
                  ,lVar1,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__GetPinnableReference__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__get_Length__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  alStackX_8[0] = 0;
  lStack_3 = 0;
  uStack_4 = 0;
  uStack_5 = 0;
  plStack_6 = alStackX_8;
  if (obj != (GameObject *)0x0) {
    pvVar7 = (obj->fields)._.m_CachedPtr;
    if (pvVar7 != (void *)0x0) {
      if (lVar1 != 0) {
        if (*(int *)(lVar1 + 0x10) == 0) {
          lStack_3 = 1;
          uStack_4 = 0;
        }
        else {
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__ReadOnlySpan<wchar_t>__ReadOnlySpan_System__Char___int_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          alStackX_8[0] = lVar1 + 0x14;
          if (*(int *)(lVar1 + 0x10) == 0) {
            alStackX_8[0] = 0;
          }
          uStack_4 = CONCAT44(uStack_4._4_4_,*(int *)(lVar1 + 0x10));
          lStack_3 = alStackX_8[0];
        }
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? != (code *)0x0) ||
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 != (code *)0x0)) {
        pcRam_? = pcVar2;
        (*pcRam_?)(pvVar7,&lStack_3);
        return;
      }
      uVar8 = func_?(&UNK_?);
      FUN_?(uVar8);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
  }
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetNetworkObject(Boolean) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_SetNetworkObject
               (MVWorldObjectClient *this,bool local,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__MVCubeModelFineGrainedTerrain);
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__MVCubeModelPrototypeTerrain);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVNetworkReporter);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Problem__network_reporter_is_add);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(&(this->klass->_0).byval_arg);
  pIVar2 = TypeRef__MVCubeModelFineGrainedTerrain;
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  lVar3 = 0;
  lVar4 = lVar3;
  if (pIVar2 != (Il2CppType *)0x0) {
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    lVar4 = FUN_?(pIVar2,1);
    lVar4 = FUN_?(lVar4 + 0x20);
  }
  if (lVar1 != lVar4) {
    lVar1 = FUN_?(&(this->klass->_0).byval_arg);
    pIVar2 = TypeRef__MVCubeModelPrototypeTerrain;
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    if (pIVar2 != (Il2CppType *)0x0) {
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      FUN_?(pIVar2,1);
      lVar3 = FUN_?();
    }
    if ((lVar1 != lVar3) && (local != 0)) {
      pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar5 != (MVNetworkGame *)0x0) &&
         (pTVar6 = (pMVar5->fields).transformNetworkManager,
         pTVar6 != (TransformNetworkManager *)0x0)) {
        pMVar7 = TransformNetworkManager::TransformNetworkManager_GetNetworkObject
                           (pTVar6,(this->fields)._.id,(MethodInfo *)0x0);
        if (pMVar7 != (MVNetworkObject *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                    ((Object *)StringLiteral_Problem__network_reporter_is_add,(MethodInfo *)0x0);
          return;
        }
        pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar5 != (MVNetworkGame *)0x0) {
          pTVar6 = (pMVar5->fields).transformNetworkManager;
          woID = (this->fields)._.id;
          this_01 = (MVNetworkReporter *)FUN_?(TypeInfo__MVNetworkReporter);
          MVNetworkReporter::MVNetworkReporter__ctor(this_01,this,(MethodInfo *)0x0);
          if (pTVar6 != (TransformNetworkManager *)0x0) {
            TransformNetworkManager::TransformNetworkManager_AddReporter
                      (pTVar6,woID,this_01,(MethodInfo *)0x0);
            pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if ((pMVar5 != (MVNetworkGame *)0x0) &&
               (this_00 = (pMVar5->fields).runtimeVariableNetworkManager,
               this_00 != (RuntimeVariableNetworkManager *)0x0)) {
              RuntimeVariableNetworkManager::RuntimeVariableNetworkManager_AddRuntimeDataVariables
                        (this_00,(this->fields)._.id,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      FUN_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  return;
}


/* Void SetWorldObjectToPurchased() */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_SetWorldObjectToPurchased
               (MVWorldObjectClient *this,MethodInfo *method)

{
  pMVar1 = this->klass;
  piVar2 = &(this->fields).interactionFlags;
  *piVar2 = *piVar2 & 0xfffffffffffdffff;
  (this->fields)._.previewOwnerProfileId = 0;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(pMVar1->vtable).RemovePreviewBox.methodPtr)(this,(pMVar1->vtable).RemovePreviewBox.method);
  return;
}


/* Void SetupBusinessLogic() */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_SetupBusinessLogic
               (MVWorldObjectClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
     (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) {
    pMVar3 = (pMVar2->fields).itemBusinessLogic;
    key = (this->fields)._.itemId;
    if (pMVar3 != (MVItemBusinessLogic *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__ContainsKey_int_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__get_Item_int_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pDVar4 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(pMVar3->fields).items;
      if (pDVar4 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
        iVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
                Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                          (pDVar4,key,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__ContainsKey_int_
                           ->klass->rgctx_data[0x21].method);
        pDVar4 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(pMVar3->fields).items;
        if (pDVar4 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
          if (iVar5 < 0) {
            iVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32,UnityEngine::Vector3]::
                    Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                              (pDVar4,key,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__ContainsKey_int_
                               ->klass->rgctx_data[0x21].method);
            if (iVar5 < 0) {
              return;
            }
            pDVar4 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(pMVar3->fields).items;
            if (pDVar4 == (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0)
            goto code_?;
          }
          pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                   Object]::Dictionary_2_System_Int32_System_Object__get_Item
                             ((Dictionary_2_System_Int32_System_Object_ *)pDVar4,key,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__get_Item_int_
                             );
          if (pOVar6 != (Object *)0x0) {
            if (*(char *)((longlong)&pOVar6[4].klass + 1) != '\0') {
              piVar7 = &(this->fields).interactionFlags;
              *piVar7 = *piVar7 | 0x4000;
            }
            return;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void SetupTierInventory() */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_SetupTierInventory
               (MVWorldObjectClient *this,MethodInfo *method)

{
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(this->klass->vtable).HideConnectors.methodPtr)
            (this,(this->klass->vtable).HideConnectors.method);
  return;
}


/* Void ShowConnectors() */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_ShowConnectors
               (MVWorldObjectClient *this,MethodInfo *method)

{
  cVar1 = (*(this->klass->vtable).get_HasInputConnector.methodPtr)
                    (this,(this->klass->vtable).get_HasInputConnector.method);
  if (cVar1 != '\0') {
    pGVar2 = (this->fields).inputConnectorObject;
    if (pGVar2 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,1,(MethodInfo *)0x0);
  }
  cVar1 = (*(this->klass->vtable).get_HasOutputConnector.methodPtr)
                    (this,(this->klass->vtable).get_HasOutputConnector.method);
  if (cVar1 != '\0') {
    pGVar2 = (this->fields).outputConnectorObject;
    if (pGVar2 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,1,(MethodInfo *)0x0);
  }
  cVar1 = (*(this->klass->vtable).get_HasObjectConnector.methodPtr)
                    (this,(this->klass->vtable).get_HasObjectConnector.method);
  if (cVar1 == '\0') {
    return;
  }
  pGVar2 = (this->fields).objectConnectorObject;
  if (pGVar2 != (GameObject *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                    ,1,0);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pGVar2 == (GameObject *)0x0) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pvVar4 = (pGVar2->fields)._.m_CachedPtr;
    if (pvVar4 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar2,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam_?)(pvVar4,1);
    return;
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* String ToString() */

String * Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_ToString
                   (MVWorldObjectClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__String);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__group_id_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__id_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__item_id_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__System__String,7);
  plVar2 = (longlong *)FUN_?(&(this->klass->_0).byval_arg);
  if ((plVar2 == (longlong *)0x0) ||
     (uVar3 = (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170)), lVar1 == 0))
  {
    FUN_?();
    pcVar4 = (code *)swi(3);
    pSVar5 = (String *)(*pcVar4)();
    return pSVar5;
  }
  FUN_?(lVar1,0,uVar3);
  FUN_?(lVar1,1,StringLiteral__id_);
  pSVar5 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&this->fields,(MethodInfo *)0x0);
  FUN_?(lVar1,2,pSVar5);
  FUN_?(lVar1,3,StringLiteral__group_id_);
  pSVar5 = mscorlib.dll::System::Int32::Int32_ToString
                     ((Int32 *)&(this->fields)._.groupId,(MethodInfo *)0x0);
  FUN_?(lVar1,4,pSVar5);
  FUN_?(lVar1,5,StringLiteral__item_id_);
  mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&(this->fields)._.itemId,(MethodInfo *)0x0);
  FUN_?(lVar1,6);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__String,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (lVar1 == 0) {
    uVar3 = func_?(&TypeInfo__System__ArgumentNullException);
    this_00 = (ArgumentNullException *)func_?(uVar3);
    pSVar5 = (String *)func_?(&StringLiteral_values);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this_00,pSVar5,(MethodInfo *)0x0);
    uVar3 = func_?(&MethodInfo__System__String__Concat_System__String____);
    FUN_?(this_00,uVar3);
    pcVar4 = (code *)swi(3);
    pSVar5 = (String *)(*pcVar4)();
    return pSVar5;
  }
  if (*(int *)(lVar1 + 0x18) < 2) {
    if (*(longlong *)(lVar1 + 0x18) == 0) {
      return (String *)**(undefined8 **)(lRam_? + 0xb8);
    }
    if (*(int *)(lVar1 + 0x18) == 0) {
code_?:
      FUN_?();
      pcVar4 = (code *)swi(3);
      pSVar5 = (String *)(*pcVar4)();
      return pSVar5;
    }
    if (*(String **)(lVar1 + 0x20) != (String *)0x0) {
      return *(String **)(lVar1 + 0x20);
    }
  }
  else {
    plVar2 = (longlong *)(lVar1 + 0x20);
    values = (String__Array *)0x0;
    pSVar6 = values;
    pSVar7 = values;
    while (uVar8 = (uint)pSVar6, (int)uVar8 < (int)*(uint *)(lVar1 + 0x18)) {
      if (*(uint *)(lVar1 + 0x18) <= uVar8) goto code_?;
      if (*plVar2 != 0) {
        pSVar7 = (String__Array *)
                  ((longlong)pSVar7->vector + (longlong)*(int *)(*plVar2 + 0x10) + -0x20);
      }
      plVar2 = plVar2 + 1;
      pSVar6 = (String__Array *)(ulonglong)(uVar8 + 1);
    }
    if (0x7fffffff < (longlong)pSVar7) {
      uVar3 = func_?(&TypeInfo__System__OutOfMemoryException);
      this_02 = (OutOfMemoryException *)func_?(uVar3);
      mscorlib.dll::System::OutOfMemoryException::OutOfMemoryException__ctor
                (this_02,(MethodInfo *)0x0);
      uVar3 = func_?(&MethodInfo__System__String__Concat_System__String____);
      FUN_?(this_02,uVar3);
      pcVar4 = (code *)swi(3);
      pSVar5 = (String *)(*pcVar4)();
      return pSVar5;
    }
    iVar9 = (int)pSVar7;
    if (iVar9 != 0) {
      pSVar5 = (String *)FUN_?((ulonglong)pSVar7 & 0xffffffff);
      plVar2 = (longlong *)(lVar1 + 0x20);
      pSVar6 = values;
      pSVar7 = values;
code_?:
      do {
        iVar10 = (int)pSVar6;
        uVar8 = (uint)pSVar7;
        if (*(int *)(lVar1 + 0x18) <= (int)uVar8) {
code_?:
          if (iVar10 == iVar9) {
            return pSVar5;
          }
          lVar1 = FUN_?(lVar1);
          pSVar11 = TypeInfo__System__String;
          if ((lVar1 != 0) &&
             (values = (String__Array *)FUN_?(lVar1), values == (String__Array *)0x0)) {
            FUN_?(lVar1,pSVar11);
            pcVar4 = (code *)swi(3);
            pSVar5 = (String *)(*pcVar4)();
            return pSVar5;
          }
          pSVar5 = mscorlib.dll::System::String::String_Concat_7(values,(MethodInfo *)0x0);
          return pSVar5;
        }
        if (*(uint *)(lVar1 + 0x18) <= uVar8) goto code_?;
        lVar12 = *plVar2;
        if ((lVar12 != 0) && (*(int *)(lVar12 + 0x10) != 0)) {
          iVar13 = *(int *)(lVar12 + 0x10);
          if (iVar9 - iVar10 < iVar13) {
            iVar10 = -1;
            goto code_?;
          }
          if (pSVar5 == (String *)0x0) {
            FUN_?();
            pcVar4 = (code *)swi(3);
            pSVar5 = (String *)(*pcVar4)();
            return pSVar5;
          }
          if ((pSVar5->fields)._stringLength - iVar10 < iVar13) {
            uVar3 = func_?(&TypeInfo__System__IndexOutOfRangeException);
            this_01 = (IndexOutOfRangeException *)func_?(uVar3);
            mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
                      (this_01,(MethodInfo *)0x0);
            uVar3 = func_?(&
                                        MethodInfo__System__String__FillStringChecked_MethodInfo__System__String__int__MethodInfo__System__String_
                                       );
            FUN_?(this_01,uVar3);
            pcVar4 = (code *)swi(3);
            pSVar5 = (String *)(*pcVar4)();
            return pSVar5;
          }
          src = (uint8_t *)(lVar12 + 0x14);
          dest = &(pSVar5->fields)._firstChar + iVar10;
          uVar14 = (ulonglong)(uint)(iVar13 * 2);
          if ((uVar14 <= (ulonglong)((longlong)dest - (longlong)src)) &&
             (uVar14 <= (ulonglong)((longlong)src - (longlong)dest))) {
            mscorlib.dll::System::Buffer::Buffer_Memcpy_1
                      ((uint8_t *)dest,src,iVar13 * 2,(MethodInfo *)0x0);
            pSVar6 = (String__Array *)(ulonglong)(uint)(iVar10 + iVar13);
            pSVar7 = (String__Array *)(ulonglong)(uVar8 + 1);
            plVar2 = plVar2 + 1;
            goto code_?;
          }
          FUN_?(dest,src,uVar14);
          pSVar6 = (String__Array *)(ulonglong)(uint)(iVar10 + iVar13);
        }
        pSVar7 = (String__Array *)(ulonglong)(uVar8 + 1);
        plVar2 = plVar2 + 1;
      } while( true );
    }
  }
  return (String *)**(undefined8 **)(lRam_? + 0xb8);
}


/* Void UnSetupTierInventory() */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_UnSetupTierInventory
               (MVWorldObjectClient *this,MethodInfo *method)

{
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(this->klass->vtable).ShowConnectors.methodPtr)
            (this,(this->klass->vtable).ShowConnectors.method);
  return;
}


/* MVWorldObjectClient() */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVWorldObjectClient);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__MVWorldObjectClient->static_fields->woShadowCastersCount = 0;
  TypeInfo__MVWorldObjectClient->static_fields->woMaxShadowCasters = 0x14;
  return;
}


/* MVWorldObjectClient(Dictionary`2[System.Object,System.Object], GameObject,
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient__ctor
               (MVWorldObjectClient *this,Dictionary_2_System_Object_System_Object_ *data,
               GameObject *prefabObject,Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Collider>__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).previewLayerMask = 1;
  MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject__ctor
            ((MVWorldObject *)this,(MethodInfo *)0x0);
  pMVar1 = MVWorldObjectClient_GetTransformData
                      ((MVWorldObjectClient_TransformData *)auStack_2,this,data,(MethodInfo *)0x0);
  fVar3 = (pMVar1->position).x;
  fVar4 = (pMVar1->position).y;
  fVar5 = (pMVar1->position).z;
  fStack_6 = (pMVar1->rotation).x;
  uStack_7._0_4_ = (pMVar1->rotation).y;
  uStack_7._4_4_ = (pMVar1->rotation).z;
  fStack_8 = (pMVar1->rotation).w;
  fStack_9 = fVar3;
  fStack_10 = fVar4;
  fStack_11 = fVar5;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Vector3__UnityEngine__Quaternion_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Prefab_object_is_null_);
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
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (prefabObject == (GameObject *)0x0) {
code_?:
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_Prefab_object_is_null_,(MethodInfo *)0x0);
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((prefabObject->fields)._.m_CachedPtr == (void *)0x0) goto code_?;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  fStack_9 = fStack_6;
  fStack_10 = (float)(undefined4)uStack_7;
  fStack_11 = (float)uStack_7._4_4_;
  fStack_6 = fStack_8;
  fStack_12 = fVar3;
  fStack_13 = fVar4;
  fStack_14 = fVar5;
  pGVar15 = (GameObject *)FUN_?(prefabObject,&fStack_12,&fStack_9);
  if (pGVar15 == (GameObject *)0x0) {
code_?:
    FUN_?();
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  iVar17 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                     ((Object_1 *)pGVar15,(MethodInfo *)0x0);
  bVar18 = iRam_? != 0;
  (this->fields).gameObject = pGVar15;
  (this->fields).goId = iVar17;
  if (bVar18) {
    uVar19 = (uint)((ulonglong)&(this->fields).gameObject >> 0xc);
    lVar20 = (ulonglong)((uVar19 & 0x1fffff) >> 6) * 8;
    do {
      uVar21 = *(ulonglong *)(lVar20 + 0xADDR);
      puVar22 = (ulonglong *)(lVar20 + 0xADDR);
      LOCK();
      bVar18 = uVar21 == *puVar22;
      if (bVar18) {
        *puVar22 = uVar21 | 1L << (uVar19 & 0x3f);
      }
      UNLOCK();
    } while (!bVar18);
  }
  pGVar15 = (this->fields).gameObject;
  if (pGVar15 == (GameObject *)0x0) goto code_?;
  pTVar23 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                      (pGVar15,(MethodInfo *)0x0);
  bVar18 = iRam_? != 0;
  (this->fields).transform = pTVar23;
  if (bVar18) {
    uVar19 = (uint)((ulonglong)&(this->fields).transform >> 0xc);
    lVar20 = (ulonglong)((uVar19 & 0x1fffff) >> 6) * 8;
    do {
      uVar21 = *(ulonglong *)(lVar20 + 0xADDR);
      puVar22 = (ulonglong *)(lVar20 + 0xADDR);
      LOCK();
      bVar18 = uVar21 == *puVar22;
      if (bVar18) {
        *puVar22 = uVar21 | 1L << (uVar19 & 0x3f);
      }
      UNLOCK();
    } while (!bVar18);
  }
  pGVar15 = (this->fields).gameObject;
  if (pGVar15 == (GameObject *)0x0) goto code_?;
  pCVar24 = (Collider *)
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                      (pGVar15,
                       UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Collider>__
                      );
  bVar18 = iRam_? != 0;
  (this->fields).collider = pCVar24;
  if (bVar18) {
    uVar19 = (uint)((ulonglong)&(this->fields).collider >> 0xc);
    lVar20 = (ulonglong)((uVar19 & 0x1fffff) >> 6) * 8;
    do {
      uVar21 = *(ulonglong *)(lVar20 + 0xADDR);
      puVar22 = (ulonglong *)(lVar20 + 0xADDR);
      LOCK();
      bVar18 = uVar21 == *puVar22;
      if (bVar18) {
        *puVar22 = uVar21 | 1L << (uVar19 & 0x3f);
      }
      UNLOCK();
    } while (!bVar18);
  }
  if (cRam_? == '\0') {
    auStack_2._8_8_ = &UNK_?;
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                  ,data,worldObjects,0);
    LOCK();
    UNLOCK();
    auStack_2._8_8_ = &UNK_?;
    FUN_?(&TypeInfo__MVGroup);
    LOCK();
    UNLOCK();
    auStack_2._8_8_ = &UNK_?;
    FUN_?(&TypeInfo__MVRuntimeDataVariables);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  auStack_2._8_8_ = &UNK_?;
  MVWorldObjectClient_CreateConnectors(this,(MethodInfo *)0x0);
  auStack_2._8_8_ = &UNK_?;
  MVWorldObjectClient_ApplyData(this,data,(MethodInfo *)0x0);
  pGVar15 = (this->fields).gameObject;
  auStack_2._8_8_ = &UNK_?;
  name = (String *)
         (*(this->klass->vtable).ToString.methodPtr)(this,(this->klass->vtable).ToString.method);
  if (pGVar15 == (GameObject *)0x0) goto code_?;
  auStack_2._8_8_ = &UNK_?;
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_SetName
            ((Object_1 *)pGVar15,name,(MethodInfo *)0x0);
  auStack_2._8_8_ = &UNK_?;
  pMVar25 = (MVRuntimeDataVariables *)FUN_?(TypeInfo__MVRuntimeDataVariables);
  if (cRam_? == '\0') {
    auStack_2._8_8_ = &UNK_?;
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVRuntimeDataVariable>__List__);
    LOCK();
    UNLOCK();
    auStack_2._8_8_ = &UNK_?;
    FUN_?(&TypeInfo__System__Collections__Generic__List<MVRuntimeDataVariable>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar18 = iRam_? != 0;
  (pMVar25->fields).owner = this;
  if (bVar18) {
    uVar19 = (uint)((ulonglong)&pMVar25->fields >> 0xc);
    lVar20 = (ulonglong)((uVar19 & 0x1fffff) >> 6) * 8;
    do {
      uVar21 = *(ulonglong *)(lVar20 + 0xADDR);
      puVar22 = (ulonglong *)(lVar20 + 0xADDR);
      LOCK();
      bVar18 = uVar21 == *puVar22;
      if (bVar18) {
        *puVar22 = uVar21 | 1L << (uVar19 & 0x3f);
      }
      UNLOCK();
    } while (!bVar18);
  }
  auStack_2._8_8_ = &UNK_?;
  this_00 = (List_1_MVRuntimeDataVariable_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<MVRuntimeDataVariable>);
  auStack_2._8_8_ = &UNK_?;
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<MVRuntimeDataVariable>__List__);
  iVar26 = iRam_?;
  (pMVar25->fields).variables = this_00;
  if (iVar26 != 0) {
    uVar19 = (uint)((ulonglong)&(pMVar25->fields).variables >> 0xc);
    lVar20 = (ulonglong)((uVar19 & 0x1fffff) >> 6) * 8;
    do {
      uVar21 = *(ulonglong *)(lVar20 + 0xADDR);
      puVar22 = (ulonglong *)(lVar20 + 0xADDR);
      LOCK();
      bVar18 = uVar21 == *puVar22;
      if (bVar18) {
        *puVar22 = uVar21 | 1L << (uVar19 & 0x3f);
      }
      UNLOCK();
      iVar26 = iRam_?;
    } while (!bVar18);
  }
  (this->fields).runtimeDataVariables = pMVar25;
  if (iVar26 != 0) {
    uVar19 = (uint)((ulonglong)&(this->fields).runtimeDataVariables >> 0xc);
    lVar20 = (ulonglong)((uVar19 & 0x1fffff) >> 6) * 8;
    do {
      uVar21 = *(ulonglong *)(lVar20 + 0xADDR);
      puVar22 = (ulonglong *)(lVar20 + 0xADDR);
      LOCK();
      bVar18 = uVar21 == *puVar22;
      if (bVar18) {
        *puVar22 = uVar21 | 1L << (uVar19 & 0x3f);
      }
      UNLOCK();
    } while (!bVar18);
  }
  if ((this->fields)._.groupId != -1) {
    if (worldObjects == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0)
    goto code_?;
    auStack_2._8_8_ = &UNK_?;
    pMVar27 = (MVGroup *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__get_Item
                        ((Dictionary_2_System_Int32_System_Object_ *)worldObjects,
                         (this->fields)._.groupId,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                        );
    if (pMVar27 == (MVGroup *)0x0) {
      (this->fields).group = (MVGroup *)0x0;
    }
    else {
      bVar28 = (TypeInfo__MVGroup->_1).naturalAligment;
      if (((pMVar27->klass->_1).naturalAligment < bVar28) ||
         ((MVGroup__Class *)(pMVar27->klass->_1).typeHierarchy[(ulonglong)bVar28 - 1] !=
          TypeInfo__MVGroup)) {
        auStack_2._8_8_ = &UNK_?;
        FUN_?(pMVar27);
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      (this->fields).group = pMVar27;
      bVar28 = (TypeInfo__MVGroup->_1).naturalAligment;
      if (((pMVar27->klass->_1).naturalAligment < bVar28) ||
         ((MVGroup__Class *)(pMVar27->klass->_1).typeHierarchy[(ulonglong)bVar28 - 1] !=
          TypeInfo__MVGroup)) {
        auStack_2._8_8_ = &UNK_?;
        FUN_?(pMVar27);
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar19 = (uint)((ulonglong)&(this->fields).group >> 0xc);
      lVar20 = (ulonglong)((uVar19 & 0x1fffff) >> 6) * 8;
      do {
        uVar21 = *(ulonglong *)(lVar20 + 0xADDR);
        puVar22 = (ulonglong *)(lVar20 + 0xADDR);
        LOCK();
        bVar18 = uVar21 == *puVar22;
        if (bVar18) {
          *puVar22 = uVar21 | 1L << (uVar19 & 0x3f);
        }
        UNLOCK();
      } while (!bVar18);
    }
    pMVar27 = (this->fields).group;
    if (pMVar27 == (MVGroup *)0x0) goto code_?;
    auStack_2._8_8_ = &UNK_?;
    (*(pMVar27->klass->vtable).AddChild.methodPtr)
              (pMVar27,this,(pMVar27->klass->vtable).AddChild.method);
  }
  if (cRam_? == '\0') {
    auStack_2._8_8_ = &UNK_?;
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar29 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar29 != (MVGameControllerBase *)0x0) &&
     (pMVar30 = (pMVar29->fields).game, pMVar30 != (MVNetworkGame *)0x0)) {
    pMVar31 = (pMVar30->fields).itemBusinessLogic;
    iVar17 = (this->fields)._.itemId;
    if (pMVar31 != (MVItemBusinessLogic *)0x0) {
      if (cRam_? == '\0') {
        auStack_2._8_8_ = &UNK_?;
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__ContainsKey_int_
                     );
        LOCK();
        UNLOCK();
        auStack_2._8_8_ = &UNK_?;
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__get_Item_int_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pDVar32 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(pMVar31->fields).items;
      if (pDVar32 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
        auStack_2._8_8_ = &UNK_?;
        iVar33 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                 ::Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                           (pDVar32,iVar17,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__ContainsKey_int_
                            ->klass->rgctx_data[0x21].method);
        pDVar32 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(pMVar31->fields).items;
        if (pDVar32 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
          if (iVar33 < 0) {
            auStack_2._8_8_ = &UNK_?;
            iVar33 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Int32,UnityEngine::Vector3]::
                     Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                               (pDVar32,iVar17,
                                MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__ContainsKey_int_
                                ->klass->rgctx_data[0x21].method);
            if (iVar33 < 0) {
              return;
            }
            pDVar32 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(pMVar31->fields).items;
            if (pDVar32 == (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0)
            goto code_?;
          }
          auStack_2._8_8_ = &UNK_?;
          pOVar34 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Object]::Dictionary_2_System_Int32_System_Object__get_Item
                              ((Dictionary_2_System_Int32_System_Object_ *)pDVar32,iVar17,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__get_Item_int_
                              );
          if (pOVar34 != (Object *)0x0) {
            if (*(char *)((longlong)&pOVar34[4].klass + 1) != '\0') {
              piVar35 = &(this->fields).interactionFlags;
              *piVar35 = *piVar35 | 0x4000;
            }
            return;
          }
        }
      }
    }
  }
code_?:
  auStack_2._8_8_ = &UNK_?;
  FUN_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* MVWorldObjectClient(Dictionary`2[System.Object,System.Object], ObjectPrefab,
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient__ctor_1
               (MVWorldObjectClient *this,Dictionary_2_System_Object_System_Object_ *data,
               ObjectPrefab *prefabObject,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  (this->fields).previewLayerMask = 1;
  MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject__ctor
            ((MVWorldObject *)this,(MethodInfo *)0x0);
  pMVar1 = MVWorldObjectClient_GetTransformData(&MStack_2,this,data,(MethodInfo *)0x0);
  auStack_3._0_4_ = (pMVar1->position).x;
  auStack_3._4_4_ = (pMVar1->position).y;
  auStack_3._8_8_ = *(undefined8 *)&(pMVar1->position).z;
  auStack_3._16_4_ = (pMVar1->rotation).y;
  auStack_3._20_4_ = (pMVar1->rotation).z;
  auStack_3._24_4_ = (pMVar1->rotation).w;
  pOVar4 = MVWorldObjectClient_InstantiatePrefab_1
                      (this,prefabObject,(MVWorldObjectClient_TransformData *)auStack_3,
                       (MethodInfo *)0x0);
  bVar5 = iRam_? != 0;
  (this->fields).component = pOVar4;
  if (bVar5) {
    uVar6 = (uint)((ulonglong)&(this->fields).component >> 0xc);
    lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
      puVar9 = (ulonglong *)(lVar7 + 0xADDR);
      LOCK();
      bVar5 = uVar8 == *puVar9;
      if (bVar5) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  pOVar4 = (this->fields).component;
  if (pOVar4 == (ObjectPrefab *)0x0) {
code_?:
    FUN_?();
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)pOVar4,(MethodInfo *)0x0);
  iVar12 = iRam_?;
  (this->fields).gameObject = pGVar11;
  if (iVar12 != 0) {
    uVar6 = (uint)((ulonglong)&(this->fields).gameObject >> 0xc);
    lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
      puVar9 = (ulonglong *)(lVar7 + 0xADDR);
      LOCK();
      bVar5 = uVar8 == *puVar9;
      if (bVar5) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
      iVar12 = iRam_?;
    } while (!bVar5);
  }
  pOVar4 = (this->fields).component;
  if (pOVar4 == (ObjectPrefab *)0x0) goto code_?;
  (this->fields).collider = (pOVar4->fields).mainCollider;
  if (iVar12 != 0) {
    uVar6 = (uint)((ulonglong)&(this->fields).collider >> 0xc);
    lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
      puVar9 = (ulonglong *)(lVar7 + 0xADDR);
      LOCK();
      bVar5 = uVar8 == *puVar9;
      if (bVar5) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  pGVar11 = (this->fields).gameObject;
  if (pGVar11 == (GameObject *)0x0) goto code_?;
  pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                      (pGVar11,(MethodInfo *)0x0);
  bVar5 = iRam_? != 0;
  (this->fields).transform = pTVar13;
  if (bVar5) {
    uVar6 = (uint)((ulonglong)&(this->fields).transform >> 0xc);
    lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
      puVar9 = (ulonglong *)(lVar7 + 0xADDR);
      LOCK();
      bVar5 = uVar8 == *puVar9;
      if (bVar5) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  if (cRam_? == '\0') {
    auStack_3._24_8_ = &UNK_?;
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                  ,data,worldObjects,0);
    LOCK();
    UNLOCK();
    auStack_3._24_8_ = &UNK_?;
    FUN_?(&TypeInfo__MVGroup);
    LOCK();
    UNLOCK();
    auStack_3._24_8_ = &UNK_?;
    FUN_?(&TypeInfo__MVRuntimeDataVariables);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  auStack_3._24_8_ = &UNK_?;
  MVWorldObjectClient_CreateConnectors(this,(MethodInfo *)0x0);
  auStack_3._24_8_ = &UNK_?;
  MVWorldObjectClient_ApplyData(this,data,(MethodInfo *)0x0);
  pGVar11 = (this->fields).gameObject;
  auStack_3._24_8_ = &UNK_?;
  name = (String *)
         (*(this->klass->vtable).ToString.methodPtr)(this,(this->klass->vtable).ToString.method);
  if (pGVar11 == (GameObject *)0x0) goto code_?;
  auStack_3._24_8_ = &UNK_?;
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_SetName
            ((Object_1 *)pGVar11,name,(MethodInfo *)0x0);
  auStack_3._24_8_ = &UNK_?;
  pMVar14 = (MVRuntimeDataVariables *)FUN_?(TypeInfo__MVRuntimeDataVariables);
  if (cRam_? == '\0') {
    auStack_3._24_8_ = &UNK_?;
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVRuntimeDataVariable>__List__);
    LOCK();
    UNLOCK();
    auStack_3._24_8_ = &UNK_?;
    FUN_?(&TypeInfo__System__Collections__Generic__List<MVRuntimeDataVariable>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar5 = iRam_? != 0;
  (pMVar14->fields).owner = this;
  if (bVar5) {
    uVar6 = (uint)((ulonglong)&pMVar14->fields >> 0xc);
    lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
      puVar9 = (ulonglong *)(lVar7 + 0xADDR);
      LOCK();
      bVar5 = uVar8 == *puVar9;
      if (bVar5) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  auStack_3._24_8_ = &UNK_?;
  this_00 = (List_1_MVRuntimeDataVariable_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<MVRuntimeDataVariable>);
  auStack_3._24_8_ = &UNK_?;
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<MVRuntimeDataVariable>__List__);
  iVar12 = iRam_?;
  (pMVar14->fields).variables = this_00;
  if (iVar12 != 0) {
    uVar6 = (uint)((ulonglong)&(pMVar14->fields).variables >> 0xc);
    lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
      puVar9 = (ulonglong *)(lVar7 + 0xADDR);
      LOCK();
      bVar5 = uVar8 == *puVar9;
      if (bVar5) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
      iVar12 = iRam_?;
    } while (!bVar5);
  }
  (this->fields).runtimeDataVariables = pMVar14;
  if (iVar12 != 0) {
    uVar6 = (uint)((ulonglong)&(this->fields).runtimeDataVariables >> 0xc);
    lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
      puVar9 = (ulonglong *)(lVar7 + 0xADDR);
      LOCK();
      bVar5 = uVar8 == *puVar9;
      if (bVar5) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  if ((this->fields)._.groupId != -1) {
    if (worldObjects == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0)
    goto code_?;
    auStack_3._24_8_ = &UNK_?;
    pMVar15 = (MVGroup *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__get_Item
                        ((Dictionary_2_System_Int32_System_Object_ *)worldObjects,
                         (this->fields)._.groupId,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                        );
    if (pMVar15 == (MVGroup *)0x0) {
      (this->fields).group = (MVGroup *)0x0;
    }
    else {
      bVar16 = (TypeInfo__MVGroup->_1).naturalAligment;
      if (((pMVar15->klass->_1).naturalAligment < bVar16) ||
         ((MVGroup__Class *)(pMVar15->klass->_1).typeHierarchy[(ulonglong)bVar16 - 1] !=
          TypeInfo__MVGroup)) {
        auStack_3._24_8_ = &UNK_?;
        FUN_?(pMVar15);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      (this->fields).group = pMVar15;
      bVar16 = (TypeInfo__MVGroup->_1).naturalAligment;
      if (((pMVar15->klass->_1).naturalAligment < bVar16) ||
         ((MVGroup__Class *)(pMVar15->klass->_1).typeHierarchy[(ulonglong)bVar16 - 1] !=
          TypeInfo__MVGroup)) {
        auStack_3._24_8_ = &UNK_?;
        FUN_?(pMVar15);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)&(this->fields).group >> 0xc);
      lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar9 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    pMVar15 = (this->fields).group;
    if (pMVar15 == (MVGroup *)0x0) goto code_?;
    auStack_3._24_8_ = &UNK_?;
    (*(pMVar15->klass->vtable).AddChild.methodPtr)
              (pMVar15,this,(pMVar15->klass->vtable).AddChild.method);
  }
  if (cRam_? == '\0') {
    auStack_3._24_8_ = &UNK_?;
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar17 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar17 != (MVGameControllerBase *)0x0) &&
     (pMVar18 = (pMVar17->fields).game, pMVar18 != (MVNetworkGame *)0x0)) {
    pMVar19 = (pMVar18->fields).itemBusinessLogic;
    key = (this->fields)._.itemId;
    if (pMVar19 != (MVItemBusinessLogic *)0x0) {
      if (cRam_? == '\0') {
        auStack_3._24_8_ = &UNK_?;
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__ContainsKey_int_
                     );
        LOCK();
        UNLOCK();
        auStack_3._24_8_ = &UNK_?;
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__get_Item_int_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pDVar20 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(pMVar19->fields).items;
      if (pDVar20 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
        auStack_3._24_8_ = &UNK_?;
        iVar21 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                 ::Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                           (pDVar20,key,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__ContainsKey_int_
                            ->klass->rgctx_data[0x21].method);
        pDVar20 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(pMVar19->fields).items;
        if (pDVar20 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
          if (iVar21 < 0) {
            auStack_3._24_8_ = &UNK_?;
            iVar21 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Int32,UnityEngine::Vector3]::
                     Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                               (pDVar20,key,
                                MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__ContainsKey_int_
                                ->klass->rgctx_data[0x21].method);
            if (iVar21 < 0) {
              return;
            }
            pDVar20 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(pMVar19->fields).items;
            if (pDVar20 == (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0)
            goto code_?;
          }
          auStack_3._24_8_ = &UNK_?;
          pOVar22 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Object]::Dictionary_2_System_Int32_System_Object__get_Item
                              ((Dictionary_2_System_Int32_System_Object_ *)pDVar20,key,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__get_Item_int_
                              );
          if (pOVar22 != (Object *)0x0) {
            if (*(char *)((longlong)&pOVar22[4].klass + 1) != '\0') {
              piVar23 = &(this->fields).interactionFlags;
              *piVar23 = *piVar23 | 0x4000;
            }
            return;
          }
        }
      }
    }
  }
code_?:
  auStack_3._24_8_ = &UNK_?;
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* MVWorldObjectClient(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient__ctor_2
               (MVWorldObjectClient *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Collider>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__GameObject);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).previewLayerMask = 1;
  MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject__ctor
            ((MVWorldObject *)this,(MethodInfo *)0x0);
  pGVar1 = (GameObject *)FUN_?(TypeInfo__UnityEngine__GameObject);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_Internal_CreateGameObject
            (pGVar1,(String *)0x0,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields).gameObject = pGVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).gameObject >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pGVar1 = (this->fields).gameObject;
  if (pGVar1 != (GameObject *)0x0) {
    iVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                      ((Object_1 *)pGVar1,(MethodInfo *)0x0);
    pGVar1 = (this->fields).gameObject;
    (this->fields).goId = iVar7;
    if (pGVar1 != (GameObject *)0x0) {
      pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (pGVar1,(MethodInfo *)0x0);
      bVar2 = iRam_? != 0;
      (this->fields).transform = pTVar8;
      if (bVar2) {
        uVar3 = (uint)((ulonglong)&(this->fields).transform >> 0xc);
        lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
          puVar6 = (ulonglong *)(lVar4 + 0xADDR);
          LOCK();
          bVar2 = uVar5 == *puVar6;
          if (bVar2) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
      pMVar9 = MVWorldObjectClient_GetTransformData(&MStack_10,this,data,(MethodInfo *)0x0);
      pTVar8 = (this->fields).transform;
      uStack_11._0_4_ = (pMVar9->rotation).y;
      uStack_11._4_4_ = (pMVar9->rotation).z;
      fStack_12 = (pMVar9->rotation).w;
      uStack_13._0_4_ = (pMVar9->position).x;
      uStack_13._4_4_ = (pMVar9->position).y;
      uStack_14 = *(undefined8 *)&(pMVar9->position).z;
      uStack_15._0_4_ = (pMVar9->rotation).y;
      uStack_15._4_4_ = (pMVar9->rotation).z;
      fStack_16 = fStack_12;
      if (pTVar8 != (Transform *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar17 = (pTVar8->fields)._._.m_CachedPtr;
        if (pvVar17 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar8,(MethodInfo *)0x0);
          pcVar18 = (code *)swi(3);
          (*pcVar18)();
          return;
        }
        pcVar18 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar18 = (code *)FUN_?(&UNK_?), pcVar18 == (code *)0x0)) {
          uVar19 = func_?(&UNK_?);
          FUN_?(uVar19,0);
          pcVar18 = (code *)swi(3);
          (*pcVar18)();
          return;
        }
        pcRam_? = pcVar18;
        (*pcRam_?)(pvVar17);
        pTVar8 = (this->fields).transform;
        if (pTVar8 != (Transform *)0x0) {
          uStack_20 = uStack_14._4_4_;
          uStack_21 = (undefined4)uStack_11;
          uStack_22 = uStack_11._4_4_;
          fStack_23 = fStack_16;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar17 = (pTVar8->fields)._._.m_CachedPtr;
          if (pvVar17 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar8,(MethodInfo *)0x0);
            pcVar18 = (code *)swi(3);
            (*pcVar18)();
            return;
          }
          pcVar18 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar18 = (code *)FUN_?(&UNK_?), pcVar18 == (code *)0x0)) {
            uVar19 = func_?(&UNK_?);
            FUN_?(uVar19,0);
            pcVar18 = (code *)swi(3);
            (*pcVar18)();
            return;
          }
          pcRam_? = pcVar18;
          (*pcRam_?)(pvVar17,&uStack_20);
          pGVar1 = (this->fields).gameObject;
          if (pGVar1 != (GameObject *)0x0) {
            pCVar24 = (Collider *)
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                                (pGVar1,
                                 UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Collider>__
                                );
            bVar2 = iRam_? != 0;
            (this->fields).collider = pCVar24;
            if (bVar2) {
              uVar3 = (uint)((ulonglong)&(this->fields).collider >> 0xc);
              lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
              do {
                uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
                puVar6 = (ulonglong *)(lVar4 + 0xADDR);
                LOCK();
                bVar2 = uVar5 == *puVar6;
                if (bVar2) {
                  *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                }
                UNLOCK();
              } while (!bVar2);
            }
            MVWorldObjectClient_CreateWorldObject(this,data,worldObjects,(MethodInfo *)0x0);
            return;
          }
        }
      }
      FUN_?();
      pcVar18 = (code *)swi(3);
      (*pcVar18)();
      return;
    }
  }
  FUN_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Vector3 get_EulerAngles() */

Vector3 * Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_get_EulerAngles
                    (Vector3 *__return_storage_ptr__,MVWorldObjectClient *this,MethodInfo *method)

{
  this_00 = (this->fields).transform;
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localEulerAngles
                       (&VStack_2,this_00,(MethodInfo *)0x0);
    fVar3 = pVVar1->y;
    fVar4 = pVVar1->z;
    __return_storage_ptr__->x = pVVar1->x;
    __return_storage_ptr__->y = fVar3;
    __return_storage_ptr__->z = fVar4;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar5)();
  return pVVar1;
}


/* InteractionDataHandlerBase get_InteractionDataHandlerBase() */

InteractionDataHandlerBase *
Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
          (MVWorldObjectClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  InteractionDataHandlerBase_MethodInfo__UnityEngine__GameObject__GetComponent<InteractionDataHandlerBase>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).interactionDataHandlerBase;
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
  if (pIVar1 != (InteractionDataHandlerBase *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pIVar1->fields)._._._._._.m_CachedPtr != (void *)0x0) goto code_?;
  }
  this_00 = (this->fields).gameObject;
  if (this_00 == (GameObject *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pIVar1 = (InteractionDataHandlerBase *)(*pcVar2)();
    return pIVar1;
  }
  pIVar1 = (InteractionDataHandlerBase *)
           UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                     (this_00,
                      InteractionDataHandlerBase_MethodInfo__UnityEngine__GameObject__GetComponent<InteractionDataHandlerBase>__
                     );
  bVar3 = iRam_? != 0;
  (this->fields).interactionDataHandlerBase = pIVar1;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields).interactionDataHandlerBase >> 0xc);
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
code_?:
  return (this->fields).interactionDataHandlerBase;
}


/* Boolean get_IsTransformDefined() */

bool Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_get_IsTransformDefined
               (MVWorldObjectClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).transform;
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
  if (pTVar1 != (Transform *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    return (pTVar1->fields)._._.m_CachedPtr != (void *)0x0;
  }
  return 0;
}


/* Vector3 get_ObjectConnectorOffset() */

Vector3 * Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_get_ObjectConnectorOffset
                    (Vector3 *__return_storage_ptr__,MVWorldObjectClient *this,MethodInfo *method)

{
  __return_storage_ptr__->z = -1.0;
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  return __return_storage_ptr__;
}


/* Vector3 get_OutputConnectorOffset() */

Vector3 * Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_get_OutputConnectorOffset
                    (Vector3 *__return_storage_ptr__,MVWorldObjectClient *this,MethodInfo *method)

{
  __return_storage_ptr__->x = 1.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  return __return_storage_ptr__;
}


/* PlayInteractionType get_PlayInteractionType() */

PlayInteractionType__Enum
Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_get_PlayInteractionType
          (MVWorldObjectClient *this,MethodInfo *method)

{
  return (this->fields)._PlayInteractionType_k__BackingField;
}


/* Vector3 get_Position() */

Vector3 * Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_get_Position
                    (Vector3 *__return_storage_ptr__,MVWorldObjectClient *this,MethodInfo *method)

{
  obj = (this->fields).transform;
  if (obj == (Transform *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_3 = 0;
  fStack_4 = 0.0;
  pvVar5 = (obj->fields)._._.m_CachedPtr;
  if (pvVar5 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar5,&uStack_3);
  __return_storage_ptr__->x = (float)(undefined4)uStack_3;
  __return_storage_ptr__->y = (float)uStack_3._4_4_;
  __return_storage_ptr__->z = fStack_4;
  return __return_storage_ptr__;
}


/* Quaternion get_Rotation() */

Quaternion *
Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_get_Rotation
          (Quaternion *__return_storage_ptr__,MVWorldObjectClient *this,MethodInfo *method)

{
  obj = (this->fields).transform;
  if (obj == (Transform *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pQVar2 = (Quaternion *)(*pcVar1)();
    return pQVar2;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_3 = 0;
  uStack_4 = 0;
  pvVar5 = (obj->fields)._._.m_CachedPtr;
  if (pvVar5 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    pQVar2 = (Quaternion *)(*pcVar1)();
    return pQVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar1 = (code *)swi(3);
    pQVar2 = (Quaternion *)(*pcVar1)();
    return pQVar2;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar5,&uStack_3);
  __return_storage_ptr__->x = (float)(undefined4)uStack_3;
  __return_storage_ptr__->y = (float)uStack_3._4_4_;
  __return_storage_ptr__->z = (float)(undefined4)uStack_4;
  __return_storage_ptr__->w = (float)uStack_4._4_4_;
  return __return_storage_ptr__;
}


/* Vector3 get_Scale() */

Vector3 * Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_get_Scale
                    (Vector3 *__return_storage_ptr__,MVWorldObjectClient *this,MethodInfo *method)

{
  obj = (this->fields).transform;
  if (obj == (Transform *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_3 = 0;
  fStack_4 = 0.0;
  pvVar5 = (obj->fields)._._.m_CachedPtr;
  if (pvVar5 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar5,&uStack_3);
  __return_storage_ptr__->x = (float)(undefined4)uStack_3;
  __return_storage_ptr__->y = (float)uStack_3._4_4_;
  __return_storage_ptr__->z = fStack_4;
  return __return_storage_ptr__;
}


/* SelectedConnector get_SelectedConnector() */

SelectedConnector__Enum
Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_get_SelectedConnector
          (MVWorldObjectClient *this,MethodInfo *method)

{
  return (this->fields).selectedConnector;
}


/* Quaternion get_SyncRot() */

Quaternion *
Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_get_SyncRot
          (Quaternion *__return_storage_ptr__,MVWorldObjectClient *this,MethodInfo *method)

{
  pQVar1 = MVWorldObjectClient_get_WorldRotation(&QStack_2,this,(MethodInfo *)0x0);
  fVar3 = pQVar1->y;
  fVar4 = pQVar1->z;
  fVar5 = pQVar1->w;
  __return_storage_ptr__->x = pQVar1->x;
  __return_storage_ptr__->y = fVar3;
  __return_storage_ptr__->z = fVar4;
  __return_storage_ptr__->w = fVar5;
  return __return_storage_ptr__;
}


/* Vector3 get_WorldEulerAngles() */

Vector3 * Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_get_WorldEulerAngles
                    (Vector3 *__return_storage_ptr__,MVWorldObjectClient *this,MethodInfo *method)

{
  this_00 = (this->fields).transform;
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles
                       (&VStack_2,this_00,(MethodInfo *)0x0);
    fVar3 = pVVar1->y;
    fVar4 = pVVar1->z;
    __return_storage_ptr__->x = pVVar1->x;
    __return_storage_ptr__->y = fVar3;
    __return_storage_ptr__->z = fVar4;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar5)();
  return pVVar1;
}


/* HashSet`1[System.Int32] get_WorldIDsRecursive() */

HashSet_1_System_Int32_ *
Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_get_WorldIDsRecursive
          (MVWorldObjectClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVWorldObjectClient__CallBackDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVWorldObjectClient____c__DisplayClass53_0___get_WorldIDsRecursive_b__0_MVWorldObjectClient_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVWorldObjectClient____c__DisplayClass53_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__MVWorldObjectClient____c__DisplayClass53_0);
  pOVar1 = (Object__Class *)FUN_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  FUN_?(pOVar1,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  if (object == (Object *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pHVar3 = (HashSet_1_System_Int32_ *)(*pcVar2)();
    return pHVar3;
  }
  bVar4 = iRam_? != 0;
  object[1].klass = pOVar1;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)(object + 1) >> 0xc);
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
  this_00 = (UnityAction_1_System_Object_ *)
            FUN_?(TypeInfo__MVWorldObjectClient__CallBackDelegate);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this_00,object,
             MethodInfo__MVWorldObjectClient____c__DisplayClass53_0___get_WorldIDsRecursive_b__0_MVWorldObjectClient_
             ,(MethodInfo *)0x0);
  (*(this->klass->vtable).TraverseRecursiveTail.methodPtr)
            (this,this_00,(this->klass->vtable).TraverseRecursiveTail.method);
  return (HashSet_1_System_Int32_ *)object[1].klass;
}


/* Vector3 get_WorldPivot() */

Vector3 * Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_get_WorldPivot
                    (Vector3 *__return_storage_ptr__,MVWorldObjectClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  transform = (this->fields).transform;
  if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
    FUN_?();
  }
  pVVar1 = SharedCubeFunctions::SharedCubeFunctions_GetWorldCenter_1
                     (&VStack_2,transform,(MethodInfo *)0x0);
  fVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  __return_storage_ptr__->x = pVVar1->x;
  __return_storage_ptr__->y = fVar3;
  __return_storage_ptr__->z = fVar4;
  return __return_storage_ptr__;
}


/* Quaternion get_WorldRotation() */

Quaternion *
Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_get_WorldRotation
          (Quaternion *__return_storage_ptr__,MVWorldObjectClient *this,MethodInfo *method)

{
  this_00 = (this->fields).gameObject;
  if ((this_00 == (GameObject *)0x0) ||
     (obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                      (this_00,(MethodInfo *)0x0), obj == (Transform *)0x0)) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pQVar2 = (Quaternion *)(*pcVar1)();
    return pQVar2;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_3 = 0;
  uStack_4 = 0;
  pvVar5 = (obj->fields)._._.m_CachedPtr;
  if (pvVar5 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    pQVar2 = (Quaternion *)(*pcVar1)();
    return pQVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar1 = (code *)swi(3);
    pQVar2 = (Quaternion *)(*pcVar1)();
    return pQVar2;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar5,&uStack_3);
  __return_storage_ptr__->x = (float)(undefined4)uStack_3;
  __return_storage_ptr__->y = (float)uStack_3._4_4_;
  __return_storage_ptr__->z = (float)(undefined4)uStack_4;
  __return_storage_ptr__->w = (float)uStack_4._4_4_;
  return __return_storage_ptr__;
}


/* Void set_DocumentationType(MVWorldObjectDocumentationType) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_set_DocumentationType
               (MVWorldObjectClient *this,MVWorldObjectDocumentationType__Enum value,
               MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotImplementedException);
  this_00 = (NotImplementedException *)func_?(uVar1);
  mscorlib.dll::System::NotImplementedException::NotImplementedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__MVWorldObjectClient__set_DocumentationType_MVWorldObjectDocumentationType_
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_EulerAngles(Vector3) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_set_EulerAngles
               (MVWorldObjectClient *this,Vector3 *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RotationChangedEventArgs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).transform;
  if (pTVar1 == (Transform *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  auStack_3._0_4_ = value->x;
  auStack_3._4_4_ = value->y;
  stack0xfffffffffffffff0 = CONCAT44(uStack_4,value->z);
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localEulerAngles
            (pTVar1,(Vector3 *)auStack_3,(MethodInfo *)0x0);
  if ((this->fields).RotationChanged !=
      (UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs_ *)0x0) {
    pTVar1 = (this->fields).transform;
    pUVar5 = (this->fields).RotationChanged;
    if (pTVar1 == (Transform *)0x0) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    auStack_3._0_4_ = 0.0;
    auStack_3._4_4_ = 0.0;
    stack0xfffffffffffffff0 = 0;
    pvVar6 = (pTVar1->fields)._._.m_CachedPtr;
    if (pvVar6 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)(pvVar6,auStack_3);
    lVar8 = FUN_?(TypeInfo__RotationChangedEventArgs);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__EventArgs);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__System__EventArgs->_1).field_0x1c == 0) {
      FUN_?();
    }
    *(undefined4 *)(lVar8 + 0x20) = auStack_3._0_4_;
    *(undefined4 *)(lVar8 + 0x24) = auStack_3._4_4_;
    *(undefined4 *)(lVar8 + 0x28) = auStack_3._8_4_;
    *(undefined4 *)(lVar8 + 0x2c) = uStack_4;
    (*(pUVar5->fields)._._.invoke_impl)
              ((pUVar5->fields)._._.method_code,this,lVar8,(pUVar5->fields)._._.method);
  }
  return;
}


/* Void set_InteractionFlags(InteractionFlags) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_set_InteractionFlags
               (MVWorldObjectClient *this,InteractionFlags__Enum value,MethodInfo *method)

{
  (this->fields).interactionFlags = CONCAT44(in_register_00000014,value);
  return;
}


/* Void set_PlayInteractionType(PlayInteractionType) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_set_PlayInteractionType
               (MVWorldObjectClient *this,PlayInteractionType__Enum value,MethodInfo *method)

{
  (this->fields)._PlayInteractionType_k__BackingField = value;
  return;
}


/* Void set_Position(Vector3) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_set_Position
               (MVWorldObjectClient *this,Vector3 *value,MethodInfo *method)

{
  obj = (this->fields).transform;
  if (obj == (Transform *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uStack_2._0_4_ = value->x;
  uStack_2._4_4_ = value->y;
  fStack_3 = value->z;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar4 = (obj->fields)._._.m_CachedPtr;
  if (pvVar4 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar4,&uStack_2);
  (*(this->klass->vtable).PositionChangedNotify.methodPtr)
            (this,(this->klass->vtable).PositionChangedNotify.method);
  return;
}


/* Void set_Rotation(Quaternion) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_set_Rotation
               (MVWorldObjectClient *this,Quaternion *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RotationChangedEventArgs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).transform;
  if (pTVar1 == (Transform *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  fStack_3 = value->x;
  fStack_4 = value->y;
  fStack_5 = value->z;
  fStack_6 = value->w;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar7 = (pTVar1->fields)._._.m_CachedPtr;
  if (pvVar7 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(pvVar7);
  if ((this->fields).RotationChanged !=
      (UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs_ *)0x0) {
    pTVar1 = (this->fields).transform;
    pUVar9 = (this->fields).RotationChanged;
    if (pTVar1 == (Transform *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_10 = 0;
    uStack_11 = 0;
    pvVar7 = (pTVar1->fields)._._.m_CachedPtr;
    if (pvVar7 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar8 = func_?(&UNK_?);
      FUN_?(uVar8,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)(pvVar7,&uStack_10);
    lVar12 = FUN_?(TypeInfo__RotationChangedEventArgs);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__EventArgs);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__System__EventArgs->_1).field_0x1c == 0) {
      FUN_?();
    }
    *(undefined4 *)(lVar12 + 0x20) = (undefined4)uStack_10;
    *(undefined4 *)(lVar12 + 0x24) = uStack_10._4_4_;
    *(undefined4 *)(lVar12 + 0x28) = (undefined4)uStack_11;
    *(undefined4 *)(lVar12 + 0x2c) = uStack_11._4_4_;
    (*(pUVar9->fields)._._.invoke_impl)
              ((pUVar9->fields)._._.method_code,this,lVar12,(pUVar9->fields)._._.method);
  }
  return;
}


/* Void set_RunTimeData(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_set_RunTimeData
               (MVWorldObjectClient *this,Dictionary_2_System_Object_System_Object_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
           ObscuredTypesConverter::ObscuredTypesConverter_CreateObscuredValue
                     ((Object *)value,(MethodInfo *)0x0);
  if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar2 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if (((pDVar1->klass->_1).naturalAligment < bVar2) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (pDVar1->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      FUN_?(pDVar1);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  bVar4 = iRam_? != 0;
  (this->fields)._.runTimeData = pDVar1;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(this->fields)._.runTimeData >> 0xc);
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


/* Void set_Scale(Vector3) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_set_Scale
               (MVWorldObjectClient *this,Vector3 *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ScaleChangedEventArgs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  obj = (this->fields).transform;
  if (obj == (Transform *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uStack_2._0_4_ = value->x;
  uStack_2._4_4_ = value->y;
  fStack_3 = value->z;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar4 = (obj->fields)._._.m_CachedPtr;
  if (pvVar4 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar4,&uStack_2);
  if ((this->fields).ScaleChanged != (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)0x0
     ) {
    pUVar6 = (this->fields).ScaleChanged;
    lVar7 = FUN_?(TypeInfo__ScaleChangedEventArgs);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__EventArgs);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__System__EventArgs->_1).field_0x1c == 0) {
      FUN_?();
    }
    fVar8 = value->z;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)value;
    *(float *)(lVar7 + 0x18) = fVar8;
    (*(pUVar6->fields)._._.invoke_impl)
              ((pUVar6->fields)._._.method_code,this,lVar7,(pUVar6->fields)._._.method);
  }
  return;
}


/* Void set_Selected(Boolean) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_set_Selected
               (MVWorldObjectClient *this,bool value,MethodInfo *method)

{
  if ((this->fields).selected != value) {
    pMVar1 = this->klass;
    (this->fields).selected = value;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pMVar1->vtable).OnSelectedChanged.methodPtr)
              (this,value,(pMVar1->vtable).OnSelectedChanged.method);
    return;
  }
  return;
}


/* Void set_SyncPos(Vector3) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_set_SyncPos
               (MVWorldObjectClient *this,Vector3 *value,MethodInfo *method)

{
  fStack_1 = value->z;
  uStack_2._0_4_ = value->x;
  uStack_2._4_4_ = value->y;
  (*(this->klass->vtable).set_WorldPosition.methodPtr)
            (uStack_2,&uStack_2,(this->klass->vtable).set_WorldPosition.method);
  return;
}


/* Void set_SyncRot(Quaternion) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_set_SyncRot
               (MVWorldObjectClient *this,Quaternion *value,MethodInfo *method)

{
  QStack_1.x = value->x;
  QStack_1.y = value->y;
  QStack_1.z = value->z;
  QStack_1.w = value->w;
  MVWorldObjectClient_set_WorldRotation(this,&QStack_1,(MethodInfo *)0x0);
  return;
}


/* Void set_Visible(Boolean) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_set_Visible
               (MVWorldObjectClient *this,bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MeshRenderer_s__not_found_on_att);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = 
  UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
  ;
  this_00 = (this->fields).gameObject;
  if (this_00 != (GameObject *)0x0) {
    if ((
        UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(
                   UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
                   );
    }
    p_Var3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
             GameObject_GetComponentsInChildren_4
                       (this_00,0,((pMVar1->field7_0x38).rgctx_data)->method);
    if (p_Var3 != (_Il2CppFullySharedGenericType__Array *)0x0) {
      if (p_Var3->max_length == 0) {
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                  ((Object *)StringLiteral_MeshRenderer_s__not_found_on_att,(MethodInfo *)0x0);
      }
      else {
        pp_Var7 = p_Var3->vector;
        for (uVar2 = 0; (int)uVar2 < (int)p_Var3->max_length; uVar2 = uVar2 + 1) {
          if ((uint)p_Var3->max_length <= uVar2) {
            FUN_?();
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          obj = (Object *)*pp_Var7;
          if (obj == (Object *)0x0) goto code_?;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pOVar4 = obj[1].klass;
          if (pOVar4 == (Object__Class *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException(obj,(MethodInfo *)0x0);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pcVar3 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
            uVar5 = func_?(&UNK_?);
            FUN_?(uVar5,0);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pcRam_? = pcVar3;
          (*pcRam_?)(pOVar4);
          pp_Var7 = pp_Var7 + 1;
        }
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void set_WorldEulerAngles(Vector3) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_set_WorldEulerAngles
               (MVWorldObjectClient *this,Vector3 *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RotationChangedEventArgs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).transform;
  if (pTVar1 == (Transform *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  auStack_3._0_4_ = value->x;
  auStack_3._4_4_ = value->y;
  stack0xfffffffffffffff0 = CONCAT44(uStack_4,value->z);
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_eulerAngles
            (pTVar1,(Vector3 *)auStack_3,(MethodInfo *)0x0);
  if ((this->fields).RotationChanged !=
      (UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs_ *)0x0) {
    pTVar1 = (this->fields).transform;
    pUVar5 = (this->fields).RotationChanged;
    if (pTVar1 == (Transform *)0x0) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    auStack_3._0_4_ = 0.0;
    auStack_3._4_4_ = 0.0;
    stack0xfffffffffffffff0 = 0;
    pvVar6 = (pTVar1->fields)._._.m_CachedPtr;
    if (pvVar6 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)(pvVar6,auStack_3);
    lVar8 = FUN_?(TypeInfo__RotationChangedEventArgs);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__EventArgs);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__System__EventArgs->_1).field_0x1c == 0) {
      FUN_?();
    }
    *(undefined4 *)(lVar8 + 0x20) = auStack_3._0_4_;
    *(undefined4 *)(lVar8 + 0x24) = auStack_3._4_4_;
    *(undefined4 *)(lVar8 + 0x28) = auStack_3._8_4_;
    *(undefined4 *)(lVar8 + 0x2c) = uStack_4;
    (*(pUVar5->fields)._._.invoke_impl)
              ((pUVar5->fields)._._.method_code,this,lVar8,(pUVar5->fields)._._.method);
  }
  return;
}


/* Void set_WorldPosition(Vector3) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_set_WorldPosition
               (MVWorldObjectClient *this,Vector3 *value,MethodInfo *method)

{
  obj = (this->fields).transform;
  if (obj == (Transform *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uStack_2._0_4_ = value->x;
  uStack_2._4_4_ = value->y;
  fStack_3 = value->z;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar4 = (obj->fields)._._.m_CachedPtr;
  if (pvVar4 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar4,&uStack_2);
  (*(this->klass->vtable).PositionChangedNotify.methodPtr)
            (this,(this->klass->vtable).PositionChangedNotify.method);
  return;
}


/* Void set_WorldRotation(Quaternion) */

void Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_set_WorldRotation
               (MVWorldObjectClient *this,Quaternion *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RotationChangedEventArgs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  obj = (this->fields).transform;
  if (obj == (Transform *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  fStack_2 = value->x;
  fStack_3 = value->y;
  fStack_4 = value->z;
  fStack_5 = value->w;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar6 = (obj->fields)._._.m_CachedPtr;
  if (pvVar6 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar6,&fStack_2);
  if ((this->fields).RotationChanged !=
      (UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs_ *)0x0) {
    pUVar8 = (this->fields).RotationChanged;
    lVar9 = FUN_?(TypeInfo__RotationChangedEventArgs);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__EventArgs);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__System__EventArgs->_1).field_0x1c == 0) {
      FUN_?();
    }
    fVar10 = value->y;
    fVar11 = value->z;
    fVar12 = value->w;
    *(float *)(lVar9 + 0x20) = value->x;
    *(float *)(lVar9 + 0x24) = fVar10;
    *(float *)(lVar9 + 0x28) = fVar11;
    *(float *)(lVar9 + 0x2c) = fVar12;
    (*(pUVar8->fields)._._.invoke_impl)
              ((pUVar8->fields)._._.method_code,this,lVar9,(pUVar8->fields)._._.method);
  }
  return;
}

