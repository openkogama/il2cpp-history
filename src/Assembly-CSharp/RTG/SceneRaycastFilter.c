
/* Void FilterHits(List`1[RTG.GameObjectRayHit]) */

void Assembly-CSharp.dll::RTG::SceneRaycastFilter::SceneRaycastFilter_FilterHits
               (SceneRaycastFilter *this,List_1_RTG_GameObjectRayHit_ *hits,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GameObjectRayHit>__RemoveAll_System__Predicate<RTG::GameObjectRayHit>_
                   );
    func_?(&TypeInfo__System__Predicate<RTG::GameObjectRayHit>);
    func_?(&MethodInfo__RTG__SceneRaycastFilter___FilterHits_b__10_0_RTG__GameObjectRayHit_
                   );
    cRam_? = '\x01';
  }
  this_00 = (Predicate_1_Object_ *)
            func_?(TypeInfo__System__Predicate<RTG::GameObjectRayHit>);
  mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__RTG__SceneRaycastFilter___FilterHits_b__10_0_RTG__GameObjectRayHit_,
             (MethodInfo *)0x0);
  if (hits != (List_1_RTG_GameObjectRayHit_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
    List_1_System_Object__RemoveAll
              ((List_1_System_Object_ *)hits,this_00,
               MethodInfo__System__Collections__Generic__List<RTG::GameObjectRayHit>__RemoveAll_System__Predicate<RTG::GameObjectRayHit>_
              );
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Boolean <FilterHits>b__10_0(GameObjectRayHit) */

bool Assembly-CSharp.dll::RTG::SceneRaycastFilter::SceneRaycastFilter__FilterHits_b__10_0
               (SceneRaycastFilter *this,GameObjectRayHit *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GameObjectEx);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::GameObjectType>__Contains_RTG__GameObjectType_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Contains_UnityEngine__GameObject_
                   );
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Int32Enum_ *)(this->fields)._allowedObjectTypes;
  if (item != (GameObjectRayHit *)0x0) {
    pGVar1 = (item->fields)._hitObject;
    if ((TypeInfo__RTG__GameObjectEx->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RTG__GameObjectEx);
    }
    item_00 = GameObjectEx::GameObjectEx_GetGameObjectType(pGVar1,(MethodInfo *)0x0);
    if (this_00 != (List_1_System_Int32Enum_ *)0x0) {
      bVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Int32Enum]::
              List_1_System_Int32Enum__Contains
                        (this_00,item_00,
                         MethodInfo__System__Collections__Generic__List<RTG::GameObjectType>__Contains_RTG__GameObjectType_
                        );
      if (bVar2 == 0) {
        return 1;
      }
      this_01 = (this->fields)._ignoreObjects;
      if (this_01 != (List_1_UnityEngine_GameObject_ *)0x0) {
        bVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                List_1_System_Object__Contains
                          ((List_1_System_Object_ *)this_01,(Object *)(item->fields)._hitObject,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Contains_UnityEngine__GameObject_
                          );
        if (bVar2 != 0) {
          return 1;
        }
        pGVar1 = (item->fields)._hitObject;
        layerBits = (this->fields)._layerMask;
        if (pGVar1 != (GameObject *)0x0) {
          layerNumber = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer
                                  (pGVar1,(MethodInfo *)0x0);
          bVar2 = LayerEx::LayerEx_IsLayerBitSet(layerBits,layerNumber,(MethodInfo *)0x0);
          return bVar2 == 0;
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* SceneRaycastFilter() */

void Assembly-CSharp.dll::RTG::SceneRaycastFilter::SceneRaycastFilter__ctor
               (SceneRaycastFilter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<RTG::GameObjectType>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
    func_?(&TypeInfo__System__Collections__Generic__List<RTG::GameObjectType>);
    cRam_? = '\x01';
  }
  this_00 = (List_1_RTG_GameObjectType_ *)
            func_?(TypeInfo__System__Collections__Generic__List<RTG::GameObjectType>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<RTG::GameObjectType>__List__);
  (this->fields)._allowedObjectTypes = this_00;
  func_?(&this->fields,this_00);
  this_01 = (List_1_UnityEngine_GameObject_ *)
            func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
             MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__);
  method_00 = (MethodInfo *)&(this->fields)._ignoreObjects;
  *(List_1_UnityEngine_GameObject_ **)method_00 = this_01;
  func_?(method_00,this_01);
  (this->fields)._layerMask = -1;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}

