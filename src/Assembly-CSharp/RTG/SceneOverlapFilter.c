
/* Void FilterOverlaps(List`1[UnityEngine.GameObject]) */

void Assembly-CSharp.dll::RTG::SceneOverlapFilter::SceneOverlapFilter_FilterOverlaps
               (SceneOverlapFilter *this,List_1_UnityEngine_GameObject_ *gameObjects,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__RemoveAll_System__Predicate<UnityEngine::GameObject>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Predicate<UnityEngine::GameObject>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__RTG__SceneOverlapFilter___FilterOverlaps_b__10_0_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Predicate_1_Object_ *)
            FUN_?(TypeInfo__System__Predicate<UnityEngine::GameObject>);
  mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__RTG__SceneOverlapFilter___FilterOverlaps_b__10_0_UnityEngine__GameObject_,
             (MethodInfo *)0x0);
  if (gameObjects == (List_1_UnityEngine_GameObject_ *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (this_00 == (Predicate_1_Object_ *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentNullException
              (ExceptionArgument__Enum_match,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  index = 0;
  if ((gameObjects->fields)._size < 1) {
DAT_?:
    if ((int)index < (gameObjects->fields)._size) {
      uVar2 = index + 1;
      if ((int)uVar2 < (gameObjects->fields)._size) {
        lVar3 = (longlong)(int)uVar2;
code_?:
        lVar4 = lVar3 * 8 + 0x20;
        uVar5 = uVar2;
        do {
          pGVar6 = (gameObjects->fields)._items;
          if (pGVar6 == (GameObject__Array *)0x0) goto code_?;
          if ((uint)pGVar6->max_length <= uVar5) goto DAT_?;
          cVar7 = (*(this_00->fields)._._.invoke_impl)
                            ((this_00->fields)._._.method_code,
                             *(undefined8 *)((longlong)pGVar6->vector + lVar4 + -0x20),
                             (this_00->fields)._._.method);
          lVar8 = lVar3;
          if (cVar7 == '\0') break;
          uVar5 = uVar5 + 1;
          lVar3 = lVar3 + 1;
          lVar4 = lVar4 + 8;
          lVar8 = lVar3;
        } while ((int)uVar5 < (gameObjects->fields)._size);
        if ((int)uVar5 < (gameObjects->fields)._size) goto code_?;
      }
code_?:
      mscorlib.dll::System::Array::Array_Clear
                ((Array *)(gameObjects->fields)._items,index,(gameObjects->fields)._size - index,
                 (MethodInfo *)0x0);
      piVar9 = &(gameObjects->fields)._version;
      *piVar9 = *piVar9 + 1;
      (gameObjects->fields)._size = index;
    }
  }
  else {
    lVar3 = 0x20;
    do {
      pGVar6 = (gameObjects->fields)._items;
      if (pGVar6 == (GameObject__Array *)0x0) goto code_?;
      if ((uint)pGVar6->max_length <= index) goto DAT_?;
      cVar7 = (*(this_00->fields)._._.invoke_impl)
                        ((this_00->fields)._._.method_code,
                         *(undefined8 *)((longlong)pGVar6->vector + lVar3 + -0x20),
                         (this_00->fields)._._.method);
      if (cVar7 != '\0') goto DAT_?;
      index = index + 1;
      lVar3 = lVar3 + 8;
    } while ((int)index < (gameObjects->fields)._size);
  }
  return;
code_?:
  pGVar6 = (gameObjects->fields)._items;
  lVar4 = (longlong)(int)index;
  lVar3 = lVar8 + 1;
  index = index + 1;
  uVar2 = uVar5 + 1;
  if (pGVar6 == (GameObject__Array *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((uint)pGVar6->max_length <= uVar5) {
DAT_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_?((gameObjects->fields)._items,lVar4,pGVar6->vector[lVar8]);
  if ((gameObjects->fields)._size <= (int)uVar2) goto code_?;
  goto code_?;
}


/* Boolean <FilterOverlaps>b__10_0(GameObject) */

bool Assembly-CSharp.dll::RTG::SceneOverlapFilter::SceneOverlapFilter__FilterOverlaps_b__10_0
               (SceneOverlapFilter *this,GameObject *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GameObjectEx);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::GameObjectType>__Contains_RTG__GameObjectType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Contains_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._allowedObjectTypes;
  if (*(int *)&(TypeInfo__RTG__GameObjectEx->_1).field_0x1c == 0) {
    FUN_?();
  }
  GVar2 = GameObjectEx::GameObjectEx_GetGameObjectType(item,(MethodInfo *)0x0);
  if (pLVar1 != (List_1_RTG_GameObjectType_ *)0x0) {
    if (((pLVar1->fields)._size == 0) ||
       (iVar3 = FUN_?(pLVar1,GVar2,
                              MethodInfo__System__Collections__Generic__List<RTG::GameObjectType>__Contains_RTG__GameObjectType_
                              ->klass->rgctx_data[0x17].rgctxDataDummy), iVar3 == -1)) {
      return 1;
    }
    if ((this->fields)._ignoreObjects != (List_1_UnityEngine_GameObject_ *)0x0) {
      cVar4 = FUN_?();
      if (cVar4 != '\0') {
        return 1;
      }
      uVar5 = (this->fields)._layerMask;
      if (item != (GameObject *)0x0) {
        iVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer
                          (item,(MethodInfo *)0x0);
        return (uVar5 & 1 << ((byte)iVar6 & 0x1f)) == 0;
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  bVar8 = (*pcVar7)();
  return bVar8;
}


/* SceneOverlapFilter() */

void Assembly-CSharp.dll::RTG::SceneOverlapFilter::SceneOverlapFilter__ctor
               (SceneOverlapFilter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::GameObjectType>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<RTG::GameObjectType>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (List_1_RTG_GameObjectType_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<RTG::GameObjectType>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<RTG::GameObjectType>__List__);
  bVar1 = iRam_? != 0;
  (this->fields)._allowedObjectTypes = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  this_01 = (List_1_UnityEngine_GameObject_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
             MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__);
  bVar1 = iRam_? != 0;
  (this->fields)._ignoreObjects = this_01;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._ignoreObjects >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  (this->fields)._layerMask = -1;
  return;
}

