
/* Void DeSelect() */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::EditablePickupItem::
     MVEditablePickupItemBaseBlueprint::MVEditablePickupItemBaseBlueprint_DeSelect
               (MVEditablePickupItemBaseBlueprint *this,MethodInfo *method)

{
  pIStack_1 = (Il2CppMethodPointer)&stack0xfffffffc;
  pMStack_2 = (this->fields).itemBase;
  if (pMStack_2 != (MVEditablePickupItemBase *)0x0) {
    pIStack_1 = (pMStack_2->klass->vtable).AddPreviewBox.methodPtr;
    (*(code *)(pMStack_2->klass->vtable).DeSelect.method)();
    return;
  }
  uVar3 = func_?(&puStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::EditablePickupItem::
     MVEditablePickupItemBaseBlueprint::MVEditablePickupItemBaseBlueprint_Initialize
               (MVEditablePickupItemBaseBlueprint *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__EditableCubeModelWrapper);
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__MVCubeModelInstance);
    func_?(&
                    TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBase
                   );
    func_?(&StringLiteral_CubeModelId);
    func_?(&StringLiteral_ItemCubeModel);
    func_?(&StringLiteral_itemData);
    func_?(&StringLiteral_ItemBase);
    cRam_? = '\x01';
  }
  MVBlueprintBase::MVBlueprintBase_Initialize((MVBlueprintBase *)this,(MethodInfo *)0x0);
  pMVar1 = (MVEditablePickupItemBase *)
           MVBlueprintBase::MVBlueprintBase_GetChild
                     ((MVBlueprintBase *)this,StringLiteral_ItemBase,(MethodInfo *)0x0);
  if (pMVar1 == (MVEditablePickupItemBase *)0x0) {
    (this->fields).itemBase = (MVEditablePickupItemBase *)0x0;
code_?:
    ppMVar2 = &(this->fields).itemBase;
    func_?();
    if (*ppMVar2 == (MVEditablePickupItemBase *)0x0) goto code_?;
    this_00 = ((*ppMVar2)->fields)._._._.transform;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (this_00 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
              (this_00,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,(MethodInfo *)0x0);
    if ((*ppMVar2 == (MVEditablePickupItemBase *)0x0) ||
       (pMVar3 = MVEditablePickupItemBase::MVEditablePickupItemBase_get_BaseObject
                           (*ppMVar2,(MethodInfo *)0x0),
       pMVar3 == (MVEditablePickupItemBaseObject *)0x0)) goto code_?;
    (this->fields).cubeModelBaseParent = (pMVar3->fields).cubeModelParent;
    func_?();
    pMVar4 = (MVCubeModelInstance *)
              MVBlueprintBase::MVBlueprintBase_GetChild
                        ((MVBlueprintBase *)this,StringLiteral_ItemCubeModel,(MethodInfo *)0x0);
    if (pMVar4 == (MVCubeModelInstance *)0x0) goto code_?;
    bVar5 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
    if ((bVar5 <= (pMVar4->klass->_1).naturalAligment) &&
       ((MVCubeModelInstance__Class *)(pMVar4->klass->_1).typeHierarchy[bVar5 - 1] ==
        TypeInfo__MVCubeModelInstance)) {
      (*(code *)(pMVar4->klass->vtable).set_Visible.method)((short)pMVar4);
      if (*ppMVar2 == (MVEditablePickupItemBase *)0x0) goto code_?;
      puVar6 = (undefined8 *)
                (*(code *)((*ppMVar2)->klass->vtable).__unknown.method)((short)&stack0xffffffd4);
      uVar7 = *puVar6;
      uStack_8 = (undefined2)((ulonglong)uVar7 >> 0x30);
      uVar9 = (undefined2)*(undefined4 *)(puVar6 + 1);
      iVar10 = (int16_t)((uint)*(undefined4 *)(puVar6 + 1) >> 0x10);
      pEVar11 = (EditableCubeModelWrapper *)func_?(TypeInfo__EditableCubeModelWrapper);
      max.y = uVar9;
      max.x = uStack_8;
      max.z = iVar10;
      EditableCubeModelWrapper::EditableCubeModelWrapper__ctor_1
                (pEVar11,pMVar4,SUB86(uVar7,0),max,10,(MethodInfo *)0x0);
      ppEVar12 = &(this->fields).editableCubeModelWrapper;
      *ppEVar12 = pEVar11;
      func_?();
      pEVar11 = *ppEVar12;
      if (pEVar11 == (EditableCubeModelWrapper *)0x0) goto code_?;
      ppMVar13 = &(this->fields).editableCubeModel;
      *ppMVar13 = (pEVar11->fields).cubeModelBase;
      func_?();
      pMVar4 = *ppMVar13;
      if (pMVar4 == (MVCubeModelInstance *)0x0) goto code_?;
      (this->fields).cubeModelId = (pMVar4->fields)._._._.id;
      iVar14 = MVCubeModelBase::MVCubeModelBase_get_Pid
                         ((MVCubeModelBase *)pMVar4,(MethodInfo *)0x0);
      (this->fields).cubeModelPid = iVar14;
      (*(code *)(this->klass->vtable).OnEndEditing.method)();
      MVEditablePickupItemBaseBlueprint_SetCubeSize(this,(MethodInfo *)0x0);
      if (*ppMVar13 == (MVCubeModelInstance *)0x0) goto code_?;
      MVCubeModelInstance::MVCubeModelInstance_EnableCulling(*ppMVar13,(MethodInfo *)0x0);
      MVEditablePickupItemBaseBlueprint_ToggleCubeModelColliders(this,0,(MethodInfo *)0x0);
      pMVar1 = (this->fields).itemBase;
      ppMVar2 = &(this->fields).itemBase;
      if (((pMVar1 == (MVEditablePickupItemBase *)0x0) ||
          (pMVar3 = MVEditablePickupItemBase::MVEditablePickupItemBase_get_BaseObject
                              (pMVar1,(MethodInfo *)0x0),
          pMVar3 == (MVEditablePickupItemBaseObject *)0x0)) ||
         (this_01 = (pMVar3->fields)._.pickupItem, this_01 == (GreyOutObjectScript *)0x0))
      goto code_?;
      GreyOutObjectScript::GreyOutObjectScript_InitializeOriginalMaterials
                (this_01,(MethodInfo *)0x0);
      if (((*ppMVar2 == (MVEditablePickupItemBase *)0x0) ||
          (this_02 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                     ((*ppMVar2)->fields)._._._._.data,
          this_02 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)) ||
         ((this_04 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Object,UnityEngine::UIElements::TextureId]::
                     Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                               (this_02,(Object *)StringLiteral_itemData,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                               ), *ppMVar13 == (MVCubeModelInstance *)0x0 ||
          (value = (Object *)func_?(), this_04.m_Index == 0)))) goto code_?;
      bVar5 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      if ((bVar5 <= *(byte *)(*(int *)this_04.m_Index + 0xb8)) &&
         (*(Dictionary_2_System_Object_System_Object___Class **)
           (*(int *)(*(int *)this_04.m_Index + 100) + -4 + (uint)bVar5 * 4) ==
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__set_Item
                  ((Dictionary_2_System_Object_System_Object_ *)this_04.m_Index,
                   (Object *)StringLiteral_CubeModelId,value,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                  );
        pMVar1 = *ppMVar2;
        if (pMVar1 != (MVEditablePickupItemBase *)0x0) {
          uVar15 = *(undefined4 *)((int)&(pMVar1->fields)._._._.interactionFlags + 4);
          piVar16 = &(pMVar1->fields)._._._.interactionFlags;
          *(uint *)piVar16 = (uint)*piVar16 | 0x30;
          *(undefined4 *)((int)&(pMVar1->fields)._._._.interactionFlags + 4) = uVar15;
          pMVar4 = *ppMVar13;
          if (pMVar4 != (MVCubeModelInstance *)0x0) {
            uVar15 = *(undefined4 *)((int)&(pMVar4->fields)._._.interactionFlags + 4);
            piVar16 = &(pMVar4->fields)._._.interactionFlags;
            *(uint *)piVar16 = (uint)*piVar16 | 0x30;
            *(undefined4 *)((int)&(pMVar4->fields)._._.interactionFlags + 4) = uVar15;
            if ((*ppMVar2 != (MVEditablePickupItemBase *)0x0) &&
               (this_03 = ((*ppMVar2)->fields)._.useInteractor, this_03 != (UseInteractor *)0x0)) {
              UseInteractor::UseInteractor_UpdateData
                        (this_03,(this->fields)._._._._.data,(MethodInfo *)0x0);
              return;
            }
          }
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  else {
    bVar5 = (
            TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBase
            ->_1).naturalAligment;
    if (((pMVar1->klass->_1).naturalAligment < bVar5) ||
       ((MVEditablePickupItemBase__Class *)(pMVar1->klass->_1).typeHierarchy[bVar5 - 1] !=
        TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBase))
    {
      func_?();
code_?:
      func_?();
    }
    else {
      (this->fields).itemBase = pMVar1;
      bVar5 = (
              TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBase
              ->_1).naturalAligment;
      if ((bVar5 <= (pMVar1->klass->_1).naturalAligment) &&
         ((MVEditablePickupItemBase__Class *)(pMVar1->klass->_1).typeHierarchy[bVar5 - 1] ==
          TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBase)
         ) goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void InitializeInventory() */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::EditablePickupItem::
     MVEditablePickupItemBaseBlueprint::MVEditablePickupItemBaseBlueprint_InitializeInventory
               (MVEditablePickupItemBaseBlueprint *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBase
                   );
    func_?(&StringLiteral_ItemBase);
    cRam_? = '\x01';
  }
  MVGroup::MVGroup_InitializeInventory((MVGroup *)this,(MethodInfo *)0x0);
  pMVar1 = (MVEditablePickupItemBase *)
           MVBlueprintBase::MVBlueprintBase_GetChild
                     ((MVBlueprintBase *)this,StringLiteral_ItemBase,(MethodInfo *)0x0);
  if (pMVar1 == (MVEditablePickupItemBase *)0x0) {
    (this->fields).itemBase = (MVEditablePickupItemBase *)0x0;
    func_?();
    return;
  }
  bVar2 = (TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBase
          ->_1).naturalAligment;
  if ((bVar2 <= (pMVar1->klass->_1).naturalAligment) &&
     ((MVEditablePickupItemBase__Class *)(pMVar1->klass->_1).typeHierarchy[bVar2 - 1] ==
      TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBase)) {
    (this->fields).itemBase = pMVar1;
    bVar2 = (
            TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBase
            ->_1).naturalAligment;
    if ((bVar2 <= (pMVar1->klass->_1).naturalAligment) &&
       ((MVEditablePickupItemBase__Class *)(pMVar1->klass->_1).typeHierarchy[bVar2 - 1] ==
        TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBase))
    {
      func_?();
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::EditablePickupItem::
     MVEditablePickupItemBaseBlueprint::MVEditablePickupItemBaseBlueprint_OnDataUpdate
               (MVEditablePickupItemBaseBlueprint *this,MethodInfo *method)

{
  MVBlueprintBase::MVBlueprintBase_OnDataUpdate((MVBlueprintBase *)this,(MethodInfo *)0x0);
  pMVar1 = (this->fields).itemBase;
  if (pMVar1 != (MVEditablePickupItemBase *)0x0) {
    (*(code *)(pMVar1->klass->vtable).OnDataUpdate.method)(pMVar1);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnEndEditing() */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::EditablePickupItem::
     MVEditablePickupItemBaseBlueprint::MVEditablePickupItemBaseBlueprint_OnEndEditing
               (MVEditablePickupItemBaseBlueprint *this,MethodInfo *method)

{
  pMVar1 = (this->fields).editableCubeModel;
  if ((pMVar1 != (MVCubeModelInstance *)0x0) &&
     (this_00 = (pMVar1->fields)._._.transform, this_00 != (Transform *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent
              (this_00,(this->fields).cubeModelBaseParent,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
              (this_00,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
              (this_00,TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,
               (MethodInfo *)0x0);
    value.y = (float)_UNK_?;
    value.x = (float)_UNK_?;
    value.z = 0.3;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
              (this_00,value,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean OnEnterObject(EditorStateMachine) */

bool Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::EditablePickupItem::
     MVEditablePickupItemBaseBlueprint::MVEditablePickupItemBaseBlueprint_OnEnterObject
               (MVEditablePickupItemBaseBlueprint *this,EditorStateMachine *e,MethodInfo *method)

{
  this_00 = (this->fields).itemBase;
  if (this_00 != (MVEditablePickupItemBase *)0x0) {
    pMVar1 = MVEditablePickupItemBase::MVEditablePickupItemBase_get_BaseObject
                       (this_00,(MethodInfo *)0x0);
    if ((pMVar1 != (MVEditablePickupItemBaseObject *)0x0) &&
       (this_01 = (pMVar1->fields)._._.mainCollider, this_01 != (Collider *)0x0)) {
      this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this_01,(MethodInfo *)0x0);
      if (this_02 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_02,0,(MethodInfo *)0x0);
        MVEditablePickupItemBaseBlueprint_ToggleCubeModelColliders(this,1,(MethodInfo *)0x0);
        (*(code *)(this->klass->vtable).OnStartEditing.method)();
        pEVar2 = (this->fields).editableCubeModelWrapper;
        if (pEVar2 != (EditableCubeModelWrapper *)0x0) {
          bVar3 = (*(code *)(pEVar2->klass->vtable).OnEnterObject.method)
                            (pEVar2,e,(pEVar2->klass->vtable).OnExitObject.methodPtr);
          return bVar3;
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar3 = (*pcVar4)();
  return bVar3;
}


/* Boolean OnExitObject(EditorStateMachine) */

bool Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::EditablePickupItem::
     MVEditablePickupItemBaseBlueprint::MVEditablePickupItemBaseBlueprint_OnExitObject
               (MVEditablePickupItemBaseBlueprint *this,EditorStateMachine *e,MethodInfo *method)

{
  this_00 = (this->fields).itemBase;
  if (this_00 != (MVEditablePickupItemBase *)0x0) {
    pMVar1 = MVEditablePickupItemBase::MVEditablePickupItemBase_get_BaseObject
                       (this_00,(MethodInfo *)0x0);
    if ((pMVar1 != (MVEditablePickupItemBaseObject *)0x0) &&
       (this_01 = (pMVar1->fields)._._.mainCollider, this_01 != (Collider *)0x0)) {
      this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this_01,(MethodInfo *)0x0);
      if (this_02 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_02,1,(MethodInfo *)0x0);
        MVEditablePickupItemBaseBlueprint_ToggleCubeModelColliders(this,0,(MethodInfo *)0x0);
        (*(code *)(this->klass->vtable).OnEndEditing.method)();
        MVEditablePickupItemBaseBlueprint_SetCubeSize(this,(MethodInfo *)0x0);
        pEVar2 = (this->fields).editableCubeModelWrapper;
        if (pEVar2 != (EditableCubeModelWrapper *)0x0) {
          bVar3 = (*(code *)(pEVar2->klass->vtable).OnExitObject.method)
                            (pEVar2,e,pEVar2->klass[1]._0.image);
          return bVar3;
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar3 = (*pcVar4)();
  return bVar3;
}


/* Void OnStartEditing() */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::EditablePickupItem::
     MVEditablePickupItemBaseBlueprint::MVEditablePickupItemBaseBlueprint_OnStartEditing
               (MVEditablePickupItemBaseBlueprint *this,MethodInfo *method)

{
  pMVar1 = (this->fields).editableCubeModel;
  if ((pMVar1 != (MVCubeModelInstance *)0x0) &&
     (this_00 = (pMVar1->fields)._._.transform, this_00 != (Transform *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent
              (this_00,(this->fields)._._._.transform,(MethodInfo *)0x0);
    auVar2._4_8_ = 0;
    auVar2._0_4_ = _UNK_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
              (this_00,(Vector3)(auVar2 << 0x20),(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
              (this_00,TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,
               (MethodInfo *)0x0);
    value.y = (float)_UNK_?;
    value.x = (float)_UNK_?;
    value.z = 0.3;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
              (this_00,value,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Select(Color) */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::EditablePickupItem::
     MVEditablePickupItemBaseBlueprint::MVEditablePickupItemBaseBlueprint_Select
               (MVEditablePickupItemBaseBlueprint *this,Color color,MethodInfo *method)

{
  pIStack_1 = (Il2CppMethodPointer)&stack0xfffffffc;
  pMVar2 = (this->fields).itemBase;
  if (pMVar2 != (MVEditablePickupItemBase *)0x0) {
    pIStack_1 = (pMVar2->klass->vtable).DeSelect.methodPtr;
    fStack_3 = color.b;
    fStack_4 = color.a;
    (*(code *)(pMVar2->klass->vtable).Select_1.method)(pMVar2,color.r,color.g);
    return;
  }
  uVar5 = func_?(&fStack_3);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetCubeSize() */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::EditablePickupItem::
     MVEditablePickupItemBaseBlueprint::MVEditablePickupItemBaseBlueprint_SetCubeSize
               (MVEditablePickupItemBaseBlueprint *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).editableCubeModel;
  if (pMVar1 != (MVCubeModelInstance *)0x0) {
    pBVar2 = MVCubeModelBase::MVCubeModelBase_GetBounds
                       (&BStack_3,(MVCubeModelBase *)pMVar1,(MethodInfo *)0x0);
    fStack_4 = (pBVar2->m_Center).x;
    fStack_5 = (pBVar2->m_Center).y;
    fStack_6 = (pBVar2->m_Center).z;
    VStack_7.x = (pBVar2->m_Extents).x;
    uVar8 = (pBVar2->m_Extents).y;
    uVar9 = (pBVar2->m_Extents).z;
    VStack_7.y = (float)uVar8;
    VStack_7.z = (float)uVar9;
    iVar10 = func_?(TypeInfo__System__Single,3);
    if (iVar10 != 0) {
      if ((*(int *)(iVar10 + 0xc) == 0) ||
         (*(float *)(iVar10 + 0x10) = VStack_7.x, *(uint *)(iVar10 + 0xc) < 2))
      goto code_?;
      pfVar11 = (float *)(iVar10 + 0x14);
      *pfVar11 = VStack_7.y;
      if (*(uint *)(iVar10 + 0xc) < 3) goto code_?;
      *(float *)(iVar10 + 0x18) = VStack_7.z;
      uVar12 = *(uint *)(iVar10 + 0xc);
      if (uVar12 == 0) {
        fVar13 = 0.0;
      }
      else {
        fVar13 = *(float *)(iVar10 + 0x10);
        uVar14 = 1;
        if (1 < (int)uVar12) {
          bVar15 = 1 < uVar12;
          do {
            if (!bVar15) goto code_?;
            if (fVar13 < *pfVar11) {
              fVar13 = *pfVar11;
            }
            uVar14 = uVar14 + 1;
            pfVar11 = pfVar11 + 1;
            bVar15 = uVar14 < uVar12;
          } while ((int)uVar14 < (int)uVar12);
        }
      }
      fVar13 = fVar13 * _UNK_?;
      pMVar1 = (this->fields).editableCubeModel;
      if ((pMVar1 != (MVCubeModelInstance *)0x0) &&
         (pTVar16 = (pMVar1->fields)._._.transform, pTVar16 != (Transform *)0x0)) {
        pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                            (&VStack_7,pTVar16,(MethodInfo *)0x0);
        fVar13 = pVVar17->x * fVar13;
        pMVar18 = (this->fields).itemBase;
        if ((pMVar18 != (MVEditablePickupItemBase *)0x0) &&
           ((pMVar19 = MVEditablePickupItemBase::MVEditablePickupItemBase_get_BaseObject
                                 (pMVar18,(MethodInfo *)0x0),
            pMVar19 != (MVEditablePickupItemBaseObject *)0x0 &&
            (this_00 = (pMVar19->fields)._._.mainCollider, this_00 != (Collider *)0x0)))) {
          pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)this_00,(MethodInfo *)0x0);
          VStack_7.x = fVar13 + fVar13;
          VStack_7.y = fVar13 + fVar13;
          VStack_7.z = fVar13 + fVar13;
          if (pTVar16 != (Transform *)0x0) {
            value.y = VStack_7.y;
            value.x = VStack_7.x;
            value.z = VStack_7.z;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                      (pTVar16,value,(MethodInfo *)0x0);
            pMVar18 = (this->fields).itemBase;
            if (pMVar18 != (MVEditablePickupItemBase *)0x0) {
              MVLogicObject::MVLogicObject_SetLocalBounds((MVLogicObject *)pMVar18,(MethodInfo *)0x0)
              ;
              return;
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* Void ToggleCubeModelColliders(Boolean) */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::EditablePickupItem::
     MVEditablePickupItemBaseBlueprint::MVEditablePickupItemBaseBlueprint_ToggleCubeModelColliders
               (MVEditablePickupItemBaseBlueprint *this,bool state,MethodInfo *method)

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
  pMVar4 = (this->fields).editableCubeModel;
  if ((pMVar4 != (MVCubeModelInstance *)0x0) &&
     (pCVar5 = (pMVar4->fields)._.chunkInstances, pCVar5 != (ChunkInstances *)0x0)) {
    piVar6 = (int *)func_?(0,TypeInfo__System__Collections__IEnumerable,pCVar5);
    uStack_1 = 1;
    while (piVar6 != (int *)0x0) {
      cVar7 = func_?(0,TypeInfo__System__Collections__IEnumerator,piVar6);
      if (cVar7 == '\0') {
        uStack_1 = 0xffffffff;
        iVar8 = func_?(piVar6,TypeInfo__System__IDisposable);
        if (iVar8 != 0) {
          func_?(0,TypeInfo__System__IDisposable,iVar8);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if (piVar6 == (int *)0x0) break;
      uVar9 = 0;
      uVar10 = *(ushort *)(*piVar6 + 0xb6);
      if (uVar10 != 0) {
        do {
          if (*(IEnumerator__Class **)(*(int *)(*piVar6 + 0x58) + (uint)uVar9 * 8) ==
              TypeInfo__System__Collections__IEnumerator) {
            puVar11 = (undefined4 *)
                     (*piVar6 +
                     (*(int *)(*(int *)(*piVar6 + 0x58) + 4 + (uint)uVar9 * 8) + 0x19) * 8);
            goto code_?;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar10);
      }
      puVar11 = (undefined4 *)func_?(piVar6,TypeInfo__System__Collections__IEnumerator,1);
code_?:
      piVar12 = (int *)(*(code *)*puVar11)(piVar6,puVar11[1]);
      uVar13 = CONCAT44(TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                        ,piVar12);
      if (piVar12 == (int *)0x0) break;
      if (*(Il2CppClass **)(*piVar12 + 0x20) !=
          (
          TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
          ->_0).element_class) goto code_?;
      iVar8 = func_?(piVar12);
      if (*(Collider **)(iVar8 + 0x1c) == (Collider *)0x0) break;
      UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                (*(Collider **)(iVar8 + 0x1c),state,(MethodInfo *)0x0);
    }
  }
  uVar13 = func_?();
code_?:
  func_?(uVar13);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* MVEditablePickupItemBaseBlueprint(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::EditablePickupItem::
     MVEditablePickupItemBaseBlueprint::MVEditablePickupItemBaseBlueprint__ctor
               (MVEditablePickupItemBaseBlueprint *this,
               Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  (this->fields).cubeModelId = -1;
  (this->fields).cubeModelPid = -1;
  MVBlueprintBase::MVBlueprintBase__ctor
            ((MVBlueprintBase *)this,data,worldObjects,(MethodInfo *)0x0);
  piVar1 = &(this->fields)._._._.interactionFlags;
  *(uint *)piVar1 = (uint)*piVar1 | 0x8000;
  piVar1 = &(this->fields)._._._.interactionFlags;
  *(uint *)piVar1 = (uint)*piVar1 | 0x1000;
  piVar1 = &(this->fields)._._._.interactionFlags;
  *(uint *)piVar1 = (uint)*piVar1 | 0x2000;
  piVar1 = &(this->fields)._._._.interactionFlags;
  *(uint *)piVar1 = (uint)*piVar1 | 0x100;
  piVar1 = &(this->fields)._._._.interactionFlags;
  *(uint *)piVar1 = (uint)*piVar1 | 0x100000;
  piVar1 = &(this->fields)._._._.interactionFlags;
  *(uint *)piVar1 = (uint)*piVar1 | 0x200000;
  uVar2 = *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4);
  piVar1 = &(this->fields)._._._.interactionFlags;
  *(uint *)piVar1 = (uint)*piVar1 | 0xADDR;
  *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4) = uVar2;
  iVar3 = (this->fields)._._._.interactionFlags;
  puVar4 = (uint *)((int)&(this->fields)._._._.interactionFlags + 4);
  *puVar4 = *puVar4 | 2;
  *(int *)&(this->fields)._._._.interactionFlags = (int)iVar3;
  return;
}

