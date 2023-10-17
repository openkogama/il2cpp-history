
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::SendMessageControl+<OOMTest>d__58::
     SendMessageControl_OOMTest_d_58_MoveNext
               (SendMessageControl_OOMTest_d_58 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<unsigned_char>__AddRange_System__Collections__Generic__IEnumerable<unsigned_char>_
                   );
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  pSVar2 = (this->fields).__4__this;
  if ((iVar1 == 0) || (iVar1 == 1)) {
    (this->fields).__1__state = -1;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_Quitting_k__BackingField == 0) {
      if (pSVar2 != (SendMessageControl *)0x0) {
        collection = (IEnumerable_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                     func_?(TypeInfo__System__Byte,(pSVar2->fields).bytesPerFrame);
        this_00 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                  (pSVar2->fields).oomBytes;
        if (this_00 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
          UnitySynchronizationContext+WorkRequest]::
          List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__AddRange
                    (this_00,collection,
                     MethodInfo__System__Collections__Generic__List<unsigned_char>__AddRange_System__Collections__Generic__IEnumerable<unsigned_char>_
                    );
          (this->fields).__2__current = (Object *)0x0;
          func_?(&(this->fields).__2__current,0);
          (this->fields).__1__state = 1;
          return 1;
        }
      }
      func_?();
      pcVar3 = (code *)swi(3);
      bVar4 = (*pcVar3)();
      return bVar4;
    }
  }
  return 0;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::SendMessageControl+<OOMTest>d__58::
     SendMessageControl_OOMTest_d_58_System_Collections_IEnumerator_Reset
               (SendMessageControl_OOMTest_d_58 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  func_?(this_00);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__SendMessageControl___OOMTest_d__58__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

