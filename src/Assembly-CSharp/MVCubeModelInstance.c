
/* Void AddPreviewBox() */

void Assembly-CSharp.dll::MVCubeModelInstance::MVCubeModelInstance_AddPreviewBox
               (MVCubeModelInstance *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&PreviewBox_MethodInfo__UnityEngine__GameObject__AddComponent<PreviewBox>__);
    func_?(&
                    PreviewBox_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<PreviewBox>__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_PreviewBox);
    cRam_? = '\x01';
  }
  KStack_1.key._options = 0;
  KStack_1.key._cultureKey = (String *)0x0;
  KStack_1.key._pattern = (String *)0x0;
  KStack_1.value = (Object *)0x0;
  uStack_2 = 0;
  pGVar3 = (this->fields)._._.gameObject;
  if (pGVar3 != (GameObject *)0x0) {
    this_00 = (PreviewBox *)
              Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                        ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)pGVar3,
                         PreviewBox_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<PreviewBox>__
                        );
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)this_00,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      pGVar3 = MVWorldObjectClient::MVWorldObjectClient_CreateBox
                         ((MVWorldObjectClient *)this,StringLiteral_PreviewBox,1.005,
                          (MethodInfo *)0x0);
      if (pGVar3 == (GameObject *)0x0) goto code_?;
      this_00 = (PreviewBox *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                          (pGVar3,
                           PreviewBox_MethodInfo__UnityEngine__GameObject__AddComponent<PreviewBox>__
                          );
    }
    pBVar5 = MVCubeModelBase::MVCubeModelBase_GetBounds
                       (&BStack_6,(MVCubeModelBase *)this,(MethodInfo *)0x0);
    KStack_1.key._options = (int32_t)(pBVar5->m_Center).x;
    KStack_1.key._cultureKey = (String *)(pBVar5->m_Center).y;
    KStack_1.key._pattern = (String *)(pBVar5->m_Center).z;
    KStack_1.value = (Object *)(pBVar5->m_Extents).x;
    uStack_2._0_4_ = (pBVar5->m_Extents).y;
    uStack_2._4_4_ = (pBVar5->m_Extents).z;
    if (this_00 != (PreviewBox *)0x0) {
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this_00,(MethodInfo *)0x0);
      pRVar7 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
               RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
               KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                         ((Regex_CachedCodeEntryKey *)&BStack_6.m_Extents,&KStack_1,
                          (MethodInfo *)0x0);
      if (this_01 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                  (this_01,(Vector3)*pRVar7,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?(&TypeInfo__PrefabPool);
          cRam_? = '\x01';
        }
        pPVar8 = TypeInfo__PrefabPool->static_fields->instance;
        if (pPVar8 != (PrefabPool *)0x0) {
          material = (pPVar8->fields).previewBoxMaterial;
          bounds.m_Center.y = (float)KStack_1.key._cultureKey;
          bounds.m_Center.x = (float)KStack_1.key._options;
          bounds.m_Center.z = (float)KStack_1.key._pattern;
          bounds.m_Extents.x = (float)KStack_1.value;
          bounds.m_Extents.y = (float)(int)uStack_2;
          bounds.m_Extents.z = (float)((ulonglong)uStack_2 >> 0x20);
          corners = MVCubeModelInstance_GetCorners(this,bounds,(MethodInfo *)0x0);
          PreviewBox::PreviewBox_Show(this_00,material,corners,(MethodInfo *)0x0);
          return;
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


/* Void AddSelectionBox() */

void Assembly-CSharp.dll::MVCubeModelInstance::MVCubeModelInstance_AddSelectionBox
               (MVCubeModelInstance *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&SelectionBox_MethodInfo__UnityEngine__GameObject__AddComponent<SelectionBox>__)
    ;
    func_?(&
                    SelectionBox_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<SelectionBox>__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_SelectionBox);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._._.gameObject;
  if (pGVar1 != (GameObject *)0x0) {
    this_00 = (SelectionBox *)
              Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                        ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)pGVar1,
                         SelectionBox_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<SelectionBox>__
                        );
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)this_00,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pGVar1 = MVWorldObjectClient::MVWorldObjectClient_CreateBox
                         ((MVWorldObjectClient *)this,StringLiteral_SelectionBox,1.001,
                          (MethodInfo *)0x0);
      if (pGVar1 == (GameObject *)0x0) goto code_?;
      this_00 = (SelectionBox *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                          (pGVar1,
                           SelectionBox_MethodInfo__UnityEngine__GameObject__AddComponent<SelectionBox>__
                          );
    }
    pBVar3 = MVCubeModelBase::MVCubeModelBase_GetBounds
                       (&BStack_4,(MVCubeModelBase *)this,(MethodInfo *)0x0);
    fVar5 = (pBVar3->m_Center).x;
    pSVar6 = (String *)(pBVar3->m_Center).y;
    pSVar7 = (String *)(pBVar3->m_Center).z;
    pOVar8 = (Object *)(pBVar3->m_Extents).x;
    uVar9._0_4_ = (pBVar3->m_Extents).y;
    uVar9._4_4_ = (pBVar3->m_Extents).z;
    if (this_00 != (SelectionBox *)0x0) {
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this_00,(MethodInfo *)0x0);
      pRVar10 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
               RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
               KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                         ((Regex_CachedCodeEntryKey *)&BStack_4.m_Extents,
                          (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                           *)&stack0xffffffcc,(MethodInfo *)0x0);
      if (this_01 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                  (this_01,(Vector3)*pRVar10,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?(&TypeInfo__PrefabPool);
          cRam_? = '\x01';
        }
        pPVar11 = TypeInfo__PrefabPool->static_fields->instance;
        if (pPVar11 != (PrefabPool *)0x0) {
          material = (pPVar11->fields).selectBoxMaterial;
          bounds.m_Center.y = (float)pSVar6;
          bounds.m_Center.x = fVar5;
          bounds.m_Center.z = (float)pSVar7;
          bounds.m_Extents.x = (float)pOVar8;
          bounds.m_Extents.y = (float)(int)uVar9;
          bounds.m_Extents.z = (float)((ulonglong)uVar9 >> 0x20);
          corners = MVCubeModelInstance_GetCorners(this,bounds,(MethodInfo *)0x0);
          SelectionBox::SelectionBox_FadeIn(this_00,0.2,material,corners,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void ChangeLODVisible() */

void Assembly-CSharp.dll::MVCubeModelInstance::MVCubeModelInstance_ChangeLODVisible
               (MVCubeModelInstance *this,MethodInfo *method)

{
  this_00 = (this->fields)._.prototypeCubeModel;
  if ((this->fields).isVisible == 0) {
    if (this_00 != (RuntimePrototypeCubeModel *)0x0) {
      RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_RemoveReferenceFromAllChunks
                (this_00,(MethodInfo *)0x0);
      MVCubeModelInstance_SetLod(this,0,(MethodInfo *)0x0);
      return;
    }
  }
  else if (this_00 != (RuntimePrototypeCubeModel *)0x0) {
    RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_AddReferenceToAllChunks
              (this_00,(MethodInfo *)0x0);
    MVCubeModelInstance_SetLod(this,1,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Compare(MVWorldObjectClient, Boolean, Int32 ByRef, Int32 ByRef) */

void Assembly-CSharp.dll::MVCubeModelInstance::MVCubeModelInstance_Compare
               (MVCubeModelInstance *this,MVWorldObjectClient *wo,bool visibleCubesOnly,
               int32_t *matchingCubeCount,int32_t *investigatedCubeCount,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVCubeModelInstance);
    cRam_? = '\x01';
  }
  if (wo != (MVWorldObjectClient *)0x0) {
    if ((wo->fields)._.type != (this->fields)._._._.type) {
      return;
    }
    pMVar1 = TypeInfo__MVCubeModelInstance;
    if (((wo->klass->_1).typeHierarchyDepth < (TypeInfo__MVCubeModelInstance->_1).typeHierarchyDepth
        ) || ((MVCubeModelInstance__Class *)
              (wo->klass->_1).typeHierarchy
              [(TypeInfo__MVCubeModelInstance->_1).typeHierarchyDepth - 1] !=
              TypeInfo__MVCubeModelInstance)) goto code_?;
    this_00 = (this->fields)._.prototypeCubeModel;
    if (this_00 != (RuntimePrototypeCubeModel *)0x0) {
      RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_CompareGeometryDetailed
                (this_00,(RuntimePrototypeCubeModel *)wo[1].klass,visibleCubesOnly,matchingCubeCount
                 ,investigatedCubeCount,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pMVar1 = extraout_EDX;
code_?:
  func_?(wo,pMVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean CompareWithKoGaMaPackage(MVWorldObjectClient, KoGaMaPackageClient, Int32 ByRef) */

bool Assembly-CSharp.dll::MVCubeModelInstance::MVCubeModelInstance_CompareWithKoGaMaPackage
               (MVCubeModelInstance *this,MVWorldObjectClient *wo,
               KoGaMaPackageClient *koGaMaPackageClient,int32_t *insertedByProfileId,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_protoTypeID);
    cRam_? = '\x01';
  }
  pRVar1 = (this->fields)._.prototypeCubeModel;
  if (pRVar1 != (RuntimePrototypeCubeModel *)0x0) {
    *insertedByProfileId = (pRVar1->fields)._AuthorProfileID_k__BackingField;
    if (koGaMaPackageClient != (KoGaMaPackageClient *)0x0) {
      this_00 = (koGaMaPackageClient->fields).prototypes;
      if ((wo != (MVWorldObjectClient *)0x0) &&
         (this_01 = (wo->fields)._.data, this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0
         )) {
        pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (this_01,(Object *)StringLiteral_protoTypeID,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        method_00 = 
        MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
        ;
        if (this_00 != (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0) {
          unaff_ESI = TypeInfo__System__Int32;
          if (pOVar2 != (Object *)0x0) {
            if ((pOVar2->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
            goto code_?;
            unaff_ESI = (Int32__Class *)&UNK_?;
            pIVar3 = (Int32Enum__Enum *)func_?(pOVar2);
            rpcm = (RuntimePrototypeCubeModel *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                   ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                             ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,*pIVar3,
                              method_00);
            pRVar1 = (this->fields)._.prototypeCubeModel;
            if (pRVar1 != (RuntimePrototypeCubeModel *)0x0) {
              bVar4 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_CompareGeometry
                                (pRVar1,rpcm,(MethodInfo *)0x0);
              return bVar4;
            }
          }
        }
      }
    }
  }
  func_?();
  pOVar2 = extraout_EDX;
code_?:
  func_?(pOVar2,unaff_ESI);
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}


/* Void DeSelect() */

void Assembly-CSharp.dll::MVCubeModelInstance::MVCubeModelInstance_DeSelect
               (MVCubeModelInstance *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  (*(this->klass->vtable).RemoveSelectionBox.methodPtr)
            (this,(this->klass->vtable).RemoveSelectionBox.method);
  pTVar1 = (this->fields).transformGizmo;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pTVar1 = (this->fields).transformGizmo;
    if (pTVar1 == (TransformGizmo *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    IngameController::MVEditor::TransformGizmo::TransformGizmo_Deactivate(pTVar1,(MethodInfo *)0x0);
  }
  MVWorldObjectClient::MVWorldObjectClient_set_Selected
            ((MVWorldObjectClient *)this,0,(MethodInfo *)0x0);
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::MVCubeModelInstance::MVCubeModelInstance_Destroy
               (MVCubeModelInstance *this,MethodInfo *method)

{
  pRVar1 = (this->fields)._.prototypeCubeModel;
  if (pRVar1 != (RuntimePrototypeCubeModel *)0x0) {
    RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_RemoveReferenceFromAllChunks
              (pRVar1,(MethodInfo *)0x0);
    pRVar1 = (this->fields)._.prototypeCubeModel;
    if (pRVar1 != (RuntimePrototypeCubeModel *)0x0) {
      RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_RemoveInstance
                (pRVar1,(this->fields)._._._.id,(MethodInfo *)0x0);
      if ((this->fields).cullingSubscriberBase != (CullingSubscriberBase *)0x0) {
        CullingSubscriberBase::CullingSubscriberBase_Destroy
                  ((this->fields).cullingSubscriberBase,(MethodInfo *)0x0);
        (this->fields).cullingSubscriberBase = (CullingSubscriberBase *)0x0;
        func_?(&(this->fields).cullingSubscriberBase);
      }
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      MVWorldObjectClient::MVWorldObjectClient_Destroy
                ((MVWorldObjectClient *)this,(MethodInfo *)0x0);
      pRVar1 = (this->fields)._.prototypeCubeModel;
      if (pRVar1 != (RuntimePrototypeCubeModel *)0x0) {
        this_00 = (Action_1_Object_ *)func_?();
        unaff_EBX = (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector___Class
                     *)0x0;
        if (this_00 != (Action_1_Object_ *)0x0) {
          mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
                    (this_00,(Object *)this,
                     (this->klass->vtable).DirtyChunksRegeneratedHandler.method,(MethodInfo *)0x0);
          this = (MVCubeModelInstance *)
                 mscorlib.dll::System::Delegate::Delegate_Remove
                           ((Delegate *)this_00,(Delegate *)this_00,(MethodInfo *)0x0);
          unaff_EBX = 
          TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>
          ;
          if (this == (MVCubeModelInstance *)0x0) {
            (pRVar1->fields).DirtyChunksRegenerated =
                 (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)0x0;
            pMStack2 = (MVCubeModelInstance *)&(pRVar1->fields).DirtyChunksRegenerated;
            pAStack3 =
                 (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector___Class *)
                 this;
            func_?();
            return;
          }
          pAStack3 =
               TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>
          ;
          pMStack2 = this;
          pAVar4 = (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)
                   func_?();
          if (pAVar4 != (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)
                        0x0) {
            (pRVar1->fields).DirtyChunksRegenerated = pAVar4;
            unaff_EBX = 
            TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>
            ;
            pAStack3 =
                 TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>
            ;
            pMStack2 = this;
            pAStack3 =
                 (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector___Class *)
                 func_?();
            if (pAStack3 !=
                (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector___Class *)
                0x0) {
              pMStack2 = (MVCubeModelInstance *)&(pRVar1->fields).DirtyChunksRegenerated;
              func_?();
              return;
            }
          }
          goto code_?;
        }
      }
    }
  }
  func_?();
code_?:
  pMStack2 = this;
  pAStack3 = unaff_EBX;
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void DrawTransformGizmo() */

void Assembly-CSharp.dll::MVCubeModelInstance::MVCubeModelInstance_DrawTransformGizmo
               (MVCubeModelInstance *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    IngameController__MVEditor__TransformGizmo_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<IngameController::MVEditor::TransformGizmo>__
                   );
    func_?(&
                    IngameController__MVEditor__TransformGizmo_MethodInfo__UnityEngine__Object__Instantiate<IngameController::MVEditor::TransformGizmo>_IngameController__MVEditor__TransformGizmo__UnityEngine__Transform_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._._.gameObject;
  uStack_2 = 0;
  KStack_3.key._options = 0;
  KStack_3.key._cultureKey = (String *)0x0;
  KStack_3.key._pattern = (String *)0x0;
  KStack_3.value = (Object *)0x0;
  if (pGVar1 == (GameObject *)0x0) goto code_?;
  pTVar4 = (TransformGizmo *)
           Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                     ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)pGVar1,
                      IngameController__MVEditor__TransformGizmo_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<IngameController::MVEditor::TransformGizmo>__
                     );
  (this->fields).transformGizmo = pTVar4;
  func_?(&(this->fields).transformGizmo,pTVar4);
  pTVar4 = (this->fields).transformGizmo;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pTVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar5 == 0) {
    pTVar4 = (this->fields).transformGizmo;
    if (pTVar4 == (TransformGizmo *)0x0) goto code_?;
    IngameController::MVEditor::TransformGizmo::TransformGizmo_Activate(pTVar4,(MethodInfo *)0x0);
    pBVar6 = MVCubeModelBase::MVCubeModelBase_GetBounds
                       (&BStack_7,(MVCubeModelBase *)this,(MethodInfo *)0x0);
    KStack_3.key._options = (int32_t)(pBVar6->m_Center).x;
    KStack_3.key._cultureKey = (String *)(pBVar6->m_Center).y;
    KStack_3.key._pattern = (String *)(pBVar6->m_Center).z;
    KStack_3.value = (Object *)(pBVar6->m_Extents).x;
    uStack_2._0_4_ = (pBVar6->m_Extents).y;
    uStack_2._4_4_ = (pBVar6->m_Extents).z;
    pTVar4 = (this->fields).transformGizmo;
    if (pTVar4 == (TransformGizmo *)0x0) goto code_?;
    pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)pTVar4,(MethodInfo *)0x0);
    this_00 = &KStack_3;
  }
  else {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__PrefabPool);
      cRam_? = '\x01';
    }
    pPVar9 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar9 == (PrefabPool *)0x0) goto code_?;
    pTVar4 = (pPVar9->fields).transformGizmo;
    pGVar1 = (this->fields)._._.gameObject;
    if (pGVar1 == (GameObject *)0x0) goto code_?;
    pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (pGVar1,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pTVar4 = (TransformGizmo *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_5
                       ((Object *)pTVar4,pTVar8,
                        IngameController__MVEditor__TransformGizmo_MethodInfo__UnityEngine__Object__Instantiate<IngameController::MVEditor::TransformGizmo>_IngameController__MVEditor__TransformGizmo__UnityEngine__Transform_
                       );
    (this->fields).transformGizmo = pTVar4;
    func_?(&(this->fields).transformGizmo,pTVar4);
    MVCubeModelBase::MVCubeModelBase_GetBounds(&BStack_7,(MVCubeModelBase *)this,(MethodInfo *)0x0)
    ;
    pTVar4 = (this->fields).transformGizmo;
    if (pTVar4 == (TransformGizmo *)0x0) goto code_?;
    pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)pTVar4,(MethodInfo *)0x0);
    this_00 = (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
               *)&stack0xffffffb4;
  }
  pRVar10 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
           RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
           KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                     ((Regex_CachedCodeEntryKey *)&BStack_7.m_Extents,this_00,(MethodInfo *)0x0);
  if (pTVar8 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
              (pTVar8,(Vector3)*pRVar10,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void EnableCulling() */

void Assembly-CSharp.dll::MVCubeModelInstance::MVCubeModelInstance_EnableCulling
               (MVCubeModelInstance *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__MVCubeModelInstance__OnStateChanged_UnityEngine__CullingGroupEvent_
                   );
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>);
    cRam_? = '\x01';
  }
  this_00 = (UnityAction_1_UnityEngine_Vector2_ *)
            func_?(
                           TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>
                           );
  if (this_00 != (UnityAction_1_UnityEngine_Vector2_ *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[UnityEngine::Vector2]::
    UnityAction_1_UnityEngine_Vector2___ctor
              (this_00,(Object *)this,
               MethodInfo__MVCubeModelInstance__OnStateChanged_UnityEngine__CullingGroupEvent_,
               (MethodInfo *)0x0);
    MVCubeModelInstance_SetupCulling
              (this,(UnityAction_1_UnityEngine_CullingGroupEvent_ *)this_00,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* ChunkInstances+ChunkInstanceVariables GetChunkInstance(IntVector) */

ChunkInstances_ChunkInstanceVariables *
Assembly-CSharp.dll::MVCubeModelInstance::MVCubeModelInstance_GetChunkInstance
          (ChunkInstances_ChunkInstanceVariables *__return_storage_ptr__,MVCubeModelInstance *this,
          IntVector chunkPos,MethodInfo *method)

{
  pCVar1 = (this->fields)._.chunkInstances;
  if (pCVar1 != (ChunkInstances *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Item_MV__WorldObject__IntVector_
                     );
      cRam_? = '\x01';
    }
    this_00 = (pCVar1->fields).chunkInstances;
    if (this_00 !=
        (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)0x0) {
      pCVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
               IntVector,ChunkInstances+ChunkInstanceVariables]::
               Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables__get_Item
                         (&CStack_3,this_00,chunkPos,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Item_MV__WorldObject__IntVector_
                         );
      pBVar4 = pCVar2->collider;
      pMVar5 = pCVar2->renderer;
      pMVar6 = pCVar2->filter;
      __return_storage_ptr__->gameObject = pCVar2->gameObject;
      __return_storage_ptr__->collider = pBVar4;
      __return_storage_ptr__->renderer = pMVar5;
      __return_storage_ptr__->filter = pMVar6;
      return __return_storage_ptr__;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  pCVar2 = (ChunkInstances_ChunkInstanceVariables *)(*pcVar7)();
  return pCVar2;
}


/* Vector3[] GetCorners(Bounds) */

Vector3__Array *
Assembly-CSharp.dll::MVCubeModelInstance::MVCubeModelInstance_GetCorners
          (MVCubeModelInstance *this,Bounds bounds,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IEditModeUI);
    func_?(&TypeInfo__SharedCubeFunctions);
    cRam_? = '\x01';
  }
  MVar1 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  fVar2 = _UNK_?;
  if (MVar1 == MVGameMode__Enum_Edit) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    pIVar3 = TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField;
    if (pIVar3 == (IEditModeUI *)0x0) goto code_?;
    cVar4 = func_?(0,TypeInfo__IEditModeUI,pIVar3);
    fVar2 = _UNK_?;
    if (cVar4 != '\0') {
      fVar2 = _UNK_?;
    }
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar6 = (pVVar5->oneVector).x;
  uVar7 = (pVVar5->oneVector).y;
  fVar8 = (float)uVar6 * _UNK_?;
  fVar9 = (float)uVar7 * _UNK_?;
  fVar10 = (pVVar5->oneVector).z * _UNK_?;
  pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_min
                      ((Vector3 *)&puStack_12,&bounds,(MethodInfo *)0x0);
  uVar13 = pVVar11->y;
  fVar14 = (float)uVar13 + fVar9;
  fVar15 = pVVar11->z + fVar10;
  pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_max
                      ((Vector3 *)&puStack_12,&bounds,(MethodInfo *)0x0);
  uVar16 = pVVar11->x;
  uVar17 = pVVar11->y;
  fVar18 = pVVar11->z;
  fVar19 = (float)uVar16 + fVar8;
  fVar20 = (float)uVar17 + fVar9;
  this_00 = (this->fields)._._.gameObject;
  if (this_00 != (GameObject *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (this_00,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      fVar21 = 0.0;
      pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                          ((Vector3 *)&puStack_12,this_01,(MethodInfo *)0x0);
      fVar2 = fVar2 / pVVar11->y;
      vector.y = fVar14 / fVar2;
      vector.x = fVar21 / fVar2;
      vector.z = fVar15 / fVar2;
      pVVar11 = MathFunctions::MathFunctions_TruncateVector
                          ((Vector3 *)&puStack_12,vector,5,(MethodInfo *)0x0);
      uVar22 = (uint)pVVar11->x;
      fVar14 = pVVar11->z;
      vector_00.y = fVar20 / fVar2;
      vector_00.x = fVar19 / fVar2;
      vector_00.z = (fVar18 + fVar10) / fVar2;
      pVVar11 = MathFunctions::MathFunctions_TruncateVector
                          ((Vector3 *)&puStack_12,vector_00,5,(MethodInfo *)0x0);
      uVar23._0_4_ = pVVar11->x;
      uVar23._4_4_ = pVVar11->y;
      fVar15 = pVVar11->z;
      vector_01.y = 0.0;
      vector_01.x = (float)uVar22;
      vector_01.z = fVar14;
      pVVar11 = MathFunctions::MathFunctions_FloorVector
                          ((Vector3 *)&puStack_12,vector_01,(MethodInfo *)0x0);
      fVar18 = pVVar11->x;
      fVar21 = 0.0;
      pVVar11 = (Vector3 *)&puStack_12;
      puVar24 = &UNK_?;
      vector_02.z = fVar15;
      vector_02.x = (float)(int)uVar23;
      vector_02.y = (float)(int)((ulonglong)uVar23 >> 0x20);
      pVVar25 = MathFunctions::MathFunctions_CeilVector(pVVar11,vector_02,(MethodInfo *)0x0);
      fVar14 = pVVar25->x;
      fVar15 = pVVar25->y;
      fVar19 = pVVar25->z;
      fVar10 = (float)puVar24 * fVar2 - fVar9;
      fVar21 = (float)pVVar11 * fVar2 - fVar21;
      fVar20 = 0.0;
      pRVar26 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
                RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                          ((Regex_CachedCodeEntryKey *)&puStack_12,
                           (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                            *)&bounds,(MethodInfo *)0x0);
      uVar27 = pRVar26->_options;
      uVar28 = pRVar26->_cultureKey;
      puStack_12 = (undefined *)((fVar18 * fVar2 - fVar8) - (float)uVar27);
      pSVar29 = (String *)(fVar10 - (float)uVar28);
      pSVar30 = (String *)(fVar21 - (float)pRVar26->_pattern);
      fVar9 = fVar15 * fVar2 - fVar9;
      fVar20 = fVar19 * fVar2 - fVar20;
      pRVar26 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
                RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                          ((Regex_CachedCodeEntryKey *)&stack0xffffffa0,
                           (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                            *)&bounds,(MethodInfo *)0x0);
      uVar31 = pRVar26->_options;
      uVar32 = pRVar26->_cultureKey;
      pSVar33 = (String *)((fVar14 * fVar2 - fVar8) - (float)uVar31);
      pSVar34 = (String *)(fVar9 - (float)uVar32);
      fVar20 = fVar20 - (float)pRVar26->_pattern;
      bounds.m_Center.x = fVar20;
      if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
        bounds.m_Center.y = (float)TypeInfo__SharedCubeFunctions;
        bounds.m_Center.x = (float)&UNK_?;
        func_?();
        bounds.m_Center.x = fVar20;
      }
      bounds.m_Center.y = 0.0;
      min.y = (float)pSVar29;
      min.x = (float)puStack_12;
      min.z = (float)pSVar30;
      max.y = (float)pSVar34;
      max.x = (float)pSVar33;
      max.z = bounds.m_Center.x;
      pVVar35 = SharedCubeFunctions::SharedCubeFunctions_GetCorners_2(min,max,(MethodInfo *)0x0);
      return pVVar35;
    }
  }
code_?:
  func_?();
  pcVar36 = (code *)swi(3);
  pVVar35 = (Vector3__Array *)(*pcVar36)();
  return pVVar35;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVCubeModelInstance::MVCubeModelInstance_Initialize
               (MVCubeModelInstance *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
                   );
    cRam_? = '\x01';
  }
  MVWorldObjectClient::MVWorldObjectClient_Initialize((MVWorldObjectClient *)this,(MethodInfo *)0x0)
  ;
  source = (this->fields)._._.gameObject;
  if (source != (GameObject *)0x0) {
    pIVar1 = Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                       ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)source,
                        UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
                       );
    pMVar2 = (MonitorData *)0x0;
    if (pIVar1 != (IEnumerable_1_System_Object_ *)0x0) {
      pIVar3 = pIVar1 + 2;
      for (; (int)pMVar2 < (int)pIVar1[1].monitor; pMVar2 = pMVar2 + 1) {
        if (pIVar1[1].monitor <= pMVar2) goto code_?;
        if (pIVar3->klass == (IEnumerable_1_System_Object___Class *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                  ((Renderer *)pIVar3->klass,0,(MethodInfo *)0x0);
        pIVar3 = (IEnumerable_1_System_Object_ *)&pIVar3->monitor;
      }
      iVar4 = (this->fields)._._._.groupId;
      this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (this_00 != (MVNetworkGame *)0x0) {
        this_01 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                            (this_00,(MethodInfo *)0x0);
        if (this_01 != (MVWorldObjectClientManager *)0x0) {
          pMVar5 = MVWorldObjectClientManager::MVWorldObjectClientManager_get_RootGroup
                             (this_01,(MethodInfo *)0x0);
          if (pMVar5 != (MVGroup *)0x0) {
            if (iVar4 == (pMVar5->fields)._._.id) {
              if (cRam_? == '\0') {
                func_?();
                func_?();
                cRam_? = '\x01';
              }
              this_02 = (UnityAction_1_UnityEngine_Vector2_ *)
                        func_?(
                                       TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>
                                       );
              if (this_02 == (UnityAction_1_UnityEngine_Vector2_ *)0x0) goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[UnityEngine::Vector2]::
              UnityAction_1_UnityEngine_Vector2___ctor
                        (this_02,(Object *)this,
                         MethodInfo__MVCubeModelInstance__OnStateChanged_UnityEngine__CullingGroupEvent_
                         ,(MethodInfo *)0x0);
              MVCubeModelInstance_SetupCulling
                        (this,(UnityAction_1_UnityEngine_CullingGroupEvent_ *)this_02,
                         (MethodInfo *)0x0);
            }
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Boolean IsLodVisible(CullingGroupEvent) */

bool Assembly-CSharp.dll::MVCubeModelInstance::MVCubeModelInstance_IsLodVisible
               (MVCubeModelInstance *this,CullingGroupEvent cullingGroupEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CullingApiWrapper);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).cullingSubscriberBase;
  if (pCVar1 != (CullingSubscriberBase *)0x0) {
    distanceBandIndex = (pCVar1->fields)._DistanceBandIndex_k__BackingField;
    if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CullingApiWrapper);
    }
    bVar2 = CullingApiWrapper::CullingApiWrapper_Visible
                      (cullingGroupEvent,distanceBandIndex,(MethodInfo *)0x0);
    return bVar2;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Void OnChanged(HashSet`1[MV.WorldObject.IntVector]) */

void Assembly-CSharp.dll::MVCubeModelInstance::MVCubeModelInstance_OnChanged
               (MVCubeModelInstance *this,HashSet_1_MV_WorldObject_IntVector_ *chunks,
               MethodInfo *method)

{
  MVCubeModelInstance_SetCullSphereToMeshBounds(this,(MethodInfo *)0x0);
  return;
}


/* Void OnContextMenu() */

void Assembly-CSharp.dll::MVCubeModelInstance::MVCubeModelInstance_OnContextMenu
               (MVCubeModelInstance *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  x = (this->fields).transformGizmo;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  if (((this->fields).transformGizmo != (TransformGizmo *)0x0) &&
     (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          (in_stack_2,(MethodInfo *)0x0), this_00 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,0,(MethodInfo *)0x0);
    return;
  }
  func_?();
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean OnEnterObject(EditorStateMachine) */

bool Assembly-CSharp.dll::MVCubeModelInstance::MVCubeModelInstance_OnEnterObject
               (MVCubeModelInstance *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__EditorEvent);
    func_?(&StringLiteral_OnEnter_called_with_no_seletect_);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  this_00 = e;
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)e,(MethodInfo *)0x0);
  if (this_00 != (EditorStateMachine *)0x0) {
    pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(this_00,(MethodInfo *)0x0);
    if (pMVar1 == (MVWorldObjectClient *)0x0) {
      EditorStateMachine::EditorStateMachine_SelectWO(this_00,iRam_?,0,1,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)StringLiteral_OnEnter_called_with_no_seletect_,(MethodInfo *)0x0);
    }
    ppEStack2 = &e;
    e = (EditorStateMachine *)0x0;
    pEStack3 = TypeInfo__EditorEvent;
    value = (Object *)func_?();
    method = (MethodInfo *)&UNK_?;
    FSMEntity::FSMEntity_set_Event((FSMEntity *)this_00,value,(MethodInfo *)0x0);
    return 1;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Void OnPositionChanged(MVWorldObjectClient, PositionChangedEventArgs) */

void Assembly-CSharp.dll::MVCubeModelInstance::MVCubeModelInstance_OnPositionChanged
               (MVCubeModelInstance *this,MVWorldObjectClient *wo,
               PositionChangedEventArgs *positionChangedEventArgs,MethodInfo *method)

{
  this_00 = (this->fields).cullingSubscriberBase;
  if (positionChangedEventArgs != (PositionChangedEventArgs *)0x0) {
    uVar1 = (positionChangedEventArgs->fields).NewPos.x;
    uVar2 = (positionChangedEventArgs->fields).NewPos.y;
    uVar3 = (this->fields).positionOffset.x;
    uVar4 = (this->fields).positionOffset.y;
    if (this_00 != (CullingSubscriberBase *)0x0) {
      value.y = (float)uVar2 - (float)uVar4;
      value.x = (float)uVar1 - (float)uVar3;
      value.z = (positionChangedEventArgs->fields).NewPos.z - (this->fields).positionOffset.z;
      CullingSubscriberBase::CullingSubscriberBase_set_Position(this_00,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnStateChanged(CullingGroupEvent) */

void Assembly-CSharp.dll::MVCubeModelInstance::MVCubeModelInstance_OnStateChanged
               (MVCubeModelInstance *this,CullingGroupEvent cullingGroupEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CullingApiWrapper);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).cullingSubscriberBase;
  if (pCVar1 != (CullingSubscriberBase *)0x0) {
    distanceBandIndex = (pCVar1->fields)._DistanceBandIndex_k__BackingField;
    if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CullingApiWrapper);
    }
    bVar2 = CullingApiWrapper::CullingApiWrapper_Visible
                      (cullingGroupEvent,distanceBandIndex,(MethodInfo *)0x0);
    this_00 = (this->fields)._.prototypeCubeModel;
    (this->fields).isVisible = bVar2;
    if (bVar2 == 0) {
      if (this_00 != (RuntimePrototypeCubeModel *)0x0) {
        RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_RemoveReferenceFromAllChunks
                  (this_00,(MethodInfo *)0x0);
        MVCubeModelInstance_SetLod(this,0,(MethodInfo *)0x0);
        return;
      }
    }
    else if (this_00 != (RuntimePrototypeCubeModel *)0x0) {
      RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_AddReferenceToAllChunks
                (this_00,(MethodInfo *)0x0);
      MVCubeModelInstance_SetLod(this,1,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetCullDistanceBand(Int32) */

void Assembly-CSharp.dll::MVCubeModelInstance::MVCubeModelInstance_SetCullDistanceBand
               (MVCubeModelInstance *this,int32_t distanceBandIndex,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pCVar2 = (this->fields).cullingSubscriberBase;
  if (pCVar2 != (CullingSubscriberBase *)0x0) {
    (pCVar2->fields)._DistanceBandIndex_k__BackingField = distanceBandIndex;
    return;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetCullSphereToMeshBounds() */

void Assembly-CSharp.dll::MVCubeModelInstance::MVCubeModelInstance_SetCullSphereToMeshBounds
               (MVCubeModelInstance *this,MethodInfo *method)

{
  pDStack_1 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                *)0x0;
  pBVar2 = MVCubeModelBase::MVCubeModelBase_GetWorldBounds
                     ((Bounds *)&stack0xffffffcc,(MVCubeModelBase *)this,(MethodInfo *)0x0);
  this_00 = (this->fields).cullingSubscriberBase;
  pDStack_1 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                *)(pBVar2->m_Center).x;
  pRVar3 = mscorlib.dll::System::Collections::Generic::
           Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::
           RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
           Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                     (&RStack_4,
                      (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                       *)&pDStack_1,(MethodInfo *)0x0);
  RStack_5._options = pRVar3->_options;
  RStack_5._cultureKey = pRVar3->_cultureKey;
  RStack_5._pattern = pRVar3->_pattern;
  fVar6 = (float10)func_?(&RStack_5,0);
  pRVar3 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
           RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
           KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                     (&RStack_5,
                      (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                       *)&pDStack_1,(MethodInfo *)0x0);
  if (this_00 != (CullingSubscriberBase *)0x0) {
    pDStack_1 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                  *)&UNK_?;
    CullingSubscriberBase::CullingSubscriberBase_Setup
              (this_00,(float)fVar6,(Vector3)*pRVar3,(MethodInfo *)0x0);
    puVar7 = (undefined8 *)(*(this->klass->vtable).get_WorldPosition_1.methodPtr)();
    RStack_4._0_8_ = *puVar7;
    RStack_4._pattern = *(String **)(puVar7 + 1);
    pDStack_1 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                  *)&UNK_?;
    pRVar3 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
             RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
             KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                       (&RStack_8,
                        (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                         *)&pDStack_1,(MethodInfo *)0x0);
    uVar9 = pRVar3->_options;
    uVar10 = pRVar3->_cultureKey;
    pSVar11 = pRVar3->_pattern;
    (this->fields).positionOffset.x = (float)RStack_4._options - (float)uVar9;
    (this->fields).positionOffset.y = (float)RStack_4._cultureKey - (float)uVar10;
    (this->fields).positionOffset.z = (float)RStack_4._pattern - (float)pSVar11;
    return;
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void SetLod(Boolean) */

void Assembly-CSharp.dll::MVCubeModelInstance::MVCubeModelInstance_SetLod
               (MVCubeModelInstance *this,bool enabled,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__IEnumerable);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Value__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                   );
    cRam_? = '\x01';
  }
  pCVar4 = (this->fields)._.chunkInstances;
  if (pCVar4 != (ChunkInstances *)0x0) {
    piVar5 = (int *)func_?(0,TypeInfo__System__Collections__IEnumerable,pCVar4);
    uStack_1 = 1;
    while (piVar5 != (int *)0x0) {
      cVar6 = func_?(0,TypeInfo__System__Collections__IEnumerator,piVar5);
      if (cVar6 == '\0') {
        uStack_1 = 0xffffffff;
        iVar7 = func_?(piVar5,TypeInfo__System__IDisposable);
        if (iVar7 != 0) {
          func_?(0,TypeInfo__System__IDisposable,iVar7);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if (piVar5 == (int *)0x0) break;
      uVar8 = 0;
      uVar9 = *(ushort *)(*piVar5 + 0xb2);
      if (uVar9 != 0) {
        do {
          if (*(IEnumerator__Class **)(*(int *)(*piVar5 + 0x58) + (uint)uVar8 * 8) ==
              TypeInfo__System__Collections__IEnumerator) {
            puVar10 = (undefined4 *)
                     (*(int *)(*(int *)(*piVar5 + 0x58) + 4 + (uint)uVar8 * 8) * 8 + 0xc4 + *piVar5)
            ;
            goto code_?;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar9);
      }
      puVar10 = (undefined4 *)func_?(piVar5,TypeInfo__System__Collections__IEnumerator,1);
code_?:
      piVar11 = (int *)(*(code *)*puVar10)(piVar5,puVar10[1]);
      uVar12 = CONCAT44(TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                        ,piVar11);
      if (piVar11 == (int *)0x0) break;
      if (*(Il2CppClass **)(*piVar11 + 0x20) !=
          (
          TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
          ->_0).element_class) goto code_?;
      iVar7 = func_?(piVar11);
      pRStack_13 = (Renderer *)*(undefined8 *)(iVar7 + 0x10);
      if (pRStack_13 == (Renderer *)0x0) break;
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                (pRStack_13,enabled,(MethodInfo *)0x0);
    }
  }
  uVar12 = func_?();
code_?:
  func_?(uVar12);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void SetupCulling(UnityAction`1[UnityEngine.CullingGroupEvent]) */

void Assembly-CSharp.dll::MVCubeModelInstance::MVCubeModelInstance_SetupCulling
               (MVCubeModelInstance *this,
               UnityAction_1_UnityEngine_CullingGroupEvent_ *onStateChanged,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>
                   );
    func_?(&TypeInfo__CullingSubscriberBase);
    func_?(&
                    MethodInfo__MVCubeModelInstance__OnChanged_System__Collections__Generic__HashSet<MV::WorldObject::IntVector>_
                   );
    func_?(&
                    MethodInfo__MVCubeModelInstance__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                   );
    func_?(&
                    MethodInfo__MVCubeModelInstance__OnRotationChanged_MVWorldObjectClient__RotationChangedEventArgs_
                   );
    func_?(&
                    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                   );
    func_?(&
                    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_RotationChangedEventArgs>
                   );
    cRam_? = '\x01';
  }
  this_00 = (CullingSubscriberBase *)func_?(TypeInfo__CullingSubscriberBase);
  if (this_00 != (CullingSubscriberBase *)0x0) {
    CullingSubscriberBase::CullingSubscriberBase__ctor_1(this_00,onStateChanged,(MethodInfo *)0x0);
    (this->fields).cullingSubscriberBase = this_00;
    func_?(&(this->fields).cullingSubscriberBase,this_00);
    MVCubeModelInstance_SetCullSphereToMeshBounds(this,(MethodInfo *)0x0);
    pUVar1 = (this->fields)._._.PositionChanged;
    pUVar2 = (UnityAction_2_System_Object_System_Object_ *)
             func_?(
                            TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                            );
    if (pUVar2 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (pUVar2,(Object *)this,
                 MethodInfo__MVCubeModelInstance__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                 ,(MethodInfo *)0x0);
      pDVar3 = mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pUVar1,(Delegate *)pUVar2,(MethodInfo *)0x0);
      if (pDVar3 == (Delegate *)0x0) {
        (this->fields)._._.PositionChanged =
             (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
      }
      else {
        pUVar1 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)func_?();
        if (pUVar1 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0)
        goto code_?;
        (this->fields)._._.PositionChanged = pUVar1;
        iVar4 = func_?();
        if (iVar4 == 0) goto code_?;
      }
      func_?();
      pUVar5 = (this->fields)._._.RotationChanged;
      pUVar2 = (UnityAction_2_System_Object_System_Object_ *)func_?();
      if (pUVar2 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (pUVar2,(Object *)this,
                   MethodInfo__MVCubeModelInstance__OnRotationChanged_MVWorldObjectClient__RotationChangedEventArgs_
                   ,(MethodInfo *)0x0);
        pDVar3 = mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)pUVar5,(Delegate *)pUVar2,(MethodInfo *)0x0);
        if (pDVar3 == (Delegate *)0x0) {
          (this->fields)._._.RotationChanged =
               (UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs_ *)0x0;
        }
        else {
          pUVar5 = (UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs_ *)func_?();
          if (pUVar5 == (UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs_ *)0x0)
          goto code_?;
          (this->fields)._._.RotationChanged = pUVar5;
          iVar4 = func_?();
          if (iVar4 == 0) goto code_?;
        }
        func_?();
        pAVar6 = (this->fields)._.ChunksChanged;
        this_01 = (Action_1_Object_ *)func_?();
        if (this_01 != (Action_1_Object_ *)0x0) {
          mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
                    (this_01,(Object *)this,
                     MethodInfo__MVCubeModelInstance__OnChanged_System__Collections__Generic__HashSet<MV::WorldObject::IntVector>_
                     ,(MethodInfo *)0x0);
          pDVar3 = mscorlib.dll::System::Delegate::Delegate_Combine
                             ((Delegate *)pAVar6,(Delegate *)this_01,(MethodInfo *)0x0);
          if (pDVar3 == (Delegate *)0x0) {
            (this->fields)._.ChunksChanged =
                 (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)0x0;
code_?:
            func_?();
            return;
          }
          pAVar6 = (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)
                   func_?();
          if (pAVar6 != (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)
                        0x0) {
            (this->fields)._.ChunksChanged = pAVar6;
            iVar4 = func_?();
            if (iVar4 != 0) goto code_?;
          }
          goto code_?;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* MVCubeModelInstance(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient],
   Dictionary`2[System.Int32,RuntimePrototypeCubeModel]) */

void Assembly-CSharp.dll::MVCubeModelInstance::MVCubeModelInstance__ctor
               (MVCubeModelInstance *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,
               Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *prototypes,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->zeroVector).y;
  fVar3 = (pVVar1->zeroVector).z;
  (this->fields).positionOffset.x = (pVVar1->zeroVector).x;
  (this->fields).positionOffset.y = fVar2;
  (this->fields).positionOffset.z = fVar3;
  MVCubeModelBase::MVCubeModelBase__ctor
            ((MVCubeModelBase *)this,data,worldObjects,prototypes,(MethodInfo *)0x0);
  piVar4 = &(this->fields)._._.interactionFlags;
  *(uint *)piVar4 = (uint)*piVar4 | 0x803383;
  puVar5 = (uint *)((int)&(this->fields)._._.interactionFlags + 4);
  *puVar5 = *puVar5 | 0x40;
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    pMVar6 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if (pMVar6 != (MVLocalPlayer *)0x0) {
      if (((pMVar6->fields)._._UserProfileData_k__BackingField != (UserProfileData *)0x0) &&
         ((((pMVar6->fields)._._UserProfileData_k__BackingField)->fields).IsAdmin != 0)) {
        iVar7 = (this->fields)._._.interactionFlags;
        puVar5 = (uint *)((int)&(this->fields)._._.interactionFlags + 4);
        *puVar5 = *puVar5 | 0x80;
        *(int *)&(this->fields)._._.interactionFlags = (int)iVar7;
      }
      pRVar8 = (this->fields)._.prototypeCubeModel;
      if (pRVar8 != (RuntimePrototypeCubeModel *)0x0) {
        if (((pMVar6->fields)._._ProfileID_k__BackingField ==
             (pRVar8->fields)._AuthorProfileID_k__BackingField) &&
           (((this->fields)._._.interactionFlags & 0x4000) != 0)) {
          uVar9 = *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4);
          piVar4 = &(this->fields)._._.interactionFlags;
          *(uint *)piVar4 = (uint)*piVar4 | 0x4000;
          *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) = uVar9;
          return;
        }
        uVar9 = *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4);
        piVar4 = &(this->fields)._._.interactionFlags;
        *(uint *)piVar4 = (uint)*piVar4 & 0xffffbfff;
        *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) = uVar9;
        return;
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void set_IsVisibleSet(Boolean) */

void Assembly-CSharp.dll::MVCubeModelInstance::MVCubeModelInstance_set_IsVisibleSet
               (MVCubeModelInstance *this,bool value,MethodInfo *method)

{
  (this->fields).isVisible = value;
  return;
}

