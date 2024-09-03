
/* Boolean IsLayerTransformable(Int32) */

bool Assembly-CSharp.dll::RTG::ObjectTransformGizmoSettings::
     ObjectTransformGizmoSettings_IsLayerTransformable
               (ObjectTransformGizmoSettings *this,int32_t objectLayer,MethodInfo *method)

{
  bVar1 = LayerEx::LayerEx_IsLayerBitSet
                    ((this->fields)._transformableLayers,objectLayer,(MethodInfo *)0x0);
  return bVar1;
}


/* Boolean IsObjectTransformable(GameObject) */

bool Assembly-CSharp.dll::RTG::ObjectTransformGizmoSettings::
     ObjectTransformGizmoSettings_IsObjectTransformable
               (ObjectTransformGizmoSettings *this,GameObject *gameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>__Contains_UnityEngine__GameObject_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)gameObject,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    this_00 = (this->fields)._nonTransformableObjects;
    if (this_00 != (HashSet_1_UnityEngine_GameObject_ *)0x0) {
      bVar1 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
              HashSet_1_System_Object__Contains
                        ((HashSet_1_System_Object_ *)this_00,(Object *)gameObject,
                         MethodInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>__Contains_UnityEngine__GameObject_
                        );
      return bVar1 ^ 1;
    }
    uVar2 = func_?(&stack0xfffffffc);
    func_?(uVar2);
    pcVar3 = (code *)swi(3);
    bVar1 = (*pcVar3)();
    return bVar1;
  }
  return 0;
}


/* Void SetLayerTransformable(Int32, Boolean) */

void Assembly-CSharp.dll::RTG::ObjectTransformGizmoSettings::
     ObjectTransformGizmoSettings_SetLayerTransformable
               (ObjectTransformGizmoSettings *this,int32_t objectLayer,bool isTransformable,
               MethodInfo *method)

{
  iVar1 = (this->fields)._transformableLayers;
  if (isTransformable == 0) {
    iVar1 = LayerEx::LayerEx_ClearLayerBit(iVar1,objectLayer,(MethodInfo *)0x0);
    (this->fields)._transformableLayers = iVar1;
    return;
  }
  iVar1 = LayerEx::LayerEx_SetLayerBit(iVar1,objectLayer,(MethodInfo *)0x0);
  (this->fields)._transformableLayers = iVar1;
  return;
}


/* Void SetObjectCollectionTransformable(List`1[UnityEngine.GameObject], Boolean) */

void Assembly-CSharp.dll::RTG::ObjectTransformGizmoSettings::
     ObjectTransformGizmoSettings_SetObjectCollectionTransformable
               (ObjectTransformGizmoSettings *this,
               List_1_UnityEngine_GameObject_ *gameObjectCollection,bool areTransformable,
               MethodInfo *method)

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
  if (gameObjectCollection != (List_1_UnityEngine_GameObject_ *)0x0) {
    pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_8,
                        (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                        gameObjectCollection,
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
      while( true ) {
        do {
          bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                  List_1_T_Enumerator_System_Object__MoveNext
                            (&LStack_6,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                            );
          x = LStack_6._current;
          if (bVar9 == 0) {
            uStack_1 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                      ((Object *)&LStack_6,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
                       ,unaff_EBX);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
          if (cRam_? == '\0') {
            func_?();
            func_?();
            func_?();
            cRam_? = '\x01';
          }
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          bVar9 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                            ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
        } while (bVar9 != 0);
        this_00 = (this->fields)._nonTransformableObjects;
        if (areTransformable == 0) break;
        if (this_00 == (HashSet_1_UnityEngine_GameObject_ *)0x0) goto code_?;
        System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
        HashSet_1_System_Object__Remove
                  ((HashSet_1_System_Object_ *)this_00,x,
                   MethodInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>__Remove_UnityEngine__GameObject_
                  );
      }
      if (this_00 == (HashSet_1_UnityEngine_GameObject_ *)0x0) break;
      System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
      HashSet_1_System_Object__System_Collections_Generic_ICollection_T__Add
                ((HashSet_1_System_Object_ *)this_00,x,
                 MethodInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                );
    }
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void SetObjectTransformable(GameObject, Boolean) */

void Assembly-CSharp.dll::RTG::ObjectTransformGizmoSettings::
     ObjectTransformGizmoSettings_SetObjectTransformable
               (ObjectTransformGizmoSettings *this,GameObject *gameObject,bool isTransformable,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>__Remove_UnityEngine__GameObject_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)gameObject,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    return;
  }
  this_00 = (this->fields)._nonTransformableObjects;
  if (isTransformable == 0) {
    if (this_00 != (HashSet_1_UnityEngine_GameObject_ *)0x0) {
      System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
      HashSet_1_System_Object__System_Collections_Generic_ICollection_T__Add
                ((HashSet_1_System_Object_ *)this_00,(Object *)gameObject,
                 MethodInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                );
      return;
    }
  }
  else if (this_00 != (HashSet_1_UnityEngine_GameObject_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
    HashSet_1_System_Object__Remove
              ((HashSet_1_System_Object_ *)this_00,(Object *)gameObject,
               MethodInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>__Remove_UnityEngine__GameObject_
              );
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* ObjectTransformGizmoSettings() */

void Assembly-CSharp.dll::RTG::ObjectTransformGizmoSettings::ObjectTransformGizmoSettings__ctor
               (ObjectTransformGizmoSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>__HashSet__
                   );
    func_?(&TypeInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>);
    cRam_? = '\x01';
  }
  (this->fields)._transformableLayers = -1;
  this_00 = (HashSet_1_UnityEngine_GameObject_ *)
            func_?(TypeInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
  HashSet_1_System_Object___ctor
            ((HashSet_1_System_Object_ *)this_00,
             MethodInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>__HashSet__);
  (this->fields)._nonTransformableObjects = this_00;
  func_?(&(this->fields)._nonTransformableObjects,this_00);
  Settings::Settings__ctor((Settings *)this,(MethodInfo *)0x0);
  return;
}

