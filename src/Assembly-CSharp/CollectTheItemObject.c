
/* Void InitializeGreyOutScript() */

void Assembly-CSharp.dll::CollectTheItemObject::CollectTheItemObject_InitializeGreyOutScript
               (CollectTheItemObject *this,MethodInfo *method)

{
  pGVar1 = (this->fields).greyOutObject;
  if (pGVar1 == (GreyOutObjectScript *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_UIVertex_ *)(pGVar1->fields).pickupOriginalMaterials;
  if (this_00 != (List_1_UnityEngine_UIVertex_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
    List_1_UnityEngine_UIVertex__Clear
              (this_00,
               MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__Clear__
              );
    this_01 = (pGVar1->fields).pickupObject;
    if (this_01 != (GameObject *)0x0) {
      method_00 = (MethodInfo *)&UNK_?;
      pUVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
               GameObject_GetComponentsInChildren_29
                         (this_01,
                          UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                         );
      pcVar4 = (char *)0x0;
      if (pUVar3 != (UseInteratorVisualization__Array *)0x0) {
        ppUVar5 = pUVar3->vector;
        while( true ) {
          if ((int)pUVar3->max_length <= (int)pcVar4) {
            return;
          }
          if ((char *)pUVar3->max_length <= pcVar4) break;
          this_02 = *ppUVar5;
          this_04 = (ScaleAnimationBase *)
                    func_?(TypeInfo__GreyOutObjectScript__PickupOriginalMaterials);
          *(undefined1 *)&(this_04->fields).originalScale.x = 1;
          ScaleAnimationBase::ScaleAnimationBase_Play(this_04,0.0,method_00);
          (this_04->fields)._._._._.m_CachedPtr = this_02;
          if (this_02 == (UseInteratorVisualization *)0x0) goto code_?;
          method_00 = (MethodInfo *)&UNK_?;
          pMVar6 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_sharedMaterials
                             ((Renderer *)this_02,(MethodInfo *)0x0);
          (this_04->fields).state = (int32_t)pMVar6;
          this_03 = (pGVar1->fields).pickupOriginalMaterials;
          if (this_03 == (List_1_GreyOutObjectScript_PickupOriginalMaterials_ *)0x0)
          goto code_?;
          pUVar3 = (UseInteratorVisualization__Array *)
                   MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__Add_GreyOutObjectScript__PickupOriginalMaterials_
          ;
          mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                    ((List_1_UIPushOption_ *)this_03,(UIPushOption__Enum)this_04,
                     MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__Add_GreyOutObjectScript__PickupOriginalMaterials_
                    );
          pcVar4 = pcVar4 + 1;
          ppUVar5 = ppUVar5 + 1;
        }
        uVar7 = func_?(0,0);
        func_?(uVar7);
      }
    }
  }
code_?:
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean ShouldDoBlinking() */

bool Assembly-CSharp.dll::CollectTheItemObject::CollectTheItemObject_ShouldDoBlinking
               (CollectTheItemObject *this,MethodInfo *method)

{
  fVar1 = (this->fields).fadeTimer;
  if (fVar1 < _UNK_?) {
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    (this->fields).fadeTimer = fVar2 + fVar1;
    return 0;
  }
  return 1;
}


/* Void Update() */

void Assembly-CSharp.dll::CollectTheItemObject::CollectTheItemObject_Update
               (CollectTheItemObject *this,MethodInfo *method)

{
  fVar1 = (this->fields).fadeTimer;
  if (fVar1 < _UNK_?) {
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    (this->fields).fadeTimer = fVar2 + fVar1;
    return;
  }
  this_00 = (this->fields).blinker;
  if (this_00 != (CollectTheItemBlinker *)0x0) {
    BlinkerBase::BlinkerBase_StartBlinking
              ((BlinkerBase *)this_00,BlinkType__Enum_AboutToExpire,INFINITY,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this,0,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean get_EnableFading() */

bool Assembly-CSharp.dll::CollectTheItemObject::CollectTheItemObject_get_EnableFading
               (CollectTheItemObject *this,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)func_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?,0,0);
    func_?(uVar2);
    pcVar1 = (code *)swi(3);
    bVar3 = (*pcVar1)();
    return bVar3;
  }
  pcRam_? = pcVar1;
  bVar3 = (*pcRam_?)(this);
  return bVar3;
}


/* Void set_EnableFading(Boolean) */

void Assembly-CSharp.dll::CollectTheItemObject::CollectTheItemObject_set_EnableFading
               (CollectTheItemObject *this,bool value,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)func_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?,0,0);
    func_?(uVar2);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(this,_value);
  return;
}

