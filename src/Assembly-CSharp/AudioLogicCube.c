
/* Void Awake() */

void Assembly-CSharp.dll::AudioLogicCube::AudioLogicCube_Awake
               (AudioLogicCube *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    AudioOnOffComponent__MethodInfo__UnityEngine__Component__GetComponents<AudioOnOffComponent>______
                   );
    cRam_? = '\x01';
  }
  pAVar1 = (AudioOnOffComponent__Array *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponents_1
                     ((Component *)this,
                      AudioOnOffComponent__MethodInfo__UnityEngine__Component__GetComponents<AudioOnOffComponent>______
                     );
  (this->fields).audioOnOffComponents = pAVar1;
  func_?();
  return;
}


/* Void Play(Boolean) */

void Assembly-CSharp.dll::AudioLogicCube::AudioLogicCube_Play
               (AudioLogicCube *this,bool on,MethodInfo *method)

{
  pAVar1 = (this->fields).audioOnOffComponents;
  uVar2 = 0;
  if (on == 0) {
    if (pAVar1 == (AudioOnOffComponent__Array *)0x0) goto code_?;
    ppAVar3 = pAVar1->vector;
    while( true ) {
      if ((int)pAVar1->max_length <= (int)uVar2) {
        return;
      }
      if (pAVar1->max_length <= uVar2) break;
      pAVar4 = *ppAVar3;
      if (pAVar4 == (AudioOnOffComponent *)0x0) goto code_?;
      (*(code *)(pAVar4->klass->vtable).TurnOff.method)(pAVar4,pAVar4->klass[1]._0.image);
      uVar2 = uVar2 + 1;
      ppAVar3 = ppAVar3 + 1;
    }
  }
  else {
    if (pAVar1 == (AudioOnOffComponent__Array *)0x0) goto code_?;
    ppAVar3 = pAVar1->vector;
    while( true ) {
      if ((int)pAVar1->max_length <= (int)uVar2) {
        return;
      }
      if (pAVar1->max_length <= uVar2) break;
      pAVar4 = *ppAVar3;
      if (pAVar4 == (AudioOnOffComponent *)0x0) goto code_?;
      (*(code *)(pAVar4->klass->vtable).TurnOn.method)
                (pAVar4,(pAVar4->klass->vtable).TurnOff.methodPtr);
      uVar2 = uVar2 + 1;
      ppAVar3 = ppAVar3 + 1;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::AudioLogicCube::AudioLogicCube_Update
               (AudioLogicCube *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&StringLiteral_x);
    func_?(&StringLiteral_z);
    cRam_? = '\x01';
  }
  if ((this->fields).testKeys != 0) {
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MVInputWrapper);
    }
    bVar1 = MVInputWrapper::MVInputWrapper_DebugGetKeyDown_1(StringLiteral_z,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      AudioLogicCube_Play(this,1,(MethodInfo *)0x0);
    }
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar1 = MVInputWrapper::MVInputWrapper_DebugGetKeyDown_1(StringLiteral_x,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      AudioLogicCube_Play(this,0,(MethodInfo *)0x0);
    }
  }
  return;
}

