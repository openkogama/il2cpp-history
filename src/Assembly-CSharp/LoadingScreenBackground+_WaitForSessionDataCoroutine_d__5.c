
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::LoadingScreenBackground+<WaitForSessionDataCoroutine>d__5::
     LoadingScreenBackground_WaitForSessionDataCoroutine_d_5_MoveNext
               (LoadingScreenBackground_WaitForSessionDataCoroutine_d_5 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  pLVar2 = (this->fields).__4__this;
  if ((iVar1 == 0) || (iVar1 == 1)) {
    (this->fields).__1__state = -1;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField ==
        (GameSessionData *)0x0) {
      (this->fields).__2__current = (Object *)0x0;
      func_?(&(this->fields).__2__current,0);
      (this->fields).__1__state = 1;
      return 1;
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    pGVar3 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar3 == (GameSessionData *)0x0) {
code_?:
      func_?();
      pcVar4 = (code *)swi(3);
      bVar5 = (*pcVar4)();
      return bVar5;
    }
    a = (pGVar3->fields).planetImageURL;
    bVar5 = mscorlib.dll::System::String::String_op_Inequality
                      (a,::StringLiteral__,(MethodInfo *)0x0);
    if (bVar5 != 0) {
      if ((pLVar2 == (LoadingScreenBackground *)0x0) ||
         (this_00 = (pLVar2->fields).imageStream, this_00 == (StreamPngToSprite *)0x0))
      goto code_?;
      StreamPngToSprite::StreamPngToSprite_StartDownloading
                (this_00,a,0,WWWRequestPriority__Enum_ExecuteIgnoreAllConstraints,(MethodInfo *)0x0)
      ;
    }
  }
  return 0;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::LoadingScreenBackground+<WaitForSessionDataCoroutine>d__5::
     LoadingScreenBackground_WaitForSessionDataCoroutine_d_5_System_Collections_IEnumerator_Reset
               (LoadingScreenBackground_WaitForSessionDataCoroutine_d_5 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__LoadingScreenBackground___WaitForSessionDataCoroutine_d__5__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

