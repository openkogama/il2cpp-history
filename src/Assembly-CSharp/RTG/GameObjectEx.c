
/* Void FilterParentsOnly(IEnumerable`1[UnityEngine.GameObject], List`1[UnityEngine.GameObject]) */

void Assembly-CSharp.dll::RTG::GameObjectEx::GameObjectEx_FilterParentsOnly
               (IEnumerable_1_UnityEngine_GameObject_ *gameObjects,
               List_1_UnityEngine_GameObject_ *parents,MethodInfo *method)

{
  uStack_1._0_1_ = 0xff;
  uStack_1._1_3_ = 0xffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::GameObject>);
    func_?(&TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::GameObject>);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Clear__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if (gameObjects != (IEnumerable_1_UnityEngine_GameObject_ *)0x0) {
    if (parents != (List_1_UnityEngine_GameObject_ *)0x0) {
      iVar4 = (parents->fields)._size;
      piVar5 = &(parents->fields)._version;
      *piVar5 = *piVar5 + 1;
      (parents->fields)._size = 0;
      if (0 < iVar4) {
        mscorlib.dll::System::Array::Array_Clear
                  ((Array *)(parents->fields)._items,0,iVar4,(MethodInfo *)0x0);
      }
      iVar4 = func_?(0,
                              TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::GameObject>
                              ,gameObjects);
      uStack_1 = 0;
code_?:
      uStack_1._0_1_ = 1;
      while (iVar4 != 0) {
        cVar6 = func_?(0,TypeInfo__System__Collections__IEnumerator,iVar4);
        if (cVar6 == '\0') {
          uStack_1._0_1_ = 0xff;
          uStack_1._1_3_ = 0xffffff;
          if (iVar4 != 0) {
            func_?(0,TypeInfo__System__IDisposable,iVar4);
          }
          goto code_?;
        }
        if (iVar4 == 0) break;
        this = (GameObject *)
               func_?(0,
                               TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::GameObject>
                               ,iVar4);
        if (this == (GameObject *)0x0) break;
        this_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (this,(MethodInfo *)0x0);
        iVar7 = func_?(0);
        uStack_1._0_1_ = 3;
        while( true ) {
          if (iVar7 == 0) goto code_?;
          cVar6 = func_?(0,TypeInfo__System__Collections__IEnumerator,iVar7);
          if (cVar6 == '\0') break;
          if (iVar7 == 0) goto code_?;
          this_01 = (GameObject *)
                    func_?(0,
                                    TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::GameObject>
                                    ,iVar7);
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          bVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                            ((Object_1 *)this_01,(Object_1 *)this,(MethodInfo *)0x0);
          if (bVar8 != 0) {
            if (this_01 == (GameObject *)0x0) goto code_?;
            parent = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (this_01,(MethodInfo *)0x0);
            if (this_00 == (Transform *)0x0) goto code_?;
            bVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_IsChildOf
                              (this_00,parent,(MethodInfo *)0x0);
            if (bVar8 != 0) {
              uStack_1 = CONCAT31(uStack_1._1_3_,1);
              func_?();
              goto code_?;
            }
          }
        }
        uStack_1._0_1_ = 1;
        func_?();
        uStack_1._0_1_ = 1;
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  ((List_1_System_Object_ *)parents,(Object *)this,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                  );
      }
    }
code_?:
    uVar9 = func_?();
    func_?(uVar9);
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
code_?:
  *unaff_FS_OFFSET = uStack_3;
  return;
}


/* List`1[UnityEngine.GameObject] FilterParentsOnly(IEnumerable`1[UnityEngine.GameObject]) */

List_1_UnityEngine_GameObject_ *
Assembly-CSharp.dll::RTG::GameObjectEx::GameObjectEx_FilterParentsOnly_1
          (IEnumerable_1_UnityEngine_GameObject_ *gameObjects,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb0;
  puVar5 = &stack0xffffffb0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::GameObject>);
    func_?(&TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::GameObject>);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List_int_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  iStack_6 = 0;
  this = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
          *)func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
  if (gameObjects == (IEnumerable_1_UnityEngine_GameObject_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this,
               MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__);
    *unaff_FS_OFFSET = uStack_3;
    return (List_1_UnityEngine_GameObject_ *)this;
  }
  IStack_7.monitor = (MonitorData *)this;
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
  MultiColumnCollectionHeader+ViewState+ColumnState]::
  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
            (this,10,
             MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List_int_);
  IStack_7.klass =
       (IEnumerable_1_UnityEngine_GameObject___Class *)
       func_?(0,
                       TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::GameObject>,
                       gameObjects);
  pIStack_8 = &IStack_7;
  uStack_1 = 0;
code_?:
  uStack_1._0_1_ = 1;
  while (IStack_7.klass != (IEnumerable_1_UnityEngine_GameObject___Class *)0x0) {
    cVar9 = func_?();
    if (cVar9 == '\0') {
      uStack_1 = 0xffffffff;
      if (pIStack_8->klass != (IEnumerable_1_UnityEngine_GameObject___Class *)0x0) {
        func_?();
        *unaff_FS_OFFSET = uStack_3;
        return (List_1_UnityEngine_GameObject_ *)this;
      }
      *unaff_FS_OFFSET = uStack_3;
      return (List_1_UnityEngine_GameObject_ *)this;
    }
    if (IStack_7.klass == (IEnumerable_1_UnityEngine_GameObject___Class *)0x0) break;
    this_00 = (GameObject *)func_?();
    uStack_10 = 0;
    if (this_00 == (GameObject *)0x0) break;
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (this_00,(MethodInfo *)0x0);
    pIStack_8 = gameObjects;
    iStack_6 = func_?();
    uStack_1._0_1_ = 3;
    while( true ) {
      if (iStack_6 == 0) goto code_?;
      cVar9 = func_?();
      if (cVar9 == '\0') break;
      if (iStack_6 == 0) goto code_?;
      this_02 = (GameObject *)func_?();
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)this_02,(Object_1 *)this_00,(MethodInfo *)0x0);
      if (bVar11 != 0) {
        if (this_02 == (GameObject *)0x0) goto code_?;
        parent = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (this_02,(MethodInfo *)0x0);
        if (this_01 == (Transform *)0x0) goto code_?;
        bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_IsChildOf
                          (this_01,parent,(MethodInfo *)0x0);
        if (bVar11 != 0) {
          uStack_10 = 1;
          uStack_1 = CONCAT31(uStack_1._1_3_,1);
          func_?();
          this = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                  *)IStack_7.monitor;
          goto code_?;
        }
      }
    }
    uStack_1._0_1_ = 1;
    func_?();
    this = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
            *)IStack_7.monitor;
    uStack_1._0_1_ = 1;
    if ((List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_ *
        )IStack_7.monitor ==
        (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_ *
        )0x0) break;
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)IStack_7.monitor,(Object *)this_00,
               MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
              );
  }
code_?:
  func_?();
  func_?();
  func_?();
  pcVar12 = (code *)swi(3);
  pLVar13 = (List_1_UnityEngine_GameObject_ *)(*pcVar12)();
  return pLVar13;
}


/* List`1[UnityEngine.GameObject] GetAllChildren(GameObject) */

List_1_UnityEngine_GameObject_ *
Assembly-CSharp.dll::RTG::GameObjectEx::GameObjectEx_GetAllChildren
          (GameObject *gameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__Transform__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Transform>______
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List_int_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if (gameObject != (GameObject *)0x0) {
    pOStack_1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                 GameObject_GetComponentsInChildren
                           (gameObject,
                            UnityEngine__Transform__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Transform>______
                           );
    if (pOStack_1 != (Object__Array *)0x0) {
      this_00 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                 *)func_?(
                                  TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>
                                  );
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
      MultiColumnCollectionHeader+ViewState+ColumnState]::
      List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
                (this_00,pOStack_1->max_length,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List_int_)
      ;
      ppOVar2 = pOStack_1->vector;
      uVar3 = 0;
      while( true ) {
        if ((int)pOStack_1->max_length <= (int)uVar3) {
          return (List_1_UnityEngine_GameObject_ *)this_00;
        }
        if (pOStack_1->max_length <= uVar3) break;
        this = (Component *)*ppOVar2;
        if (this == (Component *)0x0) goto code_?;
        x = (Object_1__Class *)
            UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      (this,(MethodInfo *)0x0);
        pOVar4 = TypeInfo__UnityEngine__Object;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
          x = pOVar4;
        }
        bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)x,(Object_1 *)gameObject,(MethodInfo *)0x0);
        if (bVar5 != 0) {
          item = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (this,(MethodInfo *)0x0);
          if (this_00 ==
              (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
               *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Add
                    ((List_1_System_Object_ *)this_00,(Object *)item,
                     MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                    );
        }
        uVar3 = uVar3 + 1;
        ppOVar2 = ppOVar2 + 1;
      }
      goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  pLVar7 = (List_1_UnityEngine_GameObject_ *)(*pcVar6)();
  return pLVar7;
}


/* List`1[UnityEngine.GameObject] GetAllChildrenAndSelf(GameObject) */

List_1_UnityEngine_GameObject_ *
Assembly-CSharp.dll::RTG::GameObjectEx::GameObjectEx_GetAllChildrenAndSelf
          (GameObject *gameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__Transform__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Transform>______
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List_int_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
    cRam_? = '\x01';
  }
  if (gameObject != (GameObject *)0x0) {
    pOVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren
                       (gameObject,
                        UnityEngine__Transform__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Transform>______
                       );
    if (pOVar1 != (Object__Array *)0x0) {
      this = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
              *)func_?(
                               TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>
                               );
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
      MultiColumnCollectionHeader+ViewState+ColumnState]::
      List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
                (this,pOVar1->max_length,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List_int_)
      ;
      ppOVar2 = pOVar1->vector;
      uVar3 = 0;
      while( true ) {
        if ((int)pOVar1->max_length <= (int)uVar3) {
          return (List_1_UnityEngine_GameObject_ *)this;
        }
        if (pOVar1->max_length <= uVar3) break;
        if ((Component *)*ppOVar2 == (Component *)0x0) goto code_?;
        item = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)*ppOVar2,(MethodInfo *)0x0);
        if (this == (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                     *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  ((List_1_System_Object_ *)this,(Object *)item,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                  );
        uVar3 = uVar3 + 1;
        ppOVar2 = ppOVar2 + 1;
      }
      goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  pLVar5 = (List_1_UnityEngine_GameObject_ *)(*pcVar4)();
  return pLVar5;
}


/* Void GetAllChildrenAndSelf(GameObject, List`1[UnityEngine.GameObject]) */

void Assembly-CSharp.dll::RTG::GameObjectEx::GameObjectEx_GetAllChildrenAndSelf_1
               (GameObject *gameObject,List_1_UnityEngine_GameObject_ *childrenAndSelf,
               MethodInfo *method)

{
  _Stack_8 = (_union_155)0xffffffff;
  _Stack_c.rgctx_data = (Il2CppRGCTXData *)&DAT_?;
  ppIStack_1 = (Il2CppType **)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &ppIStack_1;
  pIStack_2 = (Il2CppType *)&stack0xffffffbc;
  pIVar3 = (Il2CppType *)&stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Transform>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Transform>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Transform>__get_Current__
                   );
    func_?(&TypeInfo__RTG__GameObjectEx);
    func_?(&
                    void_MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Transform>_System__Collections__Generic__List<UnityEngine::Transform>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Clear__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__Clear__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__GetEnumerator__
                   );
    cRam_? = '\x01';
    pIVar3 = pIStack_2;
  }
  pIStack_2 = pIVar3;
  LStack_4._list = (List_1_System_Object_ *)0x0;
  LStack_4._index = 0;
  LStack_4._version = 0;
  LStack_4._current = (Object *)0x0;
  if (childrenAndSelf != (List_1_UnityEngine_GameObject_ *)0x0) {
    iVar5 = (childrenAndSelf->fields)._size;
    piVar6 = &(childrenAndSelf->fields)._version;
    *piVar6 = *piVar6 + 1;
    (childrenAndSelf->fields)._size = 0;
    if (0 < iVar5) {
      mscorlib.dll::System::Array::Array_Clear
                ((Array *)(childrenAndSelf->fields)._items,0,iVar5,(MethodInfo *)0x0);
    }
    if ((TypeInfo__RTG__GameObjectEx->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RTG__GameObjectEx);
    }
    pLVar7 = TypeInfo__RTG__GameObjectEx->static_fields->_transformsChildren;
    if (pLVar7 != (List_1_UnityEngine_Transform_ *)0x0) {
      iVar5 = (pLVar7->fields)._size;
      piVar6 = &(pLVar7->fields)._version;
      *piVar6 = *piVar6 + 1;
      (pLVar7->fields)._size = 0;
      if (0 < iVar5) {
        mscorlib.dll::System::Array::Array_Clear
                  ((Array *)(pLVar7->fields)._items,0,iVar5,(MethodInfo *)0x0);
      }
      if (gameObject != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren_3
                  (gameObject,
                   (List_1_System_Object_ *)
                   TypeInfo__RTG__GameObjectEx->static_fields->_transformsChildren,
                   void_MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Transform>_System__Collections__Generic__List<UnityEngine::Transform>_
                  );
        this = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               TypeInfo__RTG__GameObjectEx->static_fields->_transformsChildren;
        if (this != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
          method_00 = (MethodInfo *)&stack0xffffffd8;
          pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                   RegularExpressions::RegexCharClass+SingleRange]::
                   List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                             ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                               *)method_00,this,
                              MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__GetEnumerator__
                             );
          LStack_4._list = (List_1_System_Object_ *)pLVar8->_list;
          LStack_4._index = pLVar8->_index;
          LStack_4._version = pLVar8->_version;
          LStack_4._current = *(Object **)&pLVar8->_current;
          pIStack_9 = (InvokerMethod)0x0;
          _Stack_8 = (_union_155)0x1;
          pLStack_10 = &LStack_4;
          while( true ) {
            bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                    ::List_1_T_Enumerator_System_Object__MoveNext
                              (&LStack_4,
                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Transform>__MoveNext__
                              );
            if (bVar11 == 0) {
              _Stack_8 = (_union_155)0xffffffff;
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                        ((Object *)&LStack_4,
                         (ExceptionArgument__Enum)
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Transform>__Dispose__
                         ,method_00);
              *unaff_FS_OFFSET = ppIStack_1;
              return;
            }
            if ((RegexCharClass_SingleRange)LStack_4._current == (RegexCharClass_SingleRange)0x0)
            break;
            method_00 = (MethodInfo *)
                        UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)LStack_4._current,(MethodInfo *)0x0);
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Add
                      ((List_1_System_Object_ *)childrenAndSelf,(Object *)method_00,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                      );
          }
        }
      }
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* GameObjectType GetGameObjectType(GameObject) */

GameObjectType__Enum
Assembly-CSharp.dll::RTG::GameObjectEx::GameObjectEx_GetGameObjectType
          (GameObject *gameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GameObjectEx);
    func_?(&
                    UnityEngine__Camera_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Camera>__
                   );
    func_?(&
                    UnityEngine__Light_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Light>__
                   );
    func_?(&
                    UnityEngine__ParticleSystem_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::ParticleSystem>__
                   );
    func_?(&
                    UnityEngine__Terrain_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Terrain>__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__GameObjectEx->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__GameObjectEx);
  }
  x = GameObjectEx_GetMesh(gameObject,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    return GameObjectType__Enum_Mesh;
  }
  if (gameObject == (GameObject *)0x0) {
    func_?();
    pcVar2 = (code *)swi(3);
    GVar3 = (*pcVar2)();
    return GVar3;
  }
  pOVar4 = (Object_1 *)
           UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                     (gameObject,
                      UnityEngine__Terrain_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Terrain>__
                     );
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    (pOVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    if ((TypeInfo__RTG__GameObjectEx->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    x_00 = GameObjectEx_GetSprite(gameObject,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)x_00,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      return GameObjectType__Enum_Sprite;
    }
    pOVar4 = (Object_1 *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                       (gameObject,
                        UnityEngine__Camera_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Camera>__
                       );
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      (pOVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      pOVar4 = (Object_1 *)
               UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                         (gameObject,
                          UnityEngine__Light_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Light>__
                         );
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        (pOVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        pOVar4 = (Object_1 *)
                 UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                           (gameObject,
                            UnityEngine__ParticleSystem_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::ParticleSystem>__
                           );
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          (pOVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
        GVar3 = GameObjectType__Enum_ParticleSystem;
        if (bVar1 == 0) {
          GVar3 = GameObjectType__Enum_Empty;
        }
        return GVar3;
      }
      return GameObjectType__Enum_Light;
    }
    return GameObjectType__Enum_Camera;
  }
  return GameObjectType__Enum_Terrain;
}


/* Mesh GetMesh(GameObject) */

Mesh * Assembly-CSharp.dll::RTG::GameObjectEx::GameObjectEx_GetMesh
                 (GameObject *gameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshFilter>__
                   );
    func_?(&
                    UnityEngine__SkinnedMeshRenderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::SkinnedMeshRenderer>__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if (gameObject != (GameObject *)0x0) {
    this = (MeshFilter *)
           UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                     (gameObject,
                      UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshFilter>__
                     );
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)this,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      if (this == (MeshFilter *)0x0) goto code_?;
      pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_sharedMesh
                         (this,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pMVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_sharedMesh
                           (this,(MethodInfo *)0x0);
        return pMVar2;
      }
    }
    this_00 = (SkinnedMeshRenderer *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                        (gameObject,
                         UnityEngine__SkinnedMeshRenderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::SkinnedMeshRenderer>__
                        );
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)this_00,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      if (this_00 == (SkinnedMeshRenderer *)0x0) goto code_?;
      pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::SkinnedMeshRenderer::
               SkinnedMeshRenderer_get_sharedMesh(this_00,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pMVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::SkinnedMeshRenderer::
                 SkinnedMeshRenderer_get_sharedMesh(this_00,(MethodInfo *)0x0);
        return pMVar2;
      }
    }
    return (Mesh *)0x0;
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  pMVar2 = (Mesh *)(*pcVar3)();
  return pMVar2;
}


/* List`1[UnityEngine.GameObject] GetMeshObjectsInHierarchy(GameObject) */

List_1_UnityEngine_GameObject_ *
Assembly-CSharp.dll::RTG::GameObjectEx::GameObjectEx_GetMeshObjectsInHierarchy
          (GameObject *root,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb4;
  puVar5 = &stack0xffffffb4;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__get_Current__
                   );
    func_?(&TypeInfo__RTG__GameObjectEx);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Count__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  if ((TypeInfo__RTG__GameObjectEx->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__GameObjectEx);
  }
  this = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
         GameObjectEx_GetAllChildrenAndSelf(root,(MethodInfo *)0x0);
  if (this != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    capacity = (this->fields)._size;
    this_00 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
               *)func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
    MultiColumnCollectionHeader+ViewState+ColumnState]::
    List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
              (this_00,capacity,
               MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List_int_);
    pLStack_6 = this_00;
    pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_8,this,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                       );
    method_00 = (MethodInfo *)pLVar7->_index;
    gameObject = pLVar7->_current;
    LStack_8._version = 0;
    uStack_1 = 1;
    LStack_8._current = (RegexCharClass_SingleRange)&stack0xffffffc0;
    while( true ) {
      do {
        bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffc0,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                          );
        if (bVar9 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&stack0xffffffc0,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
                     ,method_00);
          *unaff_FS_OFFSET = uStack_3;
          return (List_1_UnityEngine_GameObject_ *)this_00;
        }
        if ((TypeInfo__RTG__GameObjectEx->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pMStack_10 = GameObjectEx_GetMesh((GameObject *)gameObject,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          method_00 = (MethodInfo *)&UNK_?;
          func_?();
        }
        bVar9 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)pMStack_10,(Object_1 *)0x0,(MethodInfo *)0x0);
      } while (bVar9 == 0);
      if (this_00 ==
          (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
           *)0x0) break;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)this_00,(Object *)gameObject,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                );
    }
  }
  func_?();
  func_?();
  pcVar11 = (code *)swi(3);
  pLVar12 = (List_1_UnityEngine_GameObject_ *)(*pcVar11)();
  return pLVar12;
}


/* Renderer GetMeshRenderer(GameObject) */

Renderer *
Assembly-CSharp.dll::RTG::GameObjectEx::GameObjectEx_GetMeshRenderer
          (GameObject *gameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshRenderer>__
                   );
    func_?(&
                    UnityEngine__SkinnedMeshRenderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::SkinnedMeshRenderer>__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if (gameObject == (GameObject *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    pRVar2 = (Renderer *)(*pcVar1)();
    return pRVar2;
  }
  pRVar2 = (Renderer *)
           UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                     (gameObject,
                      UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshRenderer>__
                     );
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pRVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    pRVar2 = (Renderer *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                       (gameObject,
                        UnityEngine__SkinnedMeshRenderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::SkinnedMeshRenderer>__
                       );
    return pRVar2;
  }
  return pRVar2;
}


/* List`1[UnityEngine.GameObject] GetRoots(IEnumerable`1[UnityEngine.GameObject]) */

List_1_UnityEngine_GameObject_ *
Assembly-CSharp.dll::RTG::GameObjectEx::GameObjectEx_GetRoots
          (IEnumerable_1_UnityEngine_GameObject_ *gameObjects,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>__Clear__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>__Contains_UnityEngine__GameObject_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>__HashSet__
                   );
    func_?(&TypeInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>);
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::GameObject>);
    func_?(&TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::GameObject>);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
    cRam_? = '\x01';
  }
  pLVar4 = (List_1_UnityEngine_GameObject_ *)
           func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
  if (gameObjects == (IEnumerable_1_UnityEngine_GameObject_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar4,
               MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__);
    *unaff_FS_OFFSET = uStack_3;
    return pLVar4;
  }
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar4,
             MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__);
  this = (HashSet_1_System_Object_ *)
         func_?(TypeInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>);
  System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
  HashSet_1_System_Object___ctor
            (this,
             MethodInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>__HashSet__);
  piVar5 = (int *)func_?(0,
                                  TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::GameObject>
                                  ,gameObjects);
  uStack_1 = 1;
  do {
    if (piVar5 == (int *)0x0) {
code_?:
      func_?();
      func_?();
      pcVar6 = (code *)swi(3);
      pLVar4 = (List_1_UnityEngine_GameObject_ *)(*pcVar6)();
      return pLVar4;
    }
    cVar7 = func_?();
    if (cVar7 == '\0') {
      uStack_1 = 0xffffffff;
      if (piVar5 != (int *)0x0) {
        func_?();
      }
      uStack_1 = 0xffffffff;
      if (this != (HashSet_1_System_Object_ *)0x0) {
        System.Core.dll::System::Collections::Generic::HashSet`1[Unity::IL2CPP::Metadata::
        __Il2CppFullySharedGenericType]::
        HashSet_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__Clear
                  ((HashSet_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this,
                   MethodInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>__Clear__
                  );
        *unaff_FS_OFFSET = uStack_3;
        return pLVar4;
      }
      goto code_?;
    }
    if (piVar5 == (int *)0x0) goto code_?;
    uVar8 = 0;
    uVar9 = *(ushort *)(*piVar5 + 0xb6);
    if (uVar9 != 0) {
      do {
        if (*(IEnumerator_1_UnityEngine_GameObject___Class **)
             (*(int *)(*piVar5 + 0x58) + (uint)uVar8 * 8) ==
            TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::GameObject>) {
          puVar10 = (undefined4 *)
                   (*piVar5 + (*(int *)(*(int *)(*piVar5 + 0x58) + 4 + (uint)uVar8 * 8) + 0x18) * 8
                   );
          goto code_?;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar9);
    }
    puVar10 = (undefined4 *)func_?();
code_?:
    pGVar11 = (GameObject *)(*(code *)*puVar10)();
    if ((((pGVar11 == (GameObject *)0x0) ||
         (pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (pGVar11,(MethodInfo *)0x0), pTVar12 == (Transform *)0x0)) ||
        (pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetRoot
                            (pTVar12,(MethodInfo *)0x0), pTVar12 == (Transform *)0x0)) ||
       (pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pTVar12,(MethodInfo *)0x0),
       this == (HashSet_1_System_Object_ *)0x0)) goto code_?;
    bVar13 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
            HashSet_1_System_Object__Contains
                      (this,(Object *)pGVar11,
                       MethodInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>__Contains_UnityEngine__GameObject_
                      );
    if (bVar13 == 0) {
      System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
      HashSet_1_System_Object__System_Collections_Generic_ICollection_T__Add
                (this,(Object *)pGVar11,
                 MethodInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                );
      if (pLVar4 == (List_1_UnityEngine_GameObject_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)pLVar4,(Object *)pGVar11,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                );
    }
  } while( true );
}


/* Sprite GetSprite(GameObject) */

Sprite * Assembly-CSharp.dll::RTG::GameObjectEx::GameObjectEx_GetSprite
                   (GameObject *gameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__SpriteRenderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::SpriteRenderer>__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if (gameObject != (GameObject *)0x0) {
    this = (SpriteRenderer *)
           UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                     (gameObject,
                      UnityEngine__SpriteRenderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::SpriteRenderer>__
                     );
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)this,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      return (Sprite *)0x0;
    }
    if (this != (SpriteRenderer *)0x0) {
      pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::SpriteRenderer::SpriteRenderer_get_sprite
                         (this,(MethodInfo *)0x0);
      return pSVar2;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pSVar2 = (Sprite *)(*pcVar3)();
  return pSVar2;
}


/* List`1[UnityEngine.GameObject] GetSpriteObjectsInHierarchy(GameObject) */

List_1_UnityEngine_GameObject_ *
Assembly-CSharp.dll::RTG::GameObjectEx::GameObjectEx_GetSpriteObjectsInHierarchy
          (GameObject *root,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb4;
  puVar5 = &stack0xffffffb4;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__get_Current__
                   );
    func_?(&TypeInfo__RTG__GameObjectEx);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Count__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  if ((TypeInfo__RTG__GameObjectEx->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__GameObjectEx);
  }
  RStack_6 = (RegexCharClass_SingleRange)GameObjectEx_GetAllChildrenAndSelf(root,(MethodInfo *)0x0)
  ;
  if (RStack_6 != (RegexCharClass_SingleRange)0x0) {
    capacity = *(int32_t *)((int)RStack_6 + 0xc);
    this_00 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
               *)func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
    MultiColumnCollectionHeader+ViewState+ColumnState]::
    List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
              (this_00,capacity,
               MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List_int_);
    pLStack_7 = this_00;
    pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_9,
                        (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                        RStack_6,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                       );
    method_00 = (MethodInfo *)pLVar8->_index;
    this = pLVar8->_current;
    LStack_9._version = 0;
    uStack_1 = 1;
    LStack_9._current = (RegexCharClass_SingleRange)&stack0xffffffc0;
    while( true ) {
      bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffc0,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                        );
      if (bVar10 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&stack0xffffffc0,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
                   ,method_00);
        *unaff_FS_OFFSET = uStack_3;
        return (List_1_UnityEngine_GameObject_ *)this_00;
      }
      RStack_6 = this;
      if ((TypeInfo__RTG__GameObjectEx->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      if (cRam_? == '\0') {
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      if (this == (RegexCharClass_SingleRange)0x0) break;
      this_01 = (SpriteRenderer *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                          ((GameObject *)this,
                           UnityEngine__SpriteRenderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::SpriteRenderer>__
                          );
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar10 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        ((Object_1 *)this_01,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar10 == 0) {
        if (this_01 == (SpriteRenderer *)0x0) break;
        x = UnityEngine.CoreModule.dll::UnityEngine::SpriteRenderer::SpriteRenderer_get_sprite
                      (this_01,(MethodInfo *)0x0);
      }
      else {
        x = (Sprite *)0x0;
      }
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar10 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar10 != 0) {
        if (this_00 ==
            (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
             *)0x0) break;
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  ((List_1_System_Object_ *)this_00,(Object *)RStack_6,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                  );
      }
    }
  }
  func_?();
  func_?();
  pcVar11 = (code *)swi(3);
  pLVar12 = (List_1_UnityEngine_GameObject_ *)(*pcVar11)();
  return pLVar12;
}


/* Boolean HierarchyHasMesh(GameObject) */

bool Assembly-CSharp.dll::RTG::GameObjectEx::GameObjectEx_HierarchyHasMesh
               (GameObject *root,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  pMVar4 = (MethodInfo *)&stack0xffffffbc;
  method_00 = (MethodInfo *)&stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__get_Current__
                   );
    func_?(&TypeInfo__RTG__GameObjectEx);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
    method_00 = pMVar4;
  }
  if ((TypeInfo__RTG__GameObjectEx->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__GameObjectEx);
  }
  this = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
         GameObjectEx_GetAllChildrenAndSelf(root,(MethodInfo *)0x0);
  if (this != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                         *)&stack0xffffffd8,this,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                       );
    gameObject = pLVar5->_current;
    uStack_1 = 1;
    do {
      bVar6 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffc8,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                        );
      if (bVar6 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&stack0xffffffc8,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
                   ,(MethodInfo *)in_stack_7.methodMetadataHandle);
        *unaff_FS_OFFSET = uStack_3;
        return 0;
      }
      if ((TypeInfo__RTG__GameObjectEx->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      gameObject = (RegexCharClass_SingleRange)
                   GameObjectEx_GetMesh((GameObject *)gameObject,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      in_stack_7.rgctx_data = (Il2CppRGCTXData *)0x0;
      bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)gameObject,(Object_1 *)0x0,(MethodInfo *)0x0);
    } while (bVar6 == 0);
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&stack0xffffffc8,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
               ,method_00);
    *unaff_FS_OFFSET = uStack_3;
    return 1;
  }
  func_?();
  func_?();
  pcVar8 = (code *)swi(3);
  bVar6 = (*pcVar8)();
  return bVar6;
}


/* Boolean HierarchyHasObjectsOfType(GameObject, GameObjectType) */

bool Assembly-CSharp.dll::RTG::GameObjectEx::GameObjectEx_HierarchyHasObjectsOfType
               (GameObject *root,GameObjectType__Enum typeFlags,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__get_Current__
                   );
    func_?(&TypeInfo__RTG__GameObjectEx);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                   );
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__GameObjectEx->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__GameObjectEx);
  }
  this = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
         GameObjectEx_GetAllChildrenAndSelf(root,(MethodInfo *)0x0);
  if (this != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                         *)&stack0xffffffd8,this,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                       );
    method_00 = (MethodInfo *)0x0;
    uStack_1 = 1;
    gameObject = pLVar4->_current;
    do {
      bVar5 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffc8,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                        );
      if (bVar5 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&stack0xffffffc8,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
                   ,in_stack_6);
        *unaff_FS_OFFSET = uStack_3;
        return 0;
      }
      if ((TypeInfo__RTG__GameObjectEx->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      RVar7.First = 0;
      RVar7.Last = 0;
      GVar8 = GameObjectEx_GetGameObjectType((GameObject *)gameObject,(MethodInfo *)0x0);
      gameObject = RVar7;
    } while ((typeFlags & GVar8) == 0);
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&stack0xffffffc8,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
               ,method_00);
    *unaff_FS_OFFSET = uStack_3;
    return 1;
  }
  func_?();
  func_?();
  pcVar9 = (code *)swi(3);
  bVar5 = (*pcVar9)();
  return bVar5;
}


/* Boolean HierarchyHasSprite(GameObject) */

bool Assembly-CSharp.dll::RTG::GameObjectEx::GameObjectEx_HierarchyHasSprite
               (GameObject *root,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  pMVar4 = (MethodInfo *)&stack0xffffffbc;
  method_00 = (MethodInfo *)&stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__get_Current__
                   );
    func_?(&TypeInfo__RTG__GameObjectEx);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
    method_00 = pMVar4;
  }
  if ((TypeInfo__RTG__GameObjectEx->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__GameObjectEx);
  }
  this = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
         GameObjectEx_GetAllChildrenAndSelf(root,(MethodInfo *)0x0);
  if (this != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                         *)&stack0xffffffd8,this,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                       );
    gameObject = pLVar5->_current;
    uStack_1 = 1;
    do {
      bVar6 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffc8,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                        );
      if (bVar6 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&stack0xffffffc8,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
                   ,(MethodInfo *)in_stack_7.methodMetadataHandle);
        *unaff_FS_OFFSET = uStack_3;
        return 0;
      }
      if ((TypeInfo__RTG__GameObjectEx->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      gameObject = (RegexCharClass_SingleRange)
                   GameObjectEx_GetSprite((GameObject *)gameObject,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      in_stack_7.rgctx_data = (Il2CppRGCTXData *)0x0;
      bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)gameObject,(Object_1 *)0x0,(MethodInfo *)0x0);
    } while (bVar6 == 0);
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&stack0xffffffc8,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
               ,method_00);
    *unaff_FS_OFFSET = uStack_3;
    return 1;
  }
  func_?();
  func_?();
  pcVar8 = (code *)swi(3);
  bVar6 = (*pcVar8)();
  return bVar6;
}


/* Boolean IsRTGAppObject(GameObject) */

bool Assembly-CSharp.dll::RTG::GameObjectEx::GameObjectEx_IsRTGAppObject
               (GameObject *gameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (gameObject != (GameObject *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (gameObject,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetRoot
                         (pTVar1,(MethodInfo *)0x0);
      if (pTVar1 != (Transform *)0x0) {
        this = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pTVar1,(MethodInfo *)0x0);
        if (this != (GameObject *)0x0) {
          pOVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                             (this,
                              RTG__IRLDApplication_MethodInfo__UnityEngine__GameObject__GetComponent<RTG::IRLDApplication>__
                             );
          return pOVar2 != (Object *)0x0;
        }
      }
    }
  }
  uVar3 = func_?(&puStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Void SetHierarchyWorldScaleByPivot(GameObject, Vector3, Vector3) */

void Assembly-CSharp.dll::RTG::GameObjectEx::GameObjectEx_SetHierarchyWorldScaleByPivot
               (GameObject *root,Vector3 worldScale,Vector3 pivotPoint,MethodInfo *method)

{
  fStack_1 = worldScale.x;
  if (worldScale.x == 0.0) {
    fStack_1 = _UNK_?;
  }
  fStack_2 = worldScale.y;
  if (worldScale.y == 0.0) {
    fStack_2 = _UNK_?;
  }
  if (worldScale.z == 0.0) {
    worldScale.z = _UNK_?;
  }
  if (root != (GameObject *)0x0) {
    this = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                     (root,(MethodInfo *)0x0);
    if (this != (Transform *)0x0) {
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)&stack0xffffffb8,this,(MethodInfo *)0x0);
      uVar4 = pVVar3->x;
      uVar5 = pVVar3->y;
      fVar6 = pVVar3->z;
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                          ((Vector3 *)&stack0xffffffb8,this,(MethodInfo *)0x0);
      uVar7 = pVVar3->x;
      uVar8 = pVVar3->y;
      fVar9 = pVVar3->z;
      worldScale_00.y = fStack_2;
      worldScale_00.x = fStack_1;
      worldScale_00.z = worldScale.z;
      fVar10 = fStack_1;
      TransformEx::TransformEx_SetWorldScale(this,worldScale_00,(MethodInfo *)0x0);
      vector.y = (float)uVar8;
      vector.x = (float)uVar7;
      vector.z = fVar9;
      pVVar3 = Vector3Ex::Vector3Ex_GetInverse
                          ((Vector3 *)&stack0xffffffb8,vector,(MethodInfo *)0x0);
      uVar11 = pVVar3->x;
      uVar12 = pVVar3->y;
      value.y = pivotPoint.y + ((float)uVar5 - pivotPoint.y) * (float)uVar12 * fStack_2;
      value.x = fVar10 + ((float)uVar4 - pivotPoint.x) * (float)uVar11 * fStack_1;
      value.z = pivotPoint.z + (fVar6 - pivotPoint.z) * pVVar3->z * worldScale.z;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (this,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void SetStatic(GameObject, Boolean, Boolean) */

void Assembly-CSharp.dll::RTG::GameObjectEx::GameObjectEx_SetStatic
               (GameObject *gameObject,bool isStatic,bool affectChildren,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__get_Current__
                   );
    func_?(&TypeInfo__RTG__GameObjectEx);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  LStack_6._list = (List_1_System_Object_ *)0x0;
  LStack_6._index = 0;
  LStack_6._version = 0;
  LStack_6._current = (Object *)0x0;
  if (affectChildren == 0) {
    if (gameObject != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_isStatic
                (gameObject,isStatic,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
  }
  else {
    if ((TypeInfo__RTG__GameObjectEx->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RTG__GameObjectEx);
    }
    method_00 = (MethodInfo *)GameObjectEx_GetAllChildrenAndSelf(gameObject,(MethodInfo *)0x0);
    if (method_00 != (MethodInfo *)0x0) {
      pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                         (&LStack_8,
                          (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                          method_00,
                          MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                         );
      LStack_6._list = (List_1_System_Object_ *)pLVar7->_list;
      LStack_6._index = pLVar7->_index;
      LStack_6._version = pLVar7->_version;
      LStack_6._current = *(Object **)&pLVar7->_current;
      LStack_8._version = 0;
      uStack_1 = 1;
      LStack_8._current = (RegexCharClass_SingleRange)&LStack_6;
      while( true ) {
        bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          (&LStack_6,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                          );
        if (bVar9 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&LStack_6,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
                     ,method_00);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        if ((RegexCharClass_SingleRange)LStack_6._current == (RegexCharClass_SingleRange)0x0)
        break;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_isStatic
                  ((GameObject *)LStack_6._current,isStatic,(MethodInfo *)0x0);
      }
    }
  }
  uVar10 = func_?();
  func_?(uVar10);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* GameObjectEx() */

void Assembly-CSharp.dll::RTG::GameObjectEx::GameObjectEx__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GameObjectEx);
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__List__)
    ;
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Transform>);
    cRam_? = '\x01';
  }
  this = (List_1_UnityEngine_Transform_ *)
         func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Transform>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__List__);
  TypeInfo__RTG__GameObjectEx->static_fields->_transformsChildren = this;
  func_?(TypeInfo__RTG__GameObjectEx->static_fields,this);
  return;
}

