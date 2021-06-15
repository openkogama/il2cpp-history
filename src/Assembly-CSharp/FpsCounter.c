
/* Void Awake() */

void Assembly-CSharp.dll::FpsCounter::FpsCounter_Awake(FpsCounter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  TypeInfo__FpsCounter->static_fields->instance = this;
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::FpsCounter::FpsCounter_OnDestroy(FpsCounter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  TypeInfo__FpsCounter->static_fields->instance = (FpsCounter *)0x0;
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::FpsCounter::FpsCounter_Update(FpsCounter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).frameTimes;
  uVar2 = (this->fields).idx;
  fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  if (pSVar1 != (Single__Array *)0x0) {
    if (pSVar1->max_length <= uVar2) goto code_?;
    pSVar1->vector[uVar2] = _UNK_? / fVar3;
    pSVar1 = (this->fields).frameTimes;
    if (pSVar1 != (Single__Array *)0x0) {
      method_00 = (MethodInfo *)0x0;
      (this->fields).idx = ((this->fields).idx + 1) % (int)pSVar1->max_length;
      fVar3 = System.Core.dll::System::Linq::Enumerable::Enumerable_Average
                        ((IEnumerable_1_System_Single_ *)pSVar1,(MethodInfo *)0x0);
      (this->fields).fps = fVar3;
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      MVar4 = MVGameControllerBase::MVGameControllerBase_get_JoinState((MethodInfo *)0x0);
      if (MVar4 != MVJoinState__Enum_Playing) {
        return;
      }
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      if (TypeInfo__FpsCounter->static_fields->_StartedPlaying_k__BackingField == 0) {
        return;
      }
      this_01 = (ScaleAnimationBase *)(this->fields).metricsCollector;
      if (this_01 == (ScaleAnimationBase *)0x0) {
        this_01 = (ScaleAnimationBase *)func_?(TypeInfo__FpsCounter__FPSMetricCollector);
        ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,method_00);
        pvVar5 = (void *)UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                   ((MethodInfo *)0x0);
        (this_01->fields)._._._._.m_CachedPtr = pvVar5;
        *(undefined1 *)&(this_01->fields).state = 0;
        (this->fields).metricsCollector = (FpsCounter_FPSMetricCollector *)this_01;
        if (this_01 == (ScaleAnimationBase *)0x0) goto code_?;
      }
      if ((char)(this_01->fields).state != '\0') {
        return;
      }
      fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      if (fVar3 - (float)(this_01->fields)._._._._.m_CachedPtr <= _UNK_?) {
        return;
      }
      this_00 = (this->fields).metricsCollector;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pFVar6 = TypeInfo__FpsCounter->static_fields->instance;
      if ((pFVar6 != (FpsCounter *)0x0) && (this_00 != (FpsCounter_FPSMetricCollector *)0x0)) {
        FpsCounter+FPSMetricCollector::FpsCounter_FPSMetricCollector_CollectFPSMetric
                  (this_00,(pFVar6->fields).fps,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
code_?:
  uVar7 = func_?(0,0);
  func_?(uVar7);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* FpsCounter() */

void Assembly-CSharp.dll::FpsCounter::FpsCounter__ctor(FpsCounter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = (Single__Array *)func_?(TypeInfo__System__Single,10);
  (this->fields).frameTimes = pSVar1;
  if (cRam_? == '\0') {
    func_?(_UNK_?,unaff_EBP);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}


/* Single get_Fps() */

float Assembly-CSharp.dll::FpsCounter::FpsCounter_get_Fps(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pFVar1 = TypeInfo__FpsCounter->static_fields->instance;
  if (pFVar1 != (FpsCounter *)0x0) {
    return (pFVar1->fields).fps;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  fVar3 = (float10)(*pcVar2)();
  return (float)fVar3;
}


/* Boolean get_StartedPlaying() */

bool Assembly-CSharp.dll::FpsCounter::FpsCounter_get_StartedPlaying(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  return TypeInfo__FpsCounter->static_fields->_StartedPlaying_k__BackingField;
}


/* Void set_StartedPlaying(Boolean) */

void Assembly-CSharp.dll::FpsCounter::FpsCounter_set_StartedPlaying(bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  TypeInfo__FpsCounter->static_fields->_StartedPlaying_k__BackingField = value;
  return;
}

