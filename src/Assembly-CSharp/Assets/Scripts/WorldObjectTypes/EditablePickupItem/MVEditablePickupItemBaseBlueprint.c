
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
    func_?();
    pMVar1 = (this->fields).itemBase;
    if (pMVar1 == (MVEditablePickupItemBase *)0x0) goto code_?;
    this_00 = (pMVar1->fields)._._._.transform;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (this_00 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
              (this_00,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,(MethodInfo *)0x0);
    pMVar1 = (this->fields).itemBase;
    if (pMVar1 == (MVEditablePickupItemBase *)0x0) goto code_?;
    pMVar2 = MVEditablePickupItemBase::MVEditablePickupItemBase_get_BaseObject
                       (pMVar1,(MethodInfo *)0x0);
    if (pMVar2 == (MVEditablePickupItemBaseObject *)0x0) goto code_?;
    (this->fields).cubeModelBaseParent = (pMVar2->fields).cubeModelParent;
    func_?();
    pMVar3 = (MVCubeModelInstance *)
             MVBlueprintBase::MVBlueprintBase_GetChild
                       ((MVBlueprintBase *)this,StringLiteral_ItemCubeModel,(MethodInfo *)0x0);
    if (pMVar3 == (MVCubeModelInstance *)0x0) goto code_?;
    if (((TypeInfo__MVCubeModelInstance->_1).naturalAligment <= (pMVar3->klass->_1).naturalAligment)
       && ((MVCubeModelInstance__Class *)
           (pMVar3->klass->_1).typeHierarchy
           [(TypeInfo__MVCubeModelInstance->_1).naturalAligment - 1] ==
           TypeInfo__MVCubeModelInstance)) {
      (*(code *)(pMVar3->klass->vtable).set_Visible.method)((short)pMVar3);
      pMVar1 = (this->fields).itemBase;
      if (pMVar1 == (MVEditablePickupItemBase *)0x0) goto code_?;
      puVar4 = (undefined8 *)
               (*(code *)(pMVar1->klass->vtable).__unknown.method)((short)&stack0xffffffe0);
      uVar5 = *puVar4;
      uStack_6 = (undefined2)((ulonglong)uVar5 >> 0x30);
      uVar7 = (undefined2)*(undefined4 *)(puVar4 + 1);
      iVar8 = (int16_t)((uint)*(undefined4 *)(puVar4 + 1) >> 0x10);
      pEVar9 = (EditableCubeModelWrapper *)func_?(TypeInfo__EditableCubeModelWrapper);
      max.y = uVar7;
      max.x = uStack_6;
      max.z = iVar8;
      EditableCubeModelWrapper::EditableCubeModelWrapper__ctor_1
                (pEVar9,pMVar3,SUB86(uVar5,0),max,10,(MethodInfo *)0x0);
      (this->fields).editableCubeModelWrapper = pEVar9;
      func_?();
      pEVar9 = (this->fields).editableCubeModelWrapper;
      if (pEVar9 == (EditableCubeModelWrapper *)0x0) goto code_?;
      (this->fields).editableCubeModel = (pEVar9->fields).cubeModelBase;
      func_?();
      pMVar3 = (this->fields).editableCubeModel;
      if (pMVar3 == (MVCubeModelInstance *)0x0) goto code_?;
      (this->fields).cubeModelId = (pMVar3->fields)._._._.id;
      pMVar3 = (this->fields).editableCubeModel;
      if (pMVar3 == (MVCubeModelInstance *)0x0) goto code_?;
      iVar10 = MVCubeModelBase::MVCubeModelBase_get_Pid((MVCubeModelBase *)pMVar3,(MethodInfo *)0x0)
      ;
      (this->fields).cubeModelPid = iVar10;
      (*(code *)(this->klass->vtable).OnEndEditing.method)();
      MVEditablePickupItemBaseBlueprint_SetCubeSize(this,(MethodInfo *)0x0);
      pMVar3 = (this->fields).editableCubeModel;
      if (pMVar3 == (MVCubeModelInstance *)0x0) goto code_?;
      MVCubeModelInstance::MVCubeModelInstance_EnableCulling(pMVar3,(MethodInfo *)0x0);
      MVEditablePickupItemBaseBlueprint_ToggleCubeModelColliders(this,0,(MethodInfo *)0x0);
      pMVar1 = (this->fields).itemBase;
      if (pMVar1 == (MVEditablePickupItemBase *)0x0) goto code_?;
      pMVar2 = MVEditablePickupItemBase::MVEditablePickupItemBase_get_BaseObject
                         (pMVar1,(MethodInfo *)0x0);
      if ((pMVar2 == (MVEditablePickupItemBaseObject *)0x0) ||
         (this_01 = (pMVar2->fields)._.pickupItem, this_01 == (GreyOutObjectScript *)0x0))
      goto code_?;
      GreyOutObjectScript::GreyOutObjectScript_InitializeOriginalMaterials
                (this_01,(MethodInfo *)0x0);
      pMVar1 = (this->fields).itemBase;
      if ((pMVar1 == (MVEditablePickupItemBase *)0x0) ||
         (this_02 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                    (pMVar1->fields)._._._._.data,
         this_02 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0))
      goto code_?;
      this_04 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          (this_02,(Object *)StringLiteral_itemData,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
      if ((this->fields).editableCubeModel == (MVCubeModelInstance *)0x0) goto code_?;
      value = (Object *)func_?();
      if (this_04.m_Index == 0) goto code_?;
      if (((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment <= *(byte *)(*(int *)this_04.m_Index + 0xb8)) &&
         (*(Dictionary_2_System_Object_System_Object___Class **)
           (*(int *)(*(int *)this_04.m_Index + 100) + -4 +
           (uint)(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 ->_1).naturalAligment * 4) ==
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__set_Item
                  ((Dictionary_2_System_Object_System_Object_ *)this_04.m_Index,
                   (Object *)StringLiteral_CubeModelId,value,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                  );
        pMVar1 = (this->fields).itemBase;
        if (pMVar1 != (MVEditablePickupItemBase *)0x0) {
          uVar11 = *(undefined4 *)((int)&(pMVar1->fields)._._._.interactionFlags + 4);
          piVar12 = &(pMVar1->fields)._._._.interactionFlags;
          *(uint *)piVar12 = (uint)*piVar12 | 0x30;
          *(undefined4 *)((int)&(pMVar1->fields)._._._.interactionFlags + 4) = uVar11;
          pMVar3 = (this->fields).editableCubeModel;
          if (pMVar3 != (MVCubeModelInstance *)0x0) {
            uVar11 = *(undefined4 *)((int)&(pMVar3->fields)._._.interactionFlags + 4);
            piVar12 = &(pMVar3->fields)._._.interactionFlags;
            *(uint *)piVar12 = (uint)*piVar12 | 0x30;
            *(undefined4 *)((int)&(pMVar3->fields)._._.interactionFlags + 4) = uVar11;
            pMVar1 = (this->fields).itemBase;
            if ((pMVar1 != (MVEditablePickupItemBase *)0x0) &&
               (this_03 = (pMVar1->fields)._.useInteractor, this_03 != (UseInteractor *)0x0)) {
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
    if (((TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBase
         ->_1).naturalAligment <= (pMVar1->klass->_1).naturalAligment) &&
       ((MVEditablePickupItemBase__Class *)
        (pMVar1->klass->_1).typeHierarchy
        [(TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBase
         ->_1).naturalAligment - 1] ==
        TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBase))
    {
      (this->fields).itemBase = pMVar1;
      if (((
           TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBase
           ->_1).naturalAligment <= (pMVar1->klass->_1).naturalAligment) &&
         ((MVEditablePickupItemBase__Class *)
          (pMVar1->klass->_1).typeHierarchy
          [(
           TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBase
           ->_1).naturalAligment - 1] ==
          TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBase)
         ) goto code_?;
    }
    func_?();
code_?:
    func_?();
  }
  func_?();
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
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
  if (((TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBase->
       _1).naturalAligment <= (pMVar1->klass->_1).naturalAligment) &&
     ((MVEditablePickupItemBase__Class *)
      (pMVar1->klass->_1).typeHierarchy
      [(TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBase->
       _1).naturalAligment - 1] ==
      TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBase)) {
    (this->fields).itemBase = pMVar1;
    if (((TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBase
         ->_1).naturalAligment <= (pMVar1->klass->_1).naturalAligment) &&
       ((MVEditablePickupItemBase__Class *)
        (pMVar1->klass->_1).typeHierarchy
        [(TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBase
         ->_1).naturalAligment - 1] ==
        TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBase))
    {
      func_?();
      return;
    }
  }
  func_?(pMVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
      if (((*(int *)(iVar10 + 0xc) == 0) ||
          (*(float *)(iVar10 + 0x10) = VStack_7.x, *(uint *)(iVar10 + 0xc) < 2)) ||
         (*(float *)(iVar10 + 0x14) = VStack_7.y, *(uint *)(iVar10 + 0xc) < 3))
      goto code_?;
      *(float *)(iVar10 + 0x18) = VStack_7.z;
      uVar11 = *(uint *)(iVar10 + 0xc);
      if (uVar11 == 0) {
        fVar12 = 0.0;
      }
      else {
        fVar12 = *(float *)(iVar10 + 0x10);
        uVar13 = 1;
        if (1 < (int)uVar11) {
          pfVar14 = (float *)(iVar10 + 0x14);
          do {
            if (uVar11 <= uVar13) goto code_?;
            if (fVar12 < *pfVar14) {
              fVar12 = *pfVar14;
            }
            uVar13 = uVar13 + 1;
            pfVar14 = pfVar14 + 1;
          } while ((int)uVar13 < (int)uVar11);
        }
      }
      fVar12 = fVar12 * _UNK_?;
      pMVar1 = (this->fields).editableCubeModel;
      if ((pMVar1 != (MVCubeModelInstance *)0x0) &&
         (pTVar15 = (pMVar1->fields)._._.transform, pTVar15 != (Transform *)0x0)) {
        pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                            (&VStack_7,pTVar15,(MethodInfo *)0x0);
        fVar17 = pVVar16->x;
        fStack_18 = fVar12 * fVar17;
        fStack_19 = fVar12 * fVar17;
        pMVar20 = (this->fields).itemBase;
        if ((pMVar20 != (MVEditablePickupItemBase *)0x0) &&
           ((pMVar21 = MVEditablePickupItemBase::MVEditablePickupItemBase_get_BaseObject
                                 (pMVar20,(MethodInfo *)0x0),
            pMVar21 != (MVEditablePickupItemBaseObject *)0x0 &&
            (this_00 = (pMVar21->fields)._._.mainCollider, this_00 != (Collider *)0x0)))) {
          pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)this_00,(MethodInfo *)0x0);
          VStack_7.x = fStack_18 + fStack_18;
          VStack_7.y = fStack_19 + fStack_19;
          VStack_7.z = fVar12 * fVar17 + fVar12 * fVar17;
          if (pTVar15 != (Transform *)0x0) {
            value.y = VStack_7.y;
            value.x = VStack_7.x;
            value.z = VStack_7.z;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                      (pTVar15,value,(MethodInfo *)0x0);
            pMVar20 = (this->fields).itemBase;
            if (pMVar20 != (MVEditablePickupItemBase *)0x0) {
              MVLogicObject::MVLogicObject_SetLocalBounds((MVLogicObject *)pMVar20,(MethodInfo *)0x0)
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
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
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
  iVar1 = (this->fields)._._._.interactionFlags;
  *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4) =
       *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4);
  puVar2 = (uint *)((int)&(this->fields)._._._.interactionFlags + 4);
  *puVar2 = *puVar2 | 2;
  *(uint *)&(this->fields)._._._.interactionFlags = (uint)iVar1 | 0xADDR;
  return;
}

