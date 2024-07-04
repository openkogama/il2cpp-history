
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
  pGVar1 = (this->fields)._._.gameObject;
  if (pGVar1 != (GameObject *)0x0) {
    this_00 = (PreviewBox *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::
              GameObject_GetComponentInChildren_1
                        (pGVar1,
                         PreviewBox_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<PreviewBox>__
                        );
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)this_00,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pGVar1 = MVWorldObjectClient::MVWorldObjectClient_CreateBox
                         ((MVWorldObjectClient *)this,StringLiteral_PreviewBox,1.005,
                          (MethodInfo *)0x0);
      if (pGVar1 == (GameObject *)0x0) goto code_?;
      this_00 = (PreviewBox *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                          (pGVar1,
                           PreviewBox_MethodInfo__UnityEngine__GameObject__AddComponent<PreviewBox>__
                          );
    }
    pBVar3 = MVCubeModelBase::MVCubeModelBase_GetBounds
                       (&BStack_4,(MVCubeModelBase *)this,(MethodInfo *)0x0);
    fStack_5 = (pBVar3->m_Center).x;
    fStack_6 = (pBVar3->m_Center).y;
    fStack_7 = (pBVar3->m_Center).z;
    fStack_8 = (pBVar3->m_Extents).x;
    uStack_9._0_4_ = (pBVar3->m_Extents).y;
    uStack_9._4_4_ = (pBVar3->m_Extents).z;
    if (this_00 != (PreviewBox *)0x0) {
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this_00,(MethodInfo *)0x0);
      if (this_01 != (Transform *)0x0) {
        value.y = fStack_6;
        value.x = fStack_5;
        value.z = fStack_7;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                  (this_01,value,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?(&TypeInfo__PrefabPool);
          cRam_? = '\x01';
        }
        pPVar10 = TypeInfo__PrefabPool->static_fields->instance;
        if (pPVar10 != (PrefabPool *)0x0) {
          material = (pPVar10->fields).previewBoxMaterial;
          bounds.m_Center.y = fStack_6;
          bounds.m_Center.x = fStack_5;
          bounds.m_Center.z = fStack_7;
          bounds.m_Extents.x = fStack_8;
          bounds.m_Extents.y = (float)(int)uStack_9;
          bounds.m_Extents.z = (float)((ulonglong)uStack_9 >> 0x20);
          corners = MVCubeModelInstance_GetCorners(this,bounds,(MethodInfo *)0x0);
          PreviewBox::PreviewBox_Show(this_00,material,corners,(MethodInfo *)0x0);
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
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::
              GameObject_GetComponentInChildren_1
                        (pGVar1,
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
                        ((Bounds *)&stack0xffffffcc,(MVCubeModelBase *)this,(MethodInfo *)0x0);
    value = pBVar3->m_Center;
    uVar4 = (pBVar3->m_Extents).z;
    uVar5 = (pBVar3->m_Center).x;
    uVar6 = (pBVar3->m_Center).y;
    uVar7 = (pBVar3->m_Center).z;
    bounds.m_Center.z = (float)uVar7;
    bounds.m_Center.y = (float)uVar6;
    bounds.m_Center.x = (float)uVar5;
    uVar8 = (pBVar3->m_Extents).x;
    uVar9 = (pBVar3->m_Extents).y;
    bounds.m_Extents.y = (float)uVar9;
    bounds.m_Extents.x = (float)uVar8;
    if (this_00 != (SelectionBox *)0x0) {
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this_00,(MethodInfo *)0x0);
      if (this_01 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                  (this_01,value,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?(&TypeInfo__PrefabPool);
          cRam_? = '\x01';
        }
        pPVar10 = TypeInfo__PrefabPool->static_fields->instance;
        if (pPVar10 != (PrefabPool *)0x0) {
          material = (pPVar10->fields).selectBoxMaterial;
          bounds.m_Extents.z = (float)uVar4;
          corners = MVCubeModelInstance_GetCorners(this,bounds,(MethodInfo *)0x0);
          SelectionBox::SelectionBox_FadeIn(this_00,0.2,material,corners,(MethodInfo *)0x0);
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
    if (((wo->klass->_1).naturalAligment < (TypeInfo__MVCubeModelInstance->_1).naturalAligment) ||
       ((MVCubeModelInstance__Class *)
        (wo->klass->_1).typeHierarchy[(TypeInfo__MVCubeModelInstance->_1).naturalAligment - 1] !=
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
  pIVar2 = unaff_ESI;
  if (pRVar1 != (RuntimePrototypeCubeModel *)0x0) {
    *insertedByProfileId = (pRVar1->fields)._AuthorProfileID_k__BackingField;
    if (koGaMaPackageClient != (KoGaMaPackageClient *)0x0) {
      this_00 = (koGaMaPackageClient->fields).prototypes;
      if ((wo != (MVWorldObjectClient *)0x0) &&
         (this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                    (wo->fields)._.data,
         this_01 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)) {
        TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          (this_01,(Object *)StringLiteral_protoTypeID,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
        method_00 = 
        MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__get_Item_int_
        ;
        if (this_00 != (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0) {
          pIVar2 = TypeInfo__System__Int32;
          if (TVar3.m_Index != 0) {
            pIVar2 = TypeInfo__System__Int32;
            if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) !=
                (TypeInfo__System__Int32->_0).element_class) goto code_?;
            piVar4 = (int32_t *)func_?(TVar3.m_Index);
            rpcm = (RuntimePrototypeCubeModel *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                   Object]::Dictionary_2_System_Int32_System_Object__get_Item
                             ((Dictionary_2_System_Int32_System_Object_ *)this_00,*piVar4,method_00)
            ;
            pRVar1 = (this->fields)._.prototypeCubeModel;
            pIVar2 = unaff_ESI;
            if (pRVar1 != (RuntimePrototypeCubeModel *)0x0) {
              bVar5 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_CompareGeometry
                                (pRVar1,rpcm,(MethodInfo *)0x0);
              return bVar5;
            }
          }
        }
      }
    }
  }
  func_?();
  TVar3.m_Index = extraout_EDX;
code_?:
  func_?(TVar3.m_Index,pIVar2);
  pcVar6 = (code *)swi(3);
  bVar5 = (*pcVar6)();
  return bVar5;
}


/* Void DeSelect() */

void Assembly-CSharp.dll::MVCubeModelInstance::MVCubeModelInstance_DeSelect
               (MVCubeModelInstance *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  (*(code *)(this->klass->vtable).RemoveSelectionBox.method)
            (this,(this->klass->vtable).RemovePreviewBox.methodPtr);
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
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<EditStateEventArgs>);
    func_?(&
                    MethodInfo__MVCubeModelInstance__MVCubeModelBase_BeingEditedChanged_System__Object__EditStateEventArgs_
                   );
    cRam_? = '\x01';
  }
  pRVar1 = (this->fields)._.prototypeCubeModel;
  if (pRVar1 == (RuntimePrototypeCubeModel *)0x0) {
code_?:
    func_?();
  }
  else {
    RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_RemoveReferenceFromAllChunks
              (pRVar1,(MethodInfo *)0x0);
    pRVar1 = (this->fields)._.prototypeCubeModel;
    if (pRVar1 == (RuntimePrototypeCubeModel *)0x0) goto code_?;
    RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_RemoveInstance
              (pRVar1,(this->fields)._._._.id,(MethodInfo *)0x0);
    if ((this->fields).cullingSubscriberBase != (CullingSubscriberBase *)0x0) {
      CullingSubscriberBase::CullingSubscriberBase_Destroy
                ((this->fields).cullingSubscriberBase,(MethodInfo *)0x0);
      (this->fields).cullingSubscriberBase = (CullingSubscriberBase *)0x0;
      func_?(&(this->fields).cullingSubscriberBase,0);
    }
    unaff_EDI = (UnityAction_2_System_Object_System_Object_ *)
                func_?(TypeInfo__System__EventHandler<EditStateEventArgs>);
    pUVar2 = unaff_EDI;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (unaff_EDI,(Object *)0x0,
               MethodInfo__MVCubeModelInstance__MVCubeModelBase_BeingEditedChanged_System__Object__EditStateEventArgs_
               ,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__EventHandler<EditStateEventArgs>);
      cRam_? = '\x01';
    }
    source_00 = (this->fields)._.BeingEditedChanged;
    do {
      unaff_EDI = (UnityAction_2_System_Object_System_Object_ *)
                  mscorlib.dll::System::Delegate::Delegate_Remove
                            ((Delegate *)source_00,(Delegate *)unaff_EDI,(MethodInfo *)0x0);
      in_stack_3 = TypeInfo__System__EventHandler<EditStateEventArgs>;
      if (unaff_EDI == (UnityAction_2_System_Object_System_Object_ *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = func_?(unaff_EDI,TypeInfo__System__EventHandler<EditStateEventArgs>,
                                TypeInfo__System__EventHandler<EditStateEventArgs>);
        if (iVar4 == 0) goto code_?;
      }
      unaff_EDI = pUVar2;
      pEVar5 = (EventHandler_1_EditStateEventArgs_ *)
               func_?(&(this->fields)._.BeingEditedChanged,iVar4,source_00);
      bVar6 = pEVar5 != source_00;
      source_00 = pEVar5;
      pUVar2 = unaff_EDI;
    } while (bVar6);
    if (cRam_? == '\0') {
      func_?(&
                      TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>
                     );
      cRam_? = '\x01';
    }
    MVWorldObjectClient::MVWorldObjectClient_Destroy((MVWorldObjectClient *)this,(MethodInfo *)0x0);
    pRVar1 = (this->fields)._.prototypeCubeModel;
    if (pRVar1 == (RuntimePrototypeCubeModel *)0x0) goto code_?;
    source = (pRVar1->fields).DirtyChunksRegenerated;
    this_00 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *)func_?(
                                TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>
                                );
    DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
    DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (this_00,(Object *)this,this->klass[1]._0.image,(MethodInfo *)0x0);
    unaff_EDI = (UnityAction_2_System_Object_System_Object_ *)
                mscorlib.dll::System::Delegate::Delegate_Remove
                          ((Delegate *)source,(Delegate *)this_00,(MethodInfo *)0x0);
    if (unaff_EDI == (UnityAction_2_System_Object_System_Object_ *)0x0) {
      (pRVar1->fields).DirtyChunksRegenerated =
           (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)0x0;
      func_?();
      return;
    }
    pvVar7 = (void *)func_?();
    if (pvVar7 == (void *)0x0) goto code_?;
    unaff_EDI[1].fields._._.method_ptr = pvVar7;
    iVar4 = func_?();
    if (iVar4 != 0) {
      func_?();
      return;
    }
  }
  func_?();
code_?:
  func_?();
code_?:
  func_?(unaff_EDI,in_stack_3);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
  if (pGVar1 == (GameObject *)0x0) goto code_?;
  pTVar2 = (TransformGizmo *)
           UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentInChildren_1
                     (pGVar1,
                      IngameController__MVEditor__TransformGizmo_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<IngameController::MVEditor::TransformGizmo>__
                     );
  (this->fields).transformGizmo = pTVar2;
  func_?(&(this->fields).transformGizmo,pTVar2);
  pTVar2 = (this->fields).transformGizmo;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pTVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    pTVar2 = (this->fields).transformGizmo;
    if (pTVar2 == (TransformGizmo *)0x0) goto code_?;
    IngameController::MVEditor::TransformGizmo::TransformGizmo_Activate(pTVar2,(MethodInfo *)0x0);
    pBVar4 = MVCubeModelBase::MVCubeModelBase_GetBounds
                       (&BStack_5,(MVCubeModelBase *)this,(MethodInfo *)0x0);
  }
  else {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__PrefabPool);
      cRam_? = '\x01';
    }
    pPVar6 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar6 == (PrefabPool *)0x0) goto code_?;
    pTVar2 = (pPVar6->fields).transformGizmo;
    pGVar1 = (this->fields)._._.gameObject;
    if (pGVar1 == (GameObject *)0x0) goto code_?;
    pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (pGVar1,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pTVar2 = (TransformGizmo *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_5
                       ((Object *)pTVar2,pTVar7,
                        IngameController__MVEditor__TransformGizmo_MethodInfo__UnityEngine__Object__Instantiate<IngameController::MVEditor::TransformGizmo>_IngameController__MVEditor__TransformGizmo__UnityEngine__Transform_
                       );
    (this->fields).transformGizmo = pTVar2;
    func_?(&(this->fields).transformGizmo,pTVar2);
    pBVar4 = MVCubeModelBase::MVCubeModelBase_GetBounds
                       (&BStack_5,(MVCubeModelBase *)this,(MethodInfo *)0x0);
  }
  fStack_8 = (pBVar4->m_Center).x;
  fStack_9 = (pBVar4->m_Center).y;
  fStack_10 = (pBVar4->m_Center).z;
  fStack_11 = (pBVar4->m_Extents).x;
  uStack_12._0_4_ = (pBVar4->m_Extents).y;
  uStack_12._4_4_ = (pBVar4->m_Extents).z;
  pTVar2 = (this->fields).transformGizmo;
  if (pTVar2 != (TransformGizmo *)0x0) {
    pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)pTVar2,(MethodInfo *)0x0);
    if (pTVar7 != (Transform *)0x0) {
      value.y = fStack_9;
      value.x = fStack_8;
      value.z = fStack_10;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                (pTVar7,value,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
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
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[UnityEngine::Vector2]::
  UnityAction_1_UnityEngine_Vector2___ctor
            (this_00,(Object *)this,
             MethodInfo__MVCubeModelInstance__OnStateChanged_UnityEngine__CullingGroupEvent_,
             (MethodInfo *)0x0);
  MVCubeModelInstance_SetupCulling
            (this,(UnityAction_1_UnityEngine_CullingGroupEvent_ *)this_00,(MethodInfo *)0x0);
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
      iVar4 = (pCVar2->guid)._b;
      iVar5 = (pCVar2->guid)._c;
      uVar6 = (pCVar2->guid)._d;
      uVar7 = (pCVar2->guid)._e;
      uVar8 = (pCVar2->guid)._f;
      uVar9 = (pCVar2->guid)._g;
      uVar10 = (pCVar2->guid)._h;
      uVar11 = (pCVar2->guid)._i;
      uVar12 = (pCVar2->guid)._j;
      uVar13 = (pCVar2->guid)._k;
      bVar14 = pCVar2->transparent;
      uVar15 = *(undefined3 *)&pCVar2->field_0x21;
      (__return_storage_ptr__->guid)._a = (pCVar2->guid)._a;
      (__return_storage_ptr__->guid)._b = iVar4;
      (__return_storage_ptr__->guid)._c = iVar5;
      (__return_storage_ptr__->guid)._d = uVar6;
      (__return_storage_ptr__->guid)._e = uVar7;
      (__return_storage_ptr__->guid)._f = uVar8;
      (__return_storage_ptr__->guid)._g = uVar9;
      (__return_storage_ptr__->guid)._h = uVar10;
      (__return_storage_ptr__->guid)._i = uVar11;
      (__return_storage_ptr__->guid)._j = uVar12;
      (__return_storage_ptr__->guid)._k = uVar13;
      pBVar16 = pCVar2->collider;
      pMVar17 = pCVar2->renderer;
      pMVar18 = pCVar2->filter;
      __return_storage_ptr__->gameObject = pCVar2->gameObject;
      __return_storage_ptr__->collider = pBVar16;
      __return_storage_ptr__->renderer = pMVar17;
      __return_storage_ptr__->filter = pMVar18;
      __return_storage_ptr__->transparent = bVar14;
      *(undefined3 *)&__return_storage_ptr__->field_0x21 = uVar15;
      return __return_storage_ptr__;
    }
  }
  func_?();
  pcVar19 = (code *)swi(3);
  pCVar2 = (ChunkInstances_ChunkInstanceVariables *)(*pcVar19)();
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
  fVar8 = (float)uVar7 * _UNK_?;
  fVar9 = (pVVar5->oneVector).z * _UNK_?;
  puStack_10 = (undefined *)(bounds.m_Center.z - bounds.m_Extents.z);
  fVar11 = (float)uVar6 * _UNK_? + (bounds.m_Center.x - bounds.m_Extents.x);
  fVar12 = fVar9 + (float)puStack_10;
  fVar13 = fVar8 + bounds.m_Extents.y + bounds.m_Center.y;
  fVar14 = fVar9 + bounds.m_Extents.z + bounds.m_Center.z;
  this_00 = (this->fields)._._.gameObject;
  if ((this_00 != (GameObject *)0x0) &&
     (this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (this_00,(MethodInfo *)0x0), this_01 != (Transform *)0x0)) {
    pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                        ((Vector3 *)&puStack_10,this_01,(MethodInfo *)0x0);
    fVar2 = fVar2 / pVVar15->y;
    fVar16 = 7.00649e-45;
    vector.y = (fVar8 + (bounds.m_Center.y - bounds.m_Extents.y)) / fVar2;
    vector.x = fVar11 / fVar2;
    vector.z = fVar12 / fVar2;
    pVVar15 = MathFunctions::MathFunctions_TruncateVector
                        ((Vector3 *)&puStack_10,vector,5,(MethodInfo *)0x0);
    uVar17 = pVVar15->x;
    uVar18 = pVVar15->y;
    fVar11 = pVVar15->z;
    vector_00.y = fVar13 / fVar2;
    vector_00.x = fVar16 / fVar2;
    vector_00.z = fVar14 / fVar2;
    pVVar15 = MathFunctions::MathFunctions_TruncateVector
                        ((Vector3 *)&puStack_10,vector_00,5,(MethodInfo *)0x0);
    uVar19 = pVVar15->x;
    uVar20 = pVVar15->y;
    fVar13 = pVVar15->z;
    vector_01.y = (float)uVar18;
    vector_01.x = (float)uVar17;
    vector_01.z = fVar11;
    MathFunctions::MathFunctions_FloorVector((Vector3 *)&puStack_10,vector_01,(MethodInfo *)0x0);
    puVar21 = &UNK_?;
    vector_02.y = (float)uVar20;
    vector_02.x = (float)uVar19;
    vector_02.z = fVar13;
    pVVar15 = MathFunctions::MathFunctions_CeilVector
                        ((Vector3 *)&puStack_10,vector_02,(MethodInfo *)0x0);
    uVar22 = pVVar15->x;
    uVar23 = pVVar15->y;
    fVar13 = ((float)uVar22 * fVar2 - (float)puVar21) - bounds.m_Center.x;
    fVar11 = ((float)uVar23 * fVar2 - fVar11) - bounds.m_Center.y;
    fVar2 = (pVVar15->z * fVar2 - fVar9) - bounds.m_Center.z;
    if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    min.y = fVar11;
    min.x = fVar13;
    min.z = fVar2;
    max.y = fVar11;
    max.x = fVar13;
    max.z = fVar2;
    pVVar24 = SharedCubeFunctions::SharedCubeFunctions_GetCorners_2(min,max,(MethodInfo *)0x0);
    return pVVar24;
  }
code_?:
  func_?();
  pcVar25 = (code *)swi(3);
  pVVar24 = (Vector3__Array *)(*pcVar25)();
  return pVVar24;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVCubeModelInstance::MVCubeModelInstance_Initialize
               (MVCubeModelInstance *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<EditStateEventArgs>);
    func_?(&
                    MethodInfo__MVCubeModelInstance__MVCubeModelBase_BeingEditedChanged_System__Object__EditStateEventArgs_
                   );
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
                   );
    cRam_? = '\x01';
  }
  MVWorldObjectClient::MVWorldObjectClient_Initialize((MVWorldObjectClient *)this,(MethodInfo *)0x0)
  ;
  this_00 = (this->fields)._._.gameObject;
  if (this_00 != (GameObject *)0x0) {
    pOVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren
                       (this_00,
                        UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
                       );
    uVar2 = 0;
    if (pOVar1 != (Object__Array *)0x0) {
      ppOVar3 = pOVar1->vector;
      for (; (int)uVar2 < (int)pOVar1->max_length; uVar2 = uVar2 + 1) {
        if (pOVar1->max_length <= uVar2) goto code_?;
        if ((Renderer *)*ppOVar3 == (Renderer *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                  ((Renderer *)*ppOVar3,0,(MethodInfo *)0x0);
        ppOVar3 = ppOVar3 + 1;
      }
      iVar4 = (this->fields)._._._.groupId;
      this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (this_01 != (MVNetworkGame *)0x0) {
        this_02 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                            (this_01,(MethodInfo *)0x0);
        if (this_02 != (MVWorldObjectClientManager *)0x0) {
          pMVar5 = MVWorldObjectClientManager::MVWorldObjectClientManager_get_RootGroup
                             (this_02,(MethodInfo *)0x0);
          if (pMVar5 != (MVGroup *)0x0) {
            if (iVar4 == (pMVar5->fields)._._.id) {
              if (cRam_? == '\0') {
                func_?();
                func_?();
                cRam_? = '\x01';
              }
              this_03 = (UnityAction_1_UnityEngine_Vector2_ *)
                        func_?(
                                       TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>
                                       );
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[UnityEngine::Vector2]::
              UnityAction_1_UnityEngine_Vector2___ctor
                        (this_03,(Object *)this,
                         MethodInfo__MVCubeModelInstance__OnStateChanged_UnityEngine__CullingGroupEvent_
                         ,(MethodInfo *)0x0);
              MVCubeModelInstance_SetupCulling
                        (this,(UnityAction_1_UnityEngine_CullingGroupEvent_ *)this_03,
                         (MethodInfo *)0x0);
              this_04 = (UnityAction_2_System_Object_System_Object_ *)
                        func_?(TypeInfo__System__EventHandler<EditStateEventArgs>);
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
              Object]::UnityAction_2_System_Object_System_Object___ctor
                        (this_04,(Object *)0x0,
                         MethodInfo__MVCubeModelInstance__MVCubeModelBase_BeingEditedChanged_System__Object__EditStateEventArgs_
                         ,(MethodInfo *)0x0);
              MVCubeModelBase::MVCubeModelBase_add_BeingEditedChanged
                        ((MVCubeModelBase *)this,(EventHandler_1_EditStateEventArgs_ *)this_04,
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


/* Void MVCubeModelBase_BeingEditedChanged(Object, EditStateEventArgs) */

void Assembly-CSharp.dll::MVCubeModelInstance::
     MVCubeModelInstance_MVCubeModelBase_BeingEditedChanged
               (Object *sender,EditStateEventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVCubeModelBase);
    cRam_? = '\x01';
  }
  if (sender == (Object *)0x0) {
    func_?();
    pMVar1 = extraout_EDX;
  }
  else {
    pMVar1 = TypeInfo__MVCubeModelBase;
    if (((TypeInfo__MVCubeModelBase->_1).naturalAligment <= (sender->klass->_1).naturalAligment) &&
       ((MVCubeModelBase__Class *)
        (sender->klass->_1).typeHierarchy[(TypeInfo__MVCubeModelBase->_1).naturalAligment - 1] ==
        TypeInfo__MVCubeModelBase)) {
      MVCubeModelBase::MVCubeModelBase_ObjectLinkTransparency
                ((MVCubeModelBase *)sender,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(sender,pMVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
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
  this_00 = e;
  if (e != (EditorStateMachine *)0x0) {
    pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
    if (pMVar1 == (MVWorldObjectClient *)0x0) {
      EditorStateMachine::EditorStateMachine_SelectWO
                (this_00,(this->fields)._._._.id,0,1,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        method = (MethodInfo *)&UNK_?;
        func_?();
      }
      method = (MethodInfo *)StringLiteral_OnEnter_called_with_no_seletect_;
      e = (EditorStateMachine *)&UNK_?;
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)StringLiteral_OnEnter_called_with_no_seletect_,(MethodInfo *)0x0);
    }
    ppEStack2 = &e;
    e = (EditorStateMachine *)0x0;
    pEStack3 = TypeInfo__EditorEvent;
    method = (MethodInfo *)func_?();
    e = this_00;
    FSMEntity::FSMEntity_set_Event((FSMEntity *)this_00,(Object *)method,(MethodInfo *)0x0);
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
      value.z = (positionChangedEventArgs->fields).NewPos.z - (this->fields).positionOffset.z;
      value.x = (float)uVar1 - (float)uVar3;
      value.y = (float)uVar2 - (float)uVar4;
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


/* Void Rebuild() */

void Assembly-CSharp.dll::MVCubeModelInstance::MVCubeModelInstance_Rebuild
               (MVCubeModelInstance *this,MethodInfo *method)

{
  pRVar1 = (this->fields)._.prototypeCubeModel;
  if (pRVar1 != (RuntimePrototypeCubeModel *)0x0) {
    uStack_2 = 0xffffffff;
    puStack_3 = &DAT_?;
    uStack_4 = *unaff_FS_OFFSET;
    *unaff_FS_OFFSET = &uStack_4;
    puStack_5 = &stack0xffffff9c;
    puVar6 = &stack0xffffff9c;
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?();
      func_?();
      func_?(&
                      MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_CubeModelChunk>__get_Value__
                     );
      cRam_? = '\x01';
      puVar6 = puStack_5;
    }
    puStack_5 = puVar6;
    DStack_7._dictionary = (Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)0x0;
    DStack_7._version = 0;
    DStack_7._index = 0;
    DStack_7._current.key.x = 0;
    DStack_7._current.key.y = 0;
    DStack_7._getEnumeratorRetType = 0;
    DStack_7._current.key.z = 0;
    DStack_7._current._6_2_ = 0;
    DStack_7._current.value = (Object *)0x0;
    this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)(pRVar1->fields).chunks;
    if (this_00 !=
        (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
         *)0x0) {
      pDVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
               StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
               Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                         (&DStack_9,this_00,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_CubeModelChunk>__GetEnumerator__
                         );
      uStack_10 = 0;
      DStack_7._dictionary =
           (Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar8->_dictionary;
      DStack_7._version = pDVar8->_version;
      DStack_7._index = pDVar8->_index;
      DStack_7._current.key._0_4_ = (pDVar8->_current).key.sheetInstanceID;
      DStack_7._current._4_8_ = *(undefined8 *)&(pDVar8->_current).key.index;
      DStack_7._getEnumeratorRetType = pDVar8->_getEnumeratorRetType;
      uStack_2 = 1;
      pDStack_11 = &DStack_7;
      while( true ) {
        bVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[MV
                ::WorldObject::IntVector,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_System_Object__MoveNext
                          (&DStack_7,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__MoveNext__
                          );
        if (bVar12 == 0) {
          uStack_2 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    ((Object *)&DStack_7,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_CubeModelChunk>__Dispose__
                     ,unaff_EDI);
          *unaff_FS_OFFSET = uStack_4;
          return;
        }
        if ((CubeModelChunk *)DStack_7._current.value == (CubeModelChunk *)0x0) break;
        CubeModelChunk::CubeModelChunk_RebuildChunk
                  ((CubeModelChunk *)DStack_7._current.value,
                   (pRVar1->fields)._Scale_k__BackingField,(MethodInfo *)0x0);
      }
    }
  }
  uVar13 = func_?(&stack0xffffff8c);
  func_?(uVar13);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
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
  pBVar1 = MVCubeModelBase::MVCubeModelBase_GetWorldBounds
                     (&BStack_2,(MVCubeModelBase *)this,(MethodInfo *)0x0);
  this_00 = (this->fields).cullingSubscriberBase;
  fVar3 = (pBVar1->m_Center).x;
  fVar4 = (pBVar1->m_Center).y;
  fVar5 = (pBVar1->m_Center).z;
  uVar6 = (pBVar1->m_Extents).z;
  uStack_7._0_4_ = (pBVar1->m_Extents).x;
  uStack_7._4_4_ = (pBVar1->m_Extents).y;
  uStack_8 = uVar6;
  fVar9 = (float10)func_?(&uStack_7);
  if (this_00 != (CullingSubscriberBase *)0x0) {
    position.y = fVar4;
    position.x = fVar3;
    position.z = fVar5;
    CullingSubscriberBase::CullingSubscriberBase_Setup
              (this_00,(float)fVar9,position,(MethodInfo *)0x0);
    pIVar10 = (this->klass->vtable).set_WorldPosition.methodPtr;
    puVar11 = (undefined8 *)(*(code *)(this->klass->vtable).get_WorldPosition_1.method)();
    fVar3 = *(float *)(puVar11 + 1);
    uStack_7._0_4_ = (float)*puVar11;
    uStack_7._4_4_ = (float)((ulonglong)*puVar11 >> 0x20);
    (this->fields).positionOffset.x = (float)uStack_7 - (float)pIVar10;
    (this->fields).positionOffset.y = uStack_7._4_4_ - fVar4;
    (this->fields).positionOffset.z = fVar3 - fVar5;
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
      uVar9 = *(ushort *)(*piVar5 + 0xb6);
      if (uVar9 != 0) {
        do {
          if (*(IEnumerator__Class **)(*(int *)(*piVar5 + 0x58) + (uint)uVar8 * 8) ==
              TypeInfo__System__Collections__IEnumerator) {
            puVar10 = (undefined4 *)
                     (*piVar5 +
                     (*(int *)(*(int *)(*piVar5 + 0x58) + 4 + (uint)uVar8 * 8) + 0x19) * 8);
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
      pRStack_13 = (Renderer *)*(undefined8 *)(iVar7 + 0x20);
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
  CullingSubscriberBase::CullingSubscriberBase__ctor_1(this_00,onStateChanged,(MethodInfo *)0x0);
  (this->fields).cullingSubscriberBase = this_00;
  func_?(&(this->fields).cullingSubscriberBase,this_00);
  MVCubeModelInstance_SetCullSphereToMeshBounds(this,(MethodInfo *)0x0);
  pUVar1 = (this->fields)._._.PositionChanged;
  pUVar2 = (UnityAction_2_System_Object_System_Object_ *)
           func_?(
                          TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                          );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (pUVar2,(Object *)this,
             MethodInfo__MVCubeModelInstance__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
             ,(MethodInfo *)0x0);
  pDVar3 = mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pUVar1,(Delegate *)pUVar2,(MethodInfo *)0x0);
  pAVar4 = (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector___Class *)
           TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
  ;
  if (pDVar3 == (Delegate *)0x0) {
    (this->fields)._._.PositionChanged =
         (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
    pAStack5 =
         (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector___Class *)0x0;
  }
  else {
    pAStack5 =
         (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector___Class *)
         TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
    pUStack6 =
         (UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs___Class *)&UNK_?;
    pDStack7 = pDVar3;
    pUVar1 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)func_?();
    if (pUVar1 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0)
    goto code_?;
    (this->fields)._._.PositionChanged = pUVar1;
    pAVar4 = (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector___Class *)
             TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
    ;
    pAStack5 =
         (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector___Class *)
         TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
    pUStack6 =
         (UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs___Class *)&UNK_?;
    pDStack7 = pDVar3;
    pAStack5 =
         (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector___Class *)
         func_?();
    if (pAStack5 ==
        (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector___Class *)0x0)
    goto code_?;
  }
  pDStack7 = (Delegate *)&(this->fields)._._.PositionChanged;
  pUStack6 =
       (UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs___Class *)&UNK_?;
  func_?();
  pUStack6 =
       TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_RotationChangedEventArgs>;
  pUVar8 = (this->fields)._._.RotationChanged;
  pUVar2 = (UnityAction_2_System_Object_System_Object_ *)func_?();
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (pUVar2,(Object *)this,
             MethodInfo__MVCubeModelInstance__OnRotationChanged_MVWorldObjectClient__RotationChangedEventArgs_
             ,(MethodInfo *)0x0);
  pDVar3 = mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pUVar8,(Delegate *)pUVar2,(MethodInfo *)0x0);
  pAVar4 = (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector___Class *)
           TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_RotationChangedEventArgs>
  ;
  if (pDVar3 == (Delegate *)0x0) {
    (this->fields)._._.RotationChanged =
         (UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs_ *)0x0;
    pAStack5 =
         (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector___Class *)0x0;
  }
  else {
    pAStack5 =
         (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector___Class *)
         TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_RotationChangedEventArgs>;
    pUStack6 =
         (UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs___Class *)&UNK_?;
    pDStack7 = pDVar3;
    pUVar8 = (UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs_ *)func_?();
    if (pUVar8 == (UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs_ *)0x0)
    goto code_?;
    (this->fields)._._.RotationChanged = pUVar8;
    pAVar4 = (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector___Class *)
             TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_RotationChangedEventArgs>
    ;
    pAStack5 =
         (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector___Class *)
         TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_RotationChangedEventArgs>;
    pUStack6 =
         (UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs___Class *)&UNK_?;
    pDStack7 = pDVar3;
    pAStack5 =
         (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector___Class *)
         func_?();
    if (pAStack5 ==
        (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector___Class *)0x0)
    goto code_?;
  }
  pDStack7 = (Delegate *)&(this->fields)._._.RotationChanged;
  pUStack6 =
       (UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs___Class *)&UNK_?;
  func_?();
  pUStack6 =
       (UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs___Class *)
       TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>;
  pAVar9 = (this->fields)._.ChunksChanged;
  this_01 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
             *)func_?();
  DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
  DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            (this_01,(Object *)this,
             MethodInfo__MVCubeModelInstance__OnChanged_System__Collections__Generic__HashSet<MV::WorldObject::IntVector>_
             ,(MethodInfo *)0x0);
  pDVar3 = mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pAVar9,(Delegate *)this_01,(MethodInfo *)0x0);
  pAVar4 = 
  TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>;
  if (pDVar3 == (Delegate *)0x0) {
    (this->fields)._.ChunksChanged =
         (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)0x0;
    pAStack5 =
         (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector___Class *)0x0;
code_?:
    pDStack7 = (Delegate *)&(this->fields)._.ChunksChanged;
    pUStack6 =
         (UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs___Class *)&UNK_?;
    func_?();
    return;
  }
  pAStack5 =
       TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>;
  pUStack6 =
       (UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs___Class *)&UNK_?;
  pDStack7 = pDVar3;
  pAVar9 = (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)
           func_?();
  if (pAVar9 != (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector_ *)0x0) {
    (this->fields)._.ChunksChanged = pAVar9;
    pAVar4 = 
    TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>;
    pAStack5 =
         TypeInfo__System__Action<System::Collections::Generic::HashSet<MV::WorldObject::IntVector>_>
    ;
    pUStack6 =
         (UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs___Class *)&UNK_?;
    pDStack7 = pDVar3;
    pAStack5 =
         (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector___Class *)
         func_?();
    if (pAStack5 !=
        (Action_1_System_Collections_Generic_HashSet_1_MV_WorldObject_IntVector___Class *)0x0)
    goto code_?;
  }
code_?:
  pUStack6 =
       (UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs___Class *)&UNK_?;
  pDStack7 = pDVar3;
  pAStack5 = pAVar4;
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
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
    func_?(&TypeInfo__MVCubeModelBase);
    cRam_? = '\x01';
  }
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
  if ((TypeInfo__MVCubeModelBase->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVCubeModelBase);
  }
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
      iVar8 = (pMVar6->fields)._._ProfileID_k__BackingField;
      if ((TypeInfo__MVCubeModelBase->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pRVar9 = (this->fields)._.prototypeCubeModel;
      if (pRVar9 != (RuntimePrototypeCubeModel *)0x0) {
        iVar10 = (pRVar9->fields)._AuthorProfileID_k__BackingField;
        uVar11 = (uint)(this->fields)._._.interactionFlags;
        *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) =
             *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4);
        if (iVar8 != iVar10) {
          *(uint *)&(this->fields)._._.interactionFlags = uVar11 & 0xffffbfff;
          return;
        }
        *(uint *)&(this->fields)._._.interactionFlags = uVar11 | 0x4000;
        return;
      }
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Boolean get_IsVisibleSet() */

bool Assembly-CSharp.dll::MVCubeModelInstance::MVCubeModelInstance_get_IsVisibleSet
               (MVCubeModelInstance *this,MethodInfo *method)

{
  return (this->fields).isVisible;
}


/* Void set_IsVisibleSet(Boolean) */

void Assembly-CSharp.dll::MVCubeModelInstance::MVCubeModelInstance_set_IsVisibleSet
               (MVCubeModelInstance *this,bool value,MethodInfo *method)

{
  (this->fields).isVisible = value;
  return;
}

