
/* Int32 Compare(RaycastHit, RaycastHit) */

int32_t Assembly-CSharp.dll::RaycastHitComparer::RaycastHitComparer_Compare
                  (RaycastHitComparer *this,RaycastHit a,RaycastHit b,MethodInfo *method)

{
  ppuStack_1 = (undefined4 **)0x0;
  ppuStack_1 = (undefined4 **)
               System.Core.dll::System::Linq::
               Enumerable+<CreateSelectIterator>c__Iterator10`2[System::Object,System::Single]::
               Enumerable_CreateSelectIterator_c_Iterator10_2_System_Object_System_Single__System_Collections_Generic_IEnumerator_TResult__get_Current
                         ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Object_System_Single_
                           *)&a,(MethodInfo *)0x0);
  System.Core.dll::System::Linq::Enumerable+<CreateSelectIterator>c__Iterator10`2[System::
  Object,System::Single]::
  Enumerable_CreateSelectIterator_c_Iterator10_2_System_Object_System_Single__System_Collections_Generic_IEnumerator_TResult__get_Current
            ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Object_System_Single_ *)&b,
             (MethodInfo *)0x0);
  ppuStack_1 = &ppuStack_1;
  iVar2 = func_?();
  return iVar2;
}


/* RaycastHitComparer() */

void Assembly-CSharp.dll::RaycastHitComparer::RaycastHitComparer__ctor
               (RaycastHitComparer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__Collections__Generic__Comparer<UnityEngine::RaycastHit>->vtable).
              Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Collections__Generic__Comparer<UnityEngine::RaycastHit>->_1).cctor_started
      == 0)) {
    func_?(TypeInfo__System__Collections__Generic__Comparer<UnityEngine::RaycastHit>);
  }
  UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
  TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
  TweenRunner_1_T_Start_c_Iterator0_FloatTween___ctor
            ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)this,
             MethodInfo__System__Collections__Generic__Comparer<UnityEngine::RaycastHit>__Comparer__
            );
  return;
}

