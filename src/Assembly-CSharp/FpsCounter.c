
/* Void Awake() */

void Assembly-CSharp.dll::FpsCounter::FpsCounter_Awake(FpsCounter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__FpsCounter);
    cRam_? = '\x01';
  }
  TypeInfo__FpsCounter->static_fields->instance = this;
  func_?(TypeInfo__FpsCounter->static_fields,this);
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::FpsCounter::FpsCounter_OnDestroy(FpsCounter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__FpsCounter);
    cRam_? = '\x01';
  }
  TypeInfo__FpsCounter->static_fields->instance = (FpsCounter *)0x0;
  func_?(TypeInfo__FpsCounter->static_fields,0);
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::FpsCounter::FpsCounter_Update(FpsCounter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__FpsCounter__FPSMetricCollector);
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
      (this->fields).idx = ((this->fields).idx + 1) % (int)pSVar1->max_length;
      fVar3 = System.Core.dll::System::Linq::Enumerable::Enumerable_Average
                        ((IEnumerable_1_System_Single_ *)pSVar1,(MethodInfo *)0x0);
      (this->fields).fps = fVar3;
      MVar4 = MVGameControllerBase::MVGameControllerBase_get_JoinState((MethodInfo *)0x0);
      if (MVar4 != MVJoinState__Enum_Playing) {
        return;
      }
      if (cRam_? == '\0') {
        func_?(&TypeInfo__FpsCounter);
        cRam_? = '\x01';
      }
      if (TypeInfo__FpsCounter->static_fields->_StartedPlaying_k__BackingField == 0) {
        return;
      }
      ppFVar5 = &(this->fields).metricsCollector;
      if (*ppFVar5 == (FpsCounter_FPSMetricCollector *)0x0) {
        method_00 = TypeInfo__FpsCounter__FPSMetricCollector;
        pFVar6 = (FpsCounter_FPSMetricCollector *)func_?();
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)pFVar6,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
        fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        (pFVar6->fields).startTime = fVar3;
        (pFVar6->fields).metricsCollected = 0;
        *ppFVar5 = pFVar6;
        func_?(ppFVar5,pFVar6);
      }
      pFVar6 = *ppFVar5;
      if (pFVar6 != (FpsCounter_FPSMetricCollector *)0x0) {
        if ((pFVar6->fields).metricsCollected != 0) {
          return;
        }
        fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        if (fVar3 - (pFVar6->fields).startTime <= _UNK_?) {
          return;
        }
        pFVar6 = *ppFVar5;
        fVar3 = FpsCounter_get_Fps((MethodInfo *)0x0);
        if (pFVar6 != (FpsCounter_FPSMetricCollector *)0x0) {
          FpsCounter+FPSMetricCollector::FpsCounter_FPSMetricCollector_CollectFPSMetric
                    (pFVar6,fVar3,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* FpsCounter() */

void Assembly-CSharp.dll::FpsCounter::FpsCounter__ctor(FpsCounter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  pSVar1 = (Single__Array *)func_?(TypeInfo__System__Single,10);
  ppSVar2 = &(this->fields).frameTimes;
  *ppSVar2 = pSVar1;
  func_?(ppSVar2,pSVar1);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}


/* Single get_Fps() */

float Assembly-CSharp.dll::FpsCounter::FpsCounter_get_Fps(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pFVar1 = TypeInfo__FpsCounter->static_fields->instance;
  if (pFVar1 != (FpsCounter *)0x0) {
    return (pFVar1->fields).fps;
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Boolean get_StartedPlaying() */

bool Assembly-CSharp.dll::FpsCounter::FpsCounter_get_StartedPlaying(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__FpsCounter);
    cRam_? = '\x01';
  }
  return TypeInfo__FpsCounter->static_fields->_StartedPlaying_k__BackingField;
}


/* Void set_StartedPlaying(Boolean) */

void Assembly-CSharp.dll::FpsCounter::FpsCounter_set_StartedPlaying(bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__FpsCounter);
    cRam_? = '\x01';
  }
  TypeInfo__FpsCounter->static_fields->_StartedPlaying_k__BackingField = value;
  return;
}

