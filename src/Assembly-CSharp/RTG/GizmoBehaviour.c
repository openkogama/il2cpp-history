
/* Void CheckRequiredBehaviours(List`1[System.Type]) */

void Assembly-CSharp.dll::RTG::GizmoBehaviour::GizmoBehaviour_CheckRequiredBehaviours
               (GizmoBehaviour *this,List_1_System_Type_ *reqBehaviourTypes,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::Type>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::Type>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::Type>__get_Current__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<System::Type>__GetEnumerator__);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  if (reqBehaviourTypes == (List_1_System_Type_ *)0x0) {
code_?:
    func_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
           RegexCharClass+SingleRange]::
           List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                     (&LStack_8,
                      (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                      reqBehaviourTypes,
                      MethodInfo__System__Collections__Generic__List<System::Type>__GetEnumerator__)
  ;
  method_00 = (MethodInfo *)pLVar7->_list;
  behaviourType = pLVar7->_current;
  LStack_8._version = 0;
  uStack_1 = 1;
  LStack_8._current = (RegexCharClass_SingleRange)&stack0xffffffc8;
  do {
    bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
            List_1_T_Enumerator_System_Object__MoveNext
                      ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffc8,
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::Type>__MoveNext__
                      );
    if (bVar9 == 0) goto code_?;
    pGVar10 = (this->fields)._gizmo;
    if ((pGVar10 == (Gizmo *)0x0) ||
       (this_00 = (pGVar10->fields)._behaviours, this_00 == (GizmoBehaviourCollection *)0x0))
    goto code_?;
    if (cRam_? == '\0') {
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              GizmoBehaviourCollection::GizmoBehaviourCollection_GetBehavioursOfType
                        (this_00,(Type *)behaviourType,(MethodInfo *)0x0);
    if (this_01 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
    goto code_?;
    if ((this_01->fields)._size == 0) break;
    RVar11 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      (this_01,0,
                       MethodInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>__get_Item_int_
                      );
  } while (RVar11 != (RegexCharClass_SingleRange)0x0);
  GizmoBehaviour_ThrowReqBehaviourExeception(this,(Type *)behaviourType,(MethodInfo *)0x0);
code_?:
  uStack_1 = 0xffffffff;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)&stack0xffffffc8,
             (ExceptionArgument__Enum)
             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::Type>__Dispose__
             ,method_00);
  *unaff_FS_OFFSET = uStack_3;
  return;
}


/* Void SetEnabled(Boolean) */

void Assembly-CSharp.dll::RTG::GizmoBehaviour::GizmoBehaviour_SetEnabled
               (GizmoBehaviour *this,bool enabled,MethodInfo *method)

{
  if (enabled != (this->fields)._isEnabled) {
    pGVar1 = this->klass;
    if (enabled == 0) {
      (this->fields)._isEnabled = 0;
      (*(code *)(pGVar1->vtable).OnDisabled_1.method)
                (this,(pGVar1->vtable).OnGizmoHandlePicked_1.methodPtr);
      return;
    }
    (this->fields)._isEnabled = enabled;
    (*(code *)(pGVar1->vtable).OnEnabled_1.method)(this,(pGVar1->vtable).OnDisabled_1.methodPtr);
  }
  return;
}


/* Void ThrowReqBehaviourExeception(Type) */

void Assembly-CSharp.dll::RTG::GizmoBehaviour::GizmoBehaviour_ThrowReqBehaviourExeception
               (GizmoBehaviour *this,Type *reqBehaviorType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Application);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Application->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Application);
  }
  bVar1 = System.dll::System::Collections::Generic::SortedList`2[TKey,TValue]+ValueList[Unity::
          IL2CPP::Metadata::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::
          __Il2CppFullySharedGenericType]::
          SortedList_2_TKey_TValue_ValueList_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__System_Collections_ICollection_get_IsSynchronized
                    ((SortedList_2_TKey_TValue_ValueList_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                      *)0x0,unaff_EDI);
  if (bVar1 == 0) {
    return;
  }
  uVar2 = func_?(&TypeInfo__UnityEngine__Debug);
  func_?(uVar2);
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Break((MethodInfo *)0x0);
  pTVar3 = mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
  func_?(pTVar3);
  pSVar4 = (String *)func_?(3,pTVar3);
  func_?(reqBehaviorType);
  str2 = (String *)func_?(3,reqBehaviorType);
  str1 = (String *)func_?(&StringLiteral__requires_a_behaviour_of_type_);
  pSVar4 = mscorlib.dll::System::String::String_Concat_4(pSVar4,str1,str2,(MethodInfo *)0x0);
  func_?();
  this_00 = (UnityException *)func_?();
  UnityEngine.CoreModule.dll::UnityEngine::UnityException::UnityException__ctor_1
            (this_00,pSVar4,(MethodInfo *)0x0);
  uStack5 =
       func_?(&MethodInfo__RTG__GizmoBehaviour__ThrowReqBehaviourExeception_System__Type_);
  pUStack6 = this_00;
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* GizmoBehaviour() */

void Assembly-CSharp.dll::RTG::GizmoBehaviour::GizmoBehaviour__ctor
               (GizmoBehaviour *this,MethodInfo *method)

{
  (this->fields)._isEnabled = 1;
  return;
}

