
/* Void CollectFPSMetric(Single) */

void Assembly-CSharp.dll::FpsCounter+FPSMetricCollector::
     FpsCounter_FPSMetricCollector_CollectFPSMetric
               (FpsCounter_FPSMetricCollector *this,float averageFPS,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__StatHatWrapper);
    func_?(&StringLiteral_FPS_collected__);
    func_?(&StringLiteral_FPSBucket30_);
    func_?(&StringLiteral_FPSBucket0_20);
    func_?(&StringLiteral_RoundTripTime);
    func_?(&StringLiteral_FPS);
    func_?(&StringLiteral_FPSBucket20_30);
    cRam_? = '\x01';
  }
  if (averageFPS < 0.0) {
    fVar1 = 0.0;
  }
  else {
    fVar1 = _UNK_?;
    fVar2 = averageFPS;
    if (averageFPS <= _UNK_?) goto code_?;
  }
  fVar2 = fVar1;
code_?:
  if (fVar2 < _UNK_?) {
    pSVar3 = StringLiteral_FPSBucket0_20;
    if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__StatHatWrapper,fVar2);
      pSVar3 = StringLiteral_FPSBucket0_20;
    }
  }
  else if (fVar2 < _UNK_?) {
    pSVar3 = StringLiteral_FPSBucket20_30;
    if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__StatHatWrapper,fVar2);
      pSVar3 = StringLiteral_FPSBucket20_30;
    }
  }
  else {
    pSVar3 = StringLiteral_FPSBucket30_;
    if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__StatHatWrapper,fVar2);
      pSVar3 = StringLiteral_FPSBucket30_;
    }
  }
  StatHatWrapper::StatHatWrapper_Count(pSVar3,1,(MethodInfo *)0x0);
  pSVar3 = mscorlib.dll::System::Single::Single_ToString((Single *)&averageFPS,(MethodInfo *)0x0);
  message = (MethodInfo *)
            mscorlib.dll::System::String::String_Concat_3
                      (StringLiteral_FPS_collected__,pSVar3,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    method = (MethodInfo *)&UNK_?;
    func_?();
  }
  averageFPS = (float)&UNK_?;
  method = message;
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)message,(MethodInfo *)0x0);
  if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  StatHatWrapper::StatHatWrapper_Value_1(StringLiteral_FPS,(float)pSVar3,(MethodInfo *)0x0);
  (this->fields).metricsCollected = 1;
  pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar4 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar4->fields)._Peer_k__BackingField, this_00 != (PhotonPeer *)0x0)) {
    value = Photon3Unity3D.dll::ExitGames::Client::Photon::PhotonPeer::PhotonPeer_get_RoundTripTime
                      (this_00,(MethodInfo *)0x0);
    StatHatWrapper::StatHatWrapper_Value(StringLiteral_RoundTripTime,value,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_FPS,(MethodInfo *)0x0);
    this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_01 != (MVNetworkGame_OperationRequests *)0x0) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_IncrementStatRequest
                (this_01,IncrementStatRequestType__Enum_FPS,(int)(float)pSVar3,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* FpsCounter+FPSMetricCollector() */

void Assembly-CSharp.dll::FpsCounter+FPSMetricCollector::FpsCounter_FPSMetricCollector__ctor
               (FpsCounter_FPSMetricCollector *this,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).metricsCollected = 0;
  (this->fields).startTime = fVar1;
  return;
}

