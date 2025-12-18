
/* Void CollectFPSMetric(Single) */

void Assembly-CSharp.dll::FpsCounter+FPSMetricCollector::
     FpsCounter_FPSMetricCollector_CollectFPSMetric
               (FpsCounter_FPSMetricCollector *this,float averageFPS,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__StatHatWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_FPS_collected__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_FPSBucket30_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_FPSBucket0_20);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_RoundTripTime);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_FPS);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_FPSBucket20_30);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (averageFPS < 0.0) {
    value = 0.0;
code_?:
    pSVar1 = StringLiteral_FPSBucket0_20;
    if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
      FUN_?();
      pSVar1 = StringLiteral_FPSBucket0_20;
    }
  }
  else {
    value = _UNK_?;
    if (averageFPS <= _UNK_?) {
      value = averageFPS;
      if (averageFPS < _UNK_?) goto code_?;
      if (averageFPS < _UNK_?) {
        pSVar1 = StringLiteral_FPSBucket20_30;
        if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
          FUN_?();
          pSVar1 = StringLiteral_FPSBucket20_30;
        }
        goto code_?;
      }
    }
    pSVar1 = StringLiteral_FPSBucket30_;
    if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
      FUN_?();
      pSVar1 = StringLiteral_FPSBucket30_;
    }
  }
code_?:
  StatHatWrapper::StatHatWrapper_Count(pSVar1,1,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  info = mscorlib.dll::System::Globalization::NumberFormatInfo::NumberFormatInfo_get_CurrentInfo
                   ((MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = mscorlib.dll::System::Number::Number_FormatSingle
                     (averageFPS,(String *)0x0,info,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_FPS_collected__,pSVar1,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  StatHatWrapper::StatHatWrapper_Value_1(StringLiteral_FPS,value,(MethodInfo *)0x0);
  bVar2 = cRam_? == '\0';
  (this->fields).metricsCollected = 1;
  if (bVar2) {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar3 != (MVGameControllerBase *)0x0) &&
       (pMVar4 = (pMVar3->fields).game, pMVar4 != (MVNetworkGame *)0x0)) &&
      (pPVar5 = (pMVar4->fields)._Peer_k__BackingField, pPVar5 != (PhotonPeer *)0x0)) &&
     (pPVar6 = (pPVar5->fields).peerBase, pPVar6 != (PeerBase *)0x0)) {
    StatHatWrapper::StatHatWrapper_Value
              (StringLiteral_RoundTripTime,(pPVar6->fields).roundTripTime,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_FPS,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar3 != (MVGameControllerBase *)0x0) &&
        (pMVar4 = (pMVar3->fields).game, pMVar4 != (MVNetworkGame *)0x0)) &&
       (pMVar7 = (pMVar4->fields).operationRequests,
       pMVar7 != (MVNetworkGame_OperationRequests *)0x0)) {
      iVar8 = (int)value;
      uVar9 = 0;
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                      ,3,iVar8,0);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_00 = (Dictionary_2_System_Byte_System_Object_ *)
                FUN_?(
                             TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                             );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object___ctor
                (this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                );
      aiStackX_10[0] = CONCAT22(aiStackX_10[0]._2_2_,3);
      pOVar10 = (Object *)FUN_?(uRam_?,aiStackX_10);
      if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
        uVar11 = CONCAT71((int7)((ulonglong)uVar9 >> 8),2);
        pMVar12 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 ->klass->rgctx_data[0x22].method;
        uVar9 = CONCAT71((int7)((ulonglong)pMVar12 >> 8),0xc1);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object__TryInsert
                  (this_00,0xc1,pOVar10,(InsertionBehavior__Enum)uVar11,pMVar12);
        if (iVar8 != 0) {
          aiStackX_10[0] = iVar8;
          pOVar10 = (Object *)FUN_?(uRam_?,aiStackX_10);
          pMVar12 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   ->klass->rgctx_data[0x22].method;
          uVar9 = CONCAT71((int7)((ulonglong)pMVar12 >> 8),0xa3);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
          Dictionary_2_System_Byte_System_Object__TryInsert
                    (this_00,0xa3,pOVar10,
                     (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar11 >> 8),2),pMVar12);
        }
        pPVar5 = (pMVar7->fields).peer;
        if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
        }
        if (pPVar5 != (PhotonPeer *)0x0) {
          (*(pPVar5->klass->vtable).SendOperation.methodPtr)
                    (pPVar5,CONCAT71((int7)((ulonglong)uVar9 >> 8),0x76),this_00,
                     TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                     (pPVar5->klass->vtable).SendOperation.method);
          return;
        }
      }
      FUN_?();
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* FpsCounter+FPSMetricCollector() */

void Assembly-CSharp.dll::FpsCounter+FPSMetricCollector::FpsCounter_FPSMetricCollector__ctor
               (FpsCounter_FPSMetricCollector *this,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  fVar3 = (float)(*pcRam_?)();
  (this->fields).startTime = fVar3;
  (this->fields).metricsCollected = 0;
  return;
}

