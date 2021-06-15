
/* Void Awake() */

void Assembly-CSharp.dll::TypePoolManager::TypePoolManager_Awake
               (TypePoolManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iStack_1 = 0;
  pLVar2 = (this->fields).pool;
  while (pLVar2 != (List_1_Pool_ *)0x0) {
    pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                        MethodInfo__System__Collections__Generic__List<Pool>__get_Count__);
    pLVar2 = (this->fields).pool;
    if ((int)pOVar3 <= iStack_1) {
      if (TypeInfo__TypePoolManager->static_fields->__f__am_cache0 == (Func_2_Pool_Type_ *)0x0) {
        this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?(TypeInfo__System__Func<Pool,_System::Type>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_01,(Object *)0x0,MethodInfo__TypePoolManager___Awake_m__0_Pool_,
                   MethodInfo__System__Func<Pool,_System::Type>__Func_System__Object__void__);
        TypeInfo__TypePoolManager->static_fields->__f__am_cache0 = (Func_2_Pool_Type_ *)this_01;
      }
      pDVar4 = (Dictionary_2_System_Type_Pool_ *)
               System.Core.dll::System::Linq::Enumerable::Enumerable_ThenBy_6
                         ((IOrderedEnumerable_1_System_Object_ *)pLVar2,
                          (Func_2_Object_Int64_ *)
                          TypeInfo__TypePoolManager->static_fields->__f__am_cache0,
                          System__Collections__Generic__Dictionary<System::Type,_Pool>_MethodInfo__System__Linq__Enumerable__ToDictionary<Pool,_System::Type>_System__Collections__Generic__IEnumerable<Pool>__System__Func<Pool,_System::Type>_
                         );
      (this->fields).poolAsDictionary = pDVar4;
      return;
    }
    if (pLVar2 == (List_1_Pool_ *)0x0) break;
    this_00 = (Pool *)mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                      IEventSystemHandler]::
                      List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar2,
                                 iStack_1,
                                 MethodInfo__System__Collections__Generic__List<Pool>__get_Item_int_
                                );
    parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (this_00 == (Pool *)0x0) break;
    Pool::Pool_Initialize(this_00,parent,(MethodInfo *)0x0);
    iStack_1 = iStack_1 + 1;
    pLVar2 = (this->fields).pool;
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Pool GetPool[Bullet]() */

Pool * Assembly-CSharp.dll::TypePoolManager::TypePoolManager_GetPool_1
                 (TypePoolManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).poolAsDictionary;
  handle.value = *method->parameters;
  if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Type->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Type);
  }
  key = mscorlib.dll::System::Type::Type_GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (this_00 != (Dictionary_2_System_Type_Pool_ *)0x0) {
    pPVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       (this_00,key,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Type,_Pool>__get_Item_System__Type_
                       );
    return pPVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pPVar1 = (Pool *)(*pcVar2)();
  return pPVar1;
}


/* Object Instantiate[Object]() */

Object * Assembly-CSharp.dll::TypePoolManager::TypePoolManager_Instantiate
                   (TypePoolManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).poolAsDictionary;
  handle.value = *method->parameters;
  if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Type->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Type);
  }
  key = mscorlib.dll::System::Type::Type_GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (this_00 != (Dictionary_2_System_Type_Pool_ *)0x0) {
    pPVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       (this_00,key,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Type,_Pool>__get_Item_System__Type_
                       );
    if (pPVar1 != (Pool *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pOVar2 = (Object *)(*(code *)method->parameters[1]->data)();
      return pOVar2;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pOVar2 = (Object *)(*pcVar3)();
  return pOVar2;
}


/* Void Return[Object](Object) */

void Assembly-CSharp.dll::TypePoolManager::TypePoolManager_Return
               (TypePoolManager *this,Object *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).poolAsDictionary;
  handle.value = *method->parameters;
  if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Type->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Type);
  }
  key = mscorlib.dll::System::Type::Type_GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if ((this_00 == (Dictionary_2_System_Type_Pool_ *)0x0) ||
     (pPVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         (this_00,key,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Type,_Pool>__get_Item_System__Type_
                         ), pPVar1 == (Pool *)0x0)) {
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  item = UIPushOption__Enum_None;
  iVar3 = *(int *)(in_stack_4 + 0x1c);
  if (iVar3 != 0) {
    method = (MethodInfo *)0x10;
    do {
      if (*(int *)(iVar3 + 0xc) <= (int)item) {
        if (in_stack_5 != (Component_1 *)0x0) {
          pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             (in_stack_5,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                    ((Object_1 *)pGVar6,(MethodInfo *)0x0);
          return;
        }
        break;
      }
      if (iVar3 == 0) break;
      if (*(UIPushOption__Enum *)(iVar3 + 0xc) <= item) goto code_?;
      x = *(Object_1 **)((int)&method->methodPointer + iVar3);
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        (x,(Object_1 *)in_stack_5,(MethodInfo *)0x0);
      if (bVar7 != 0) {
        if ((in_stack_5 != (Component_1 *)0x0) &&
           (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                               (in_stack_5,(MethodInfo *)0x0), pGVar6 != (GameObject *)0x0))
        {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar6,0,(MethodInfo *)0x0);
          this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                              (in_stack_5,(MethodInfo *)0x0);
          if (this_01 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                      (this_01,*(Transform **)(in_stack_4 + 0x14),(MethodInfo *)0x0);
            if (*(List_1_UIPushOption_ **)(in_stack_4 + 0x18) != (List_1_UIPushOption_ *)0x0)
            {
              mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
              List_1_UIPushOption__Add
                        (*(List_1_UIPushOption_ **)(in_stack_4 + 0x18),item,
                         MethodInfo__System__Collections__Generic__List<int>__Add_int_);
              return;
            }
          }
        }
        break;
      }
      item = item + UIPushOption__Enum_Blocking;
      method = (MethodInfo *)&method->virtualMethodPointer;
      iVar3 = *(int *)(in_stack_4 + 0x1c);
    } while (iVar3 != 0);
  }
  func_?(0);
code_?:
  uVar8 = func_?(0,0);
  func_?(uVar8);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::TypePoolManager::TypePoolManager_Update
               (TypePoolManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Input::Input_GetKeyDown
                    (KeyCode__Enum_A,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    pPVar2 = TypePoolManager_GetPool_1(this,Pool_MethodInfo__TypePoolManager__GetPool<Bullet>__);
    if (pPVar2 == (Pool *)0x0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      this = (TypePoolManager *)StringLiteral_Noooo_;
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Noooo_,(MethodInfo *)0x0);
    }
    else {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      this = (TypePoolManager *)StringLiteral_YEAH_;
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)StringLiteral_YEAH_,(MethodInfo *)0x0);
    }
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Input::Input_GetKeyDown
                    (KeyCode__Enum_B,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    pPVar2 = TypePoolManager_GetPool_1(this,Pool_MethodInfo__TypePoolManager__GetPool<Bullet>__);
    if (pPVar2 != (Pool *)0x0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_What_,(MethodInfo *)0x0);
      return;
    }
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
              ((Object *)StringLiteral_Intended,(MethodInfo *)0x0);
  }
  return;
}


/* Type <Awake>m__0(Pool) */

Type * Assembly-CSharp.dll::TypePoolManager::TypePoolManager__Awake_m__0(Pool *p,MethodInfo *method)

{
  if (p != (Pool *)0x0) {
    pIVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)p,(MethodInfo *)0x0);
    if (pIVar1 != (IList_1_VoxelHit_ *)0x0) {
      pTVar2 = (Type *)func_?();
      return pTVar2;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pTVar2 = (Type *)(*pcVar3)();
  return pTVar2;
}

