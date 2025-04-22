
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::SizeModifier+<DoForSeconds>d__17::SizeModifier_DoForSeconds_d_17_MoveNext
               (SizeModifier_DoForSeconds_d_17 *this,MethodInfo *method)

{
  pMStack_1 = in_ECX;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  iVar2 = (this->fields).__1__state;
  this_00 = (this->fields).__4__this;
  if (iVar2 == 0) {
    (this->fields).__1__state = -1;
    if ((this_00 == (SizeModifier *)0x0) ||
       (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this_00,(MethodInfo *)0x0), this_01 == (GameObject *)0x0))
    goto code_?;
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                      (this_01,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      pSVar4 = (this->fields).body;
      if (pSVar4 == (SizeModifier_ActionDelegate *)0x0) goto code_?;
      pMStack_1 = (MonitorData *)(this_00->fields).timeToSize;
      (*(pSVar4->fields)._._.invoke_impl)((pSVar4->fields)._._.method_code);
    }
    (this->fields)._t_5__2 = 0.0;
  }
  else {
    if (iVar2 != 1) {
      return 0;
    }
    (this->fields).__1__state = -1;
  }
  fVar5 = (this->fields).duration;
  pfVar6 = &(this->fields)._t_5__2;
  if (fVar5 < *pfVar6 || fVar5 == *pfVar6) {
    if ((this_00 != (SizeModifier *)0x0) &&
       (pSVar4 = (this->fields).body, pSVar4 != (SizeModifier_ActionDelegate *)0x0)) {
      (*(pSVar4->fields)._._.invoke_impl)
                ((pSVar4->fields)._._.method_code,(this_00->fields).timeToSize,
                 (pSVar4->fields)._._.method);
      return 0;
    }
  }
  else {
    pSVar4 = (this->fields).body;
    if (pSVar4 != (SizeModifier_ActionDelegate *)0x0) {
      (*(pSVar4->fields)._._.invoke_impl)
                ((pSVar4->fields)._._.method_code,(this->fields)._t_5__2 / (this->fields).duration,
                 (pSVar4->fields)._._.method);
      fVar5 = (this->fields)._t_5__2;
      fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0)
      ;
      pMStack_1 = (MonitorData *)0x0;
      (this->fields)._t_5__2 = fVar7 + fVar5;
      pOVar8 = (Object *)func_?(TypeInfo__System__Single,&pMStack_1);
      (this->fields).__2__current = pOVar8;
      func_?(&(this->fields).__2__current,pOVar8);
      (this->fields).__1__state = 1;
      return 1;
    }
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  bVar3 = (*pcVar9)();
  return bVar3;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::SizeModifier+<DoForSeconds>d__17::
     SizeModifier_DoForSeconds_d_17_System_Collections_IEnumerator_Reset
               (SizeModifier_DoForSeconds_d_17 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__SizeModifier___DoForSeconds_d__17__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

