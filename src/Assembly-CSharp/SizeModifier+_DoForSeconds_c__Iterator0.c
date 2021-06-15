
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::SizeModifier+<DoForSeconds>c__Iterator0::
     SizeModifier_DoForSeconds_c_Iterator0_MoveNext
               (SizeModifier_DoForSeconds_c_Iterator0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields)._PC;
  (this->fields)._PC = -1;
  if (iVar1 == 0) {
    pSVar2 = (this->fields)._this;
    if ((pSVar2 == (SizeModifier *)0x0) ||
       (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                            ((Component_1 *)pSVar2,(MethodInfo *)0x0), this_00 == (GameObject *)0x0)
       ) goto code_?;
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                      (this_00,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      pSVar2 = (this->fields)._this;
      if ((pSVar2 == (SizeModifier *)0x0) ||
         (pUVar4 = (UnityAction_1_System_Single_ *)(this->fields).body,
         pUVar4 == (UnityAction_1_System_Single_ *)0x0)) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Single]::
      UnityAction_1_System_Single__Invoke(pUVar4,(pSVar2->fields).timeToSize,(MethodInfo *)0x0);
    }
    (this->fields)._t___0 = 0.0;
    fVar5 = 0.0;
  }
  else {
    if (iVar1 != 1) {
      return 0;
    }
    fVar5 = (this->fields)._t___0;
  }
  fVar6 = (this->fields).duration;
  if (fVar5 < fVar6) {
    pUVar4 = (UnityAction_1_System_Single_ *)(this->fields).body;
    if (pUVar4 != (UnityAction_1_System_Single_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Single]::
      UnityAction_1_System_Single__Invoke(pUVar4,fVar5 / fVar6,(MethodInfo *)0x0);
      fVar5 = (this->fields)._t___0;
      fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0)
      ;
      (this->fields)._t___0 = fVar6 + fVar5;
      pOVar7 = (Object *)func_?();
      (this->fields)._current = pOVar7;
      if ((this->fields)._disposing == 0) {
        (this->fields)._PC = 1;
      }
      return 1;
    }
  }
  else {
    pSVar2 = (this->fields)._this;
    if ((pSVar2 != (SizeModifier *)0x0) &&
       (pUVar4 = (UnityAction_1_System_Single_ *)(this->fields).body,
       pUVar4 != (UnityAction_1_System_Single_ *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Single]::
      UnityAction_1_System_Single__Invoke(pUVar4,(pSVar2->fields).timeToSize,(MethodInfo *)0x0);
      (this->fields)._PC = -1;
      return 0;
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  bVar3 = (*pcVar8)();
  return bVar3;
}


/* Void Reset() */

void Assembly-CSharp.dll::SizeModifier+<DoForSeconds>c__Iterator0::
     SizeModifier_DoForSeconds_c_Iterator0_Reset
               (SizeModifier_DoForSeconds_c_Iterator0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (NotSupportedException *)func_?(TypeInfo__System__NotSupportedException);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(this_00,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

