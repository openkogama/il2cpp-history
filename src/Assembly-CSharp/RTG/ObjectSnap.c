
/* Void Snap(GameObject, Vector3, Vector3) */

void Assembly-CSharp.dll::RTG::ObjectSnap::ObjectSnap_Snap
               (GameObject *root,Vector3 pivot,Vector3 dest,MethodInfo *method)

{
  if (root != (GameObject *)0x0) {
    this = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                     (root,(MethodInfo *)0x0);
    if (this != (Transform *)0x0) {
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xffffffe4,this,(MethodInfo *)0x0);
      uVar2 = pVVar1->x;
      uVar3 = pVVar1->y;
      value.y = dest.y + ((float)uVar3 - pivot.y);
      value.x = dest.x + ((float)uVar2 - pivot.x);
      value.z = dest.z + (pVVar1->z - pivot.z);
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (this,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Snap(List`1[UnityEngine.GameObject], Vector3, Vector3) */

void Assembly-CSharp.dll::RTG::ObjectSnap::ObjectSnap_Snap_1
               (List_1_UnityEngine_GameObject_ *roots,Vector3 pivot,Vector3 dest,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff9c;
  puVar5 = &stack0xffffff9c;
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
  if (roots != (List_1_UnityEngine_GameObject_ *)0x0) {
    pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                         *)auStack_8,
                        (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)roots,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                       );
    uStack_9 = 0;
    LStack_6._list = (List_1_System_Object_ *)pLVar7->_list;
    LStack_6._index = pLVar7->_index;
    LStack_6._version = pLVar7->_version;
    LStack_6._current = *(Object **)&pLVar7->_current;
    uStack_1 = 1;
    pLStack_10 = &LStack_6;
    while( true ) {
      bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_6,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                        );
      if (bVar11 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&LStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
                   ,(MethodInfo *)roots);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if ((RegexCharClass_SingleRange)LStack_6._current == (RegexCharClass_SingleRange)0x0) break;
      roots = (List_1_UnityEngine_GameObject_ *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        ((GameObject *)LStack_6._current,(MethodInfo *)0x0);
      if ((MethodInfo *)roots == (MethodInfo *)0x0) break;
      pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)(auStack_8 + 4),(Transform *)roots,(MethodInfo *)0x0);
      uStack_13._0_4_ = pVVar12->x;
      uStack_13._4_4_ = pVVar12->y;
      fStack_14 = pVVar12->z;
      fStack_15 = dest.z + (fStack_14 - pivot.z);
      value.y = dest.y + ((float)uStack_13._4_4_ - pivot.y);
      value.x = dest.x + ((float)(undefined4)uStack_13 - pivot.x);
      value.z = fStack_15;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                ((Transform *)roots,value,(MethodInfo *)0x0);
    }
  }
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}

