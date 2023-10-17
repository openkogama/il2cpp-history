
/* Void DeSelect() */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::EditablePickupItem::
     MVEditablePickupItemBaseBlueprint::MVEditablePickupItemBaseBlueprint_DeSelect
               (MVEditablePickupItemBaseBlueprint *this,MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  pMStack_2 = (this->fields).itemBase;
  if (pMStack_2 != (MVEditablePickupItemBase *)0x0) {
    pMStack_1 = (pMStack_2->klass->vtable).DeSelect.method;
    (*(pMStack_2->klass->vtable).DeSelect.methodPtr)();
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
    if ((pMVar1 == (MVEditablePickupItemBase *)0x0) ||
       (pMVar2 = MVEditablePickupItemBase::MVEditablePickupItemBase_get_BaseObject
                           (pMVar1,(MethodInfo *)0x0),
       pMVar2 == (MVEditablePickupItemBaseObject *)0x0)) goto code_?;
    (this->fields).cubeModelBaseParent = (pMVar2->fields).cubeModelParent;
    func_?();
    pMVar3 = (MVCubeModelInstance *)
             MVBlueprintBase::MVBlueprintBase_GetChild
                       ((MVBlueprintBase *)this,StringLiteral_ItemCubeModel,(MethodInfo *)0x0);
    if (pMVar3 == (MVCubeModelInstance *)0x0) goto code_?;
    if (((TypeInfo__MVCubeModelInstance->_1).typeHierarchyDepth <=
         (pMVar3->klass->_1).typeHierarchyDepth) &&
       ((MVCubeModelInstance__Class *)
        (pMVar3->klass->_1).typeHierarchy
        [(TypeInfo__MVCubeModelInstance->_1).typeHierarchyDepth - 1] ==
        TypeInfo__MVCubeModelInstance)) {
      (*(pMVar3->klass->vtable).set_Visible.methodPtr)((short)pMVar3);
      pMVar1 = (this->fields).itemBase;
      if (pMVar1 == (MVEditablePickupItemBase *)0x0) goto code_?;
      puVar4 = (undefined8 *)(*(pMVar1->klass->vtable).__unknown.methodPtr)((short)&stack0xffffffe0)
      ;
      uVar5 = *puVar4;
      uStack_6 = (undefined2)((ulonglong)uVar5 >> 0x30);
      uVar7 = (undefined2)*(undefined4 *)(puVar4 + 1);
      iVar8 = (int16_t)((uint)*(undefined4 *)(puVar4 + 1) >> 0x10);
      pEVar9 = (EditableCubeModelWrapper *)func_?(TypeInfo__EditableCubeModelWrapper);
      if (pEVar9 == (EditableCubeModelWrapper *)0x0) goto code_?;
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
      (*(this->klass->vtable).OnEndEditing.methodPtr)();
      MVEditablePickupItemBaseBlueprint_SetCubeSize(this,(MethodInfo *)0x0);
      pMVar3 = (this->fields).editableCubeModel;
      if (pMVar3 == (MVCubeModelInstance *)0x0) goto code_?;
      MVCubeModelInstance::MVCubeModelInstance_EnableCulling(pMVar3,(MethodInfo *)0x0);
      MVEditablePickupItemBaseBlueprint_ToggleCubeModelColliders(this,0,(MethodInfo *)0x0);
      pMVar1 = (this->fields).itemBase;
      if (((pMVar1 == (MVEditablePickupItemBase *)0x0) ||
          (pMVar2 = MVEditablePickupItemBase::MVEditablePickupItemBase_get_BaseObject
                              (pMVar1,(MethodInfo *)0x0),
          pMVar2 == (MVEditablePickupItemBaseObject *)0x0)) ||
         (this_01 = (pMVar2->fields)._.pickupItem, this_01 == (GreyOutObjectScript *)0x0))
      goto code_?;
      GreyOutObjectScript::GreyOutObjectScript_InitializeOriginalMaterials
                (this_01,(MethodInfo *)0x0);
      pMVar1 = (this->fields).itemBase;
      if (((pMVar1 == (MVEditablePickupItemBase *)0x0) ||
          (pDVar11 = (pMVar1->fields)._._._._.data,
          pDVar11 == (Dictionary_2_System_Object_System_Object_ *)0x0)) ||
         ((pDVar11 = (Dictionary_2_System_Object_System_Object_ *)
                     mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                     ::Object]::Dictionary_2_System_Object_System_Object__get_Item
                               (pDVar11,(Object *)StringLiteral_itemData,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                               ), (this->fields).editableCubeModel == (MVCubeModelInstance *)0x0 ||
          (value = (Object *)func_?(),
          pDVar11 == (Dictionary_2_System_Object_System_Object_ *)0x0)))) goto code_?;
      if (((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           typeHierarchyDepth <= (pDVar11->klass->_1).typeHierarchyDepth) &&
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar11->klass->_1).typeHierarchy
          [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           typeHierarchyDepth - 1] ==
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__set_Item
                  (pDVar11,(Object *)StringLiteral_CubeModelId,value,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                  );
        pMVar1 = (this->fields).itemBase;
        if (pMVar1 != (MVEditablePickupItemBase *)0x0) {
          uVar12 = *(undefined4 *)((int)&(pMVar1->fields)._._._.interactionFlags + 4);
          piVar13 = &(pMVar1->fields)._._._.interactionFlags;
          *(uint *)piVar13 = (uint)*piVar13 | 0x30;
          *(undefined4 *)((int)&(pMVar1->fields)._._._.interactionFlags + 4) = uVar12;
          pMVar3 = (this->fields).editableCubeModel;
          if (pMVar3 != (MVCubeModelInstance *)0x0) {
            uVar12 = *(undefined4 *)((int)&(pMVar3->fields)._._.interactionFlags + 4);
            piVar13 = &(pMVar3->fields)._._.interactionFlags;
            *(uint *)piVar13 = (uint)*piVar13 | 0x30;
            *(undefined4 *)((int)&(pMVar3->fields)._._.interactionFlags + 4) = uVar12;
            pMVar1 = (this->fields).itemBase;
            if ((pMVar1 != (MVEditablePickupItemBase *)0x0) &&
               (this_02 = (pMVar1->fields)._.useInteractor, this_02 != (UseInteractor *)0x0)) {
              UseInteractor::UseInteractor_UpdateData
                        (this_02,(this->fields)._._._._.data,(MethodInfo *)0x0);
              return;
            }
          }
        }
        goto code_?;
      }
    }
  }
  else {
    if (((TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBase
         ->_1).typeHierarchyDepth <= (pMVar1->klass->_1).typeHierarchyDepth) &&
       ((MVEditablePickupItemBase__Class *)
        (pMVar1->klass->_1).typeHierarchy
        [(TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBase
         ->_1).typeHierarchyDepth - 1] ==
        TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBase))
    {
      (this->fields).itemBase = pMVar1;
      if (((
           TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBase
           ->_1).typeHierarchyDepth <= (pMVar1->klass->_1).typeHierarchyDepth) &&
         ((MVEditablePickupItemBase__Class *)
          (pMVar1->klass->_1).typeHierarchy
          [(
           TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBase
           ->_1).typeHierarchyDepth - 1] ==
          TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBase)
         ) goto code_?;
    }
    func_?();
  }
  func_?();
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
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
       _1).typeHierarchyDepth <= (pMVar1->klass->_1).typeHierarchyDepth) &&
     ((MVEditablePickupItemBase__Class *)
      (pMVar1->klass->_1).typeHierarchy
      [(TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBase->
       _1).typeHierarchyDepth - 1] ==
      TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBase)) {
    (this->fields).itemBase = pMVar1;
    if (((TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBase
         ->_1).typeHierarchyDepth <= (pMVar1->klass->_1).typeHierarchyDepth) &&
       ((MVEditablePickupItemBase__Class *)
        (pMVar1->klass->_1).typeHierarchy
        [(TypeInfo__Assets__Scripts__WorldObjectTypes__EditablePickupItem__MVEditablePickupItemBase
         ->_1).typeHierarchyDepth - 1] ==
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
    (*(pMVar1->klass->vtable).OnDataUpdate.methodPtr)(pMVar1);
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
        (*(this->klass->vtable).OnStartEditing.methodPtr)();
        pEVar2 = (this->fields).editableCubeModelWrapper;
        if (pEVar2 != (EditableCubeModelWrapper *)0x0) {
          bVar3 = (*(pEVar2->klass->vtable).OnEnterObject.methodPtr)
                            (pEVar2,e,(pEVar2->klass->vtable).OnEnterObject.method);
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
        (*(this->klass->vtable).OnEndEditing.methodPtr)();
        MVEditablePickupItemBaseBlueprint_SetCubeSize(this,(MethodInfo *)0x0);
        pEVar2 = (this->fields).editableCubeModelWrapper;
        if (pEVar2 != (EditableCubeModelWrapper *)0x0) {
          bVar3 = (*(pEVar2->klass->vtable).OnExitObject.methodPtr)
                            (pEVar2,e,(pEVar2->klass->vtable).OnExitObject.method);
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
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  pMVar2 = (this->fields).itemBase;
  if (pMVar2 != (MVEditablePickupItemBase *)0x0) {
    pMStack_1 = (pMVar2->klass->vtable).Select_1.method;
    fStack_3 = color.b;
    fStack_4 = color.a;
    (*(pMVar2->klass->vtable).Select_1.methodPtr)(pMVar2,color.r,color.g);
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
  DStack_1._dictionary =
       (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0;
  DStack_1._index = 0;
  DStack_1._version = 0;
  DStack_1._currentKey._options = 0;
  DStack_1._currentKey._cultureKey = (String *)0x0;
  DStack_1._currentKey._pattern = (String *)0x0;
  pMVar2 = (this->fields).editableCubeModel;
  if (pMVar2 != (MVCubeModelInstance *)0x0) {
    pBVar3 = MVCubeModelBase::MVCubeModelBase_GetBounds
                       (&BStack_4,(MVCubeModelBase *)pMVar2,(MethodInfo *)0x0);
    DStack_1._dictionary =
         (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
         (pBVar3->m_Center).x;
    DStack_1._index = (int32_t)(pBVar3->m_Center).y;
    DStack_1._version = (int32_t)(pBVar3->m_Center).z;
    DStack_1._currentKey._options = (int32_t)(pBVar3->m_Extents).x;
    DStack_1._currentKey._cultureKey = (String *)(pBVar3->m_Extents).y;
    DStack_1._currentKey._pattern = (String *)(pBVar3->m_Extents).z;
    iVar5 = func_?(TypeInfo__System__Single,3);
    pRVar6 = mscorlib.dll::System::Collections::Generic::
             Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::
             RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
             Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                       (&RStack_7,&DStack_1,(MethodInfo *)0x0);
    if (iVar5 != 0) {
      if (*(int *)(iVar5 + 0xc) == 0) goto code_?;
      *(int32_t *)(iVar5 + 0x10) = pRVar6->_options;
      pRVar6 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::
               RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
               Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                         (&RStack_7,&DStack_1,(MethodInfo *)0x0);
      if (*(uint *)(iVar5 + 0xc) < 2) goto code_?;
      *(String **)(iVar5 + 0x14) = pRVar6->_cultureKey;
      pRVar6 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::
               RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
               Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                         (&RStack_7,&DStack_1,(MethodInfo *)0x0);
      if (*(uint *)(iVar5 + 0xc) < 3) goto code_?;
      *(String **)(iVar5 + 0x18) = pRVar6->_pattern;
      uVar8 = *(uint *)(iVar5 + 0xc);
      if (uVar8 == 0) {
        fVar9 = 0.0;
      }
      else {
        fVar9 = *(float *)(iVar5 + 0x10);
        uVar10 = 1;
        if (1 < (int)uVar8) {
          pfVar11 = (float *)(iVar5 + 0x14);
          do {
            if (uVar8 <= uVar10) goto code_?;
            if (fVar9 < *pfVar11) {
              fVar9 = *pfVar11;
            }
            uVar10 = uVar10 + 1;
            pfVar11 = pfVar11 + 1;
          } while ((int)uVar10 < (int)uVar8);
        }
      }
      RStack_7._pattern = (String *)(fVar9 * _UNK_?);
      value.y = (float)RStack_7._pattern;
      value.x = (float)RStack_7._pattern;
      value.z = (float)RStack_7._pattern;
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+Particle::
      ParticleSystem_Particle_set_velocity
                ((ParticleSystem_Particle *)&DStack_1,value,(MethodInfo *)0x0);
      pRVar6 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::
               RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
               Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                         ((Regex_CachedCodeEntryKey *)&BStack_4.m_Extents,&DStack_1,
                          (MethodInfo *)0x0);
      RStack_7._options = pRVar6->_options;
      RStack_7._cultureKey = pRVar6->_cultureKey;
      RStack_7._pattern = pRVar6->_pattern;
      pMVar2 = (this->fields).editableCubeModel;
      if ((pMVar2 != (MVCubeModelInstance *)0x0) &&
         (pTVar12 = (pMVar2->fields)._._.transform, pTVar12 != (Transform *)0x0)) {
        pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                           (&BStack_4.m_Extents,pTVar12,(MethodInfo *)0x0);
        fVar9 = pVVar13->x;
        RStack_7._pattern = (String *)((float)RStack_7._pattern * fVar9);
        value_00.y = (float)RStack_7._cultureKey * fVar9;
        value_00.x = (float)RStack_7._options * fVar9;
        value_00.z = (float)RStack_7._pattern;
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+Particle::
        ParticleSystem_Particle_set_velocity
                  ((ParticleSystem_Particle *)&DStack_1,value_00,(MethodInfo *)0x0);
        pMVar14 = (this->fields).itemBase;
        if ((pMVar14 != (MVEditablePickupItemBase *)0x0) &&
           ((pMVar15 = MVEditablePickupItemBase::MVEditablePickupItemBase_get_BaseObject
                                 (pMVar14,(MethodInfo *)0x0),
            pMVar15 != (MVEditablePickupItemBaseObject *)0x0 &&
            (this_00 = (pMVar15->fields)._._.mainCollider, this_00 != (Collider *)0x0)))) {
          pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)this_00,(MethodInfo *)0x0);
          pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_size
                             (&BStack_4.m_Extents,(Bounds *)&DStack_1,(MethodInfo *)0x0);
          if (pTVar12 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                      (pTVar12,*pVVar13,(MethodInfo *)0x0);
            pMVar14 = (this->fields).itemBase;
            if (pMVar14 != (MVEditablePickupItemBase *)0x0) {
              MVLogicObject::MVLogicObject_SetLocalBounds((MVLogicObject *)pMVar14,(MethodInfo *)0x0)
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
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
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
      uVar10 = *(ushort *)(*piVar6 + 0xb2);
      if (uVar10 != 0) {
        do {
          if (*(IEnumerator__Class **)(*(int *)(*piVar6 + 0x58) + (uint)uVar9 * 8) ==
              TypeInfo__System__Collections__IEnumerator) {
            puVar11 = (undefined4 *)
                     (*(int *)(*(int *)(*piVar6 + 0x58) + 4 + (uint)uVar9 * 8) * 8 + 0xc4 + *piVar6
                     );
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
      if (*(Collider **)(iVar8 + 0xc) == (Collider *)0x0) break;
      UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                (*(Collider **)(iVar8 + 0xc),state,(MethodInfo *)0x0);
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


/* Int32 get_CubeModelId() */

int32_t Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::EditablePickupItem::
        MVEditablePickupItemBaseBlueprint::MVEditablePickupItemBaseBlueprint_get_CubeModelId
                  (MVEditablePickupItemBaseBlueprint *this,MethodInfo *method)

{
  return (this->fields).cubeModelId;
}


/* Int32 get_CubeModelPid() */

int32_t Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::EditablePickupItem::
        MVEditablePickupItemBaseBlueprint::MVEditablePickupItemBaseBlueprint_get_CubeModelPid
                  (MVEditablePickupItemBaseBlueprint *this,MethodInfo *method)

{
  return (this->fields).cubeModelPid;
}


/* MVEditablePickupItemBase get_ItemBase() */

MVEditablePickupItemBase *
Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::EditablePickupItem::
MVEditablePickupItemBaseBlueprint::MVEditablePickupItemBaseBlueprint_get_ItemBase
          (MVEditablePickupItemBaseBlueprint *this,MethodInfo *method)

{
  return (this->fields).itemBase;
}

