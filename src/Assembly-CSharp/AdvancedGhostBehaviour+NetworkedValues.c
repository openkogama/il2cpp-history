
/* Vector3 BackAndForward(Int32, Single, Single, Transform) */

Vector3 * Assembly-CSharp.dll::AdvancedGhostBehaviour+NetworkedValues::
          AdvancedGhostBehaviour_NetworkedValues_BackAndForward
                    (Vector3 *__return_storage_ptr__,AdvancedGhostBehaviour_NetworkedValues *this,
                    int32_t serverTimeInMilliSeconds,float speed,float radius,Transform *transform,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    cRam_? = '\x01';
  }
  fVar1 = radius + radius;
  iVar2 = (int)(((fVar1 + fVar1) / (speed * _UNK_?)) * _UNK_?);
  fVar3 = ((float)(serverTimeInMilliSeconds % iVar2) / (float)iVar2) * (fVar1 + fVar1);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar5 = (pVVar4->backVector).x;
  uVar6 = (pVVar4->backVector).y;
  fVar7 = (pVVar4->backVector).z * radius;
  fVar8 = (float)uVar5 * radius;
  fVar9 = (float)uVar6 * radius;
  if (fVar1 < fVar3) {
    func_?();
    fVar7 = (float)((uint)fVar7 ^
                    __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
    fVar8 = (float)((uint)fVar8 ^
                    __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
    fVar9 = (float)((uint)fVar9 ^
                    __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
  }
  func_?(&stack0xffffff90,&stack0xffffffbc,0);
  if (transform != (Transform *)0x0) {
    position_00.y = fVar9;
    position_00.x = fVar8;
    position_00.z = fVar7;
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint
                        ((Vector3 *)&stack0xffffff90,transform,position_00,(MethodInfo *)0x0);
    uVar11 = pVVar10->x;
    uVar12 = pVVar10->y;
    fVar3 = pVVar10->z;
    position_01.y = 0.0;
    position_01.x = fVar8;
    position_01.z = fVar7;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint
              ((Vector3 *)&stack0xffffff90,transform,position_01,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    fVar9 = 0.5;
    start.y = (float)uVar12;
    start.x = (float)uVar11;
    start.z = fVar3;
    end.y = _UNK_?;
    end.x = (float)_UNK_?;
    end.z = 0.5;
    color.g = _UNK_?;
    color.r = _UNK_?;
    color.b = (float)_UNK_?;
    color.a = _UNK_?;
    fVar3 = _UNK_?;
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_DrawLine
              (start,end,color,0.5,(MethodInfo *)0x0);
    position_02.y = fVar9;
    position_02.x = fVar3;
    position_02.z = fVar7;
    pTVar13 = transform;
    fVar1 = fVar3;
    fVar8 = fVar9;
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint
                        ((Vector3 *)&stack0xffffff90,transform,position_02,(MethodInfo *)0x0);
    uVar14 = pVVar10->x;
    puVar15 = &UNK_?;
    position_03.y = fVar9;
    position_03.x = fVar3;
    position_03.z = fVar7;
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint
                        ((Vector3 *)&stack0xffffff90,transform,position_03,(MethodInfo *)0x0);
    uVar16 = pVVar10->x;
    uVar17 = pVVar10->y;
    fVar3 = pVVar10->z;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar18 = (pVVar4->rightVector).x;
    uVar19 = (pVVar4->rightVector).y;
    fVar20 = (float)uVar19 + (float)uVar17;
    fVar3 = (pVVar4->rightVector).z + fVar3;
    start_00.y = (float)puVar15;
    start_00.x = (float)uVar14;
    start_00.z = (float)uVar18 + (float)uVar16;
    end_00.y = fVar20;
    end_00.x = (float)uVar18 + (float)uVar16;
    end_00.z = fVar3;
    color_00.g = _UNK_?;
    color_00.r = _UNK_?;
    color_00.b = (float)_UNK_?;
    color_00.a = _UNK_?;
    fVar7 = _UNK_?;
    fVar9 = _UNK_?;
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_DrawLine
              (start_00,end_00,color_00,0.5,(MethodInfo *)0x0);
    position.y = fVar1 + fVar3 * fVar9;
    position.x = (float)pTVar13 + fVar7 * fVar9;
    position.z = fVar8 + fVar20 * fVar9;
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint
                        ((Vector3 *)&stack0xffffff90,transform,position,(MethodInfo *)0x0);
    fVar1 = pVVar10->y;
    fVar3 = pVVar10->z;
    __return_storage_ptr__->x = pVVar10->x;
    __return_storage_ptr__->y = fVar1;
    __return_storage_ptr__->z = fVar3;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar21 = (code *)swi(3);
  pVVar10 = (Vector3 *)(*pcVar21)();
  return pVVar10;
}


/* Vector3 Circle(Int32, Single, Single, Transform) */

Vector3 * Assembly-CSharp.dll::AdvancedGhostBehaviour+NetworkedValues::
          AdvancedGhostBehaviour_NetworkedValues_Circle
                    (Vector3 *__return_storage_ptr__,AdvancedGhostBehaviour_NetworkedValues *this,
                    int32_t serverTimeInMilliSeconds,float speed,float radius,Transform *transform,
                    MethodInfo *method)

{
  iVar1 = (int)((_UNK_? / ((speed * _UNK_?) / (radius * _UNK_?))) *
               _UNK_?);
  fVar2 = ((float)(serverTimeInMilliSeconds % iVar1) / (float)iVar1) * _UNK_?;
  dVar3 = (double)fVar2;
  func_?();
  VStack_4.y = 0.0;
  VStack_4.x = (float)dVar3 * radius;
  dVar3 = (double)fVar2;
  func_?();
  VStack_4.z = (float)dVar3 * radius;
  if (transform != (Transform *)0x0) {
    position.y = VStack_4.y;
    position.x = VStack_4.x;
    position.z = VStack_4.z;
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint
                       (&VStack_4,transform,position,(MethodInfo *)0x0);
    fVar6 = pVVar5->y;
    fVar2 = pVVar5->z;
    __return_storage_ptr__->x = pVVar5->x;
    __return_storage_ptr__->y = fVar6;
    __return_storage_ptr__->z = fVar2;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  pVVar5 = (Vector3 *)(*pcVar7)();
  return pVVar5;
}


/* Vector3 EaseInEaseOutBackAndForward(Int32, Single, Single, Transform) */

Vector3 * Assembly-CSharp.dll::AdvancedGhostBehaviour+NetworkedValues::
          AdvancedGhostBehaviour_NetworkedValues_EaseInEaseOutBackAndForward
                    (Vector3 *__return_storage_ptr__,AdvancedGhostBehaviour_NetworkedValues *this,
                    int32_t serverTimeInMilliSeconds,float speed,float radius,Transform *transform,
                    MethodInfo *method)

{
  iVar1 = (int)((_UNK_? / ((speed * _UNK_?) / (radius * _UNK_?))) *
               _UNK_?);
  dVar2 = (double)(((float)(serverTimeInMilliSeconds % iVar1) / (float)iVar1) * _UNK_?);
  func_?();
  VStack_3.y = 0.0;
  VStack_3.z = 0.0;
  VStack_3.x = (float)dVar2 * radius;
  if (transform != (Transform *)0x0) {
    position.y = 0.0;
    position.z = 0.0;
    position.x = VStack_3.x;
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint
                       (&VStack_3,transform,position,(MethodInfo *)0x0);
    fVar5 = pVVar4->y;
    fVar6 = pVVar4->z;
    __return_storage_ptr__->x = pVVar4->x;
    __return_storage_ptr__->y = fVar5;
    __return_storage_ptr__->z = fVar6;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  pVVar4 = (Vector3 *)(*pcVar7)();
  return pVVar4;
}


/* Void GetNextLookAt(Vector3, Int32) */

void Assembly-CSharp.dll::AdvancedGhostBehaviour+NetworkedValues::
     AdvancedGhostBehaviour_NetworkedValues_GetNextLookAt
               (AdvancedGhostBehaviour_NetworkedValues *this,Vector3 curPosition,
               int32_t serverTimeInMilliSeconds,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).ghostBehaviour;
  if (pAVar1 != (AdvancedGhostBehaviour *)0x0) {
    iVar2 = (pAVar1->fields).speed.currentCryptoKey;
    AVar3 = (pAVar1->fields).speed.hiddenValue;
    pBVar4 = (pAVar1->fields).speed.hiddenValueOld;
    fVar5 = (pAVar1->fields).speed.fakeValue;
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    }
    value.hiddenValue = AVar3;
    value.currentCryptoKey = iVar2;
    value.hiddenValueOld = pBVar4;
    value.fakeValue = fVar5;
    value.inited = (pAVar1->fields).speed.inited;
    value._17_3_ = *(undefined3 *)&(pAVar1->fields).speed.field_0x11;
    Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
    ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
    pAVar1 = (this->fields).ghostBehaviour;
    pFVar6 = (this->fields).patrolPattern;
    if (pAVar1 != (AdvancedGhostBehaviour *)0x0) {
      Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
      ObscuredFloat_op_Implicit_1((pAVar1->fields).speed,(MethodInfo *)0x0);
      pAVar1 = (this->fields).ghostBehaviour;
      if (pAVar1 != (AdvancedGhostBehaviour *)0x0) {
        this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pAVar1,(MethodInfo *)0x0);
        if (this_00 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                    (this_00,(MethodInfo *)0x0);
          if (pFVar6 != (Func_5_Int32_Single_Single_UnityEngine_Transform_UnityEngine_Vector3_ *)0x0
             ) {
            (*(pFVar6->fields)._._.invoke_impl)();
            puVar7 = (undefined8 *)func_?();
            uVar8 = *puVar7;
            fVar5 = *(float *)(puVar7 + 1);
            (this->fields).lookDir.x = (float)(int)uVar8;
            (this->fields).lookDir.y = (float)(int)((ulonglong)uVar8 >> 0x20);
            (this->fields).lookDir.z = fVar5;
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Vector3 GetPosition(Single) */

Vector3 * Assembly-CSharp.dll::AdvancedGhostBehaviour+NetworkedValues::
          AdvancedGhostBehaviour_NetworkedValues_GetPosition
                    (Vector3 *__return_storage_ptr__,AdvancedGhostBehaviour_NetworkedValues *this,
                    float delta,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    cRam_? = '\x01';
  }
  pFVar1 = (this->fields).patrolPattern;
  WaitForTicks::WaitForTicks_GetEnvironmentTick((int)(delta * _UNK_?),(MethodInfo *)0x0);
  pAVar2 = (this->fields).ghostBehaviour;
  if (pAVar2 != (AdvancedGhostBehaviour *)0x0) {
    iVar3 = (pAVar2->fields).speed.currentCryptoKey;
    AStack_4 = (pAVar2->fields).speed.hiddenValue;
    pBStack_5 = (pAVar2->fields).speed.hiddenValueOld;
    fVar6 = (pAVar2->fields).speed.fakeValue;
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    }
    value.hiddenValue = AStack_4;
    value.currentCryptoKey = iVar3;
    value.hiddenValueOld = pBStack_5;
    value.fakeValue = fVar6;
    value.inited = (pAVar2->fields).speed.inited;
    value._17_3_ = *(undefined3 *)&(pAVar2->fields).speed.field_0x11;
    Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
    ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
    pAVar2 = (this->fields).ghostBehaviour;
    if (pAVar2 != (AdvancedGhostBehaviour *)0x0) {
      pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)pAVar2,(MethodInfo *)0x0);
      if (pTVar7 != (Transform *)0x0) {
        pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                           (pTVar7,(MethodInfo *)0x0);
        if (pFVar1 != (Func_5_Int32_Single_Single_UnityEngine_Transform_UnityEngine_Vector3_ *)0x0)
        {
          pBStack_5 = (Byte__Array *)&AStack_4;
          puVar8 = (undefined8 *)(*(pFVar1->fields)._._.invoke_impl)();
          uVar9 = *puVar8;
          pvVar10 = *(void **)(puVar8 + 1);
          pTVar7->klass = (Transform__Class *)(int)uVar9;
          pTVar7->monitor = (MonitorData *)(int)((ulonglong)uVar9 >> 0x20);
          (pTVar7->fields)._._.m_CachedPtr = pvVar10;
          return (Vector3 *)pTVar7;
        }
      }
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  pVVar12 = (Vector3 *)(*pcVar11)();
  return pVVar12;
}


/* Single GetX(Single, Single) */

float Assembly-CSharp.dll::AdvancedGhostBehaviour+NetworkedValues::
      AdvancedGhostBehaviour_NetworkedValues_GetX
                (AdvancedGhostBehaviour_NetworkedValues *this,float serverTimeWithSpeedFactor,
                float radius,MethodInfo *method)

{
  dVar1 = (double)serverTimeWithSpeedFactor;
  func_?();
  return (float)dVar1 * radius;
}


/* Single GetY(Single, Single) */

float Assembly-CSharp.dll::AdvancedGhostBehaviour+NetworkedValues::
      AdvancedGhostBehaviour_NetworkedValues_GetY
                (AdvancedGhostBehaviour_NetworkedValues *this,float serverTimeWithSpeedFactor,
                float radius,MethodInfo *method)

{
  dVar1 = (double)serverTimeWithSpeedFactor;
  func_?();
  return (float)dVar1 * radius;
}


/* Void Test(Double) */

void Assembly-CSharp.dll::AdvancedGhostBehaviour+NetworkedValues::
     AdvancedGhostBehaviour_NetworkedValues_Test
               (AdvancedGhostBehaviour_NetworkedValues *this,double serverTimeNormalizedToPeriod,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  dVar1 = (double)CONCAT44(serverTimeNormalizedToPeriod._0_4_,in_stack_2);
  dVar3 = _UNK_?;
  if ((_UNK_? < dVar1) && ((this->fields).didMeasure == 0)) {
    iStack_4 = WaitForTicks::WaitForTicks_Diff((this->fields).prevServertime,(MethodInfo *)0x0);
    message = (Object *)func_?(TypeInfo__System__Int32,&iStack_4);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log(message,(MethodInfo *)0x0);
    iVar5 = WaitForTicks::WaitForTicks_GetEnvironmentTick(0,(MethodInfo *)0x0);
    dVar3 = _UNK_?;
    dVar1 = (double)CONCAT44(serverTimeNormalizedToPeriod._0_4_,in_stack_2);
    (this->fields).prevServertime = iVar5;
    (this->fields).didMeasure = 1;
  }
  if (dVar1 < dVar3) {
    (this->fields).didMeasure = 0;
  }
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::AdvancedGhostBehaviour+NetworkedValues::
     AdvancedGhostBehaviour_NetworkedValues_Update
               (AdvancedGhostBehaviour_NetworkedValues *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    cRam_? = '\x01';
  }
  pFVar1 = (this->fields).patrolPattern;
  fStack_2 = (float)WaitForTicks::WaitForTicks_GetEnvironmentTick(0,(MethodInfo *)0x0);
  pAVar3 = (this->fields).ghostBehaviour;
  if (pAVar3 != (AdvancedGhostBehaviour *)0x0) {
    iVar4 = (pAVar3->fields).speed.currentCryptoKey;
    AStack_5 = (pAVar3->fields).speed.hiddenValue;
    pBStack_6 = (pAVar3->fields).speed.hiddenValueOld;
    fVar7 = (pAVar3->fields).speed.fakeValue;
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    }
    value_00.hiddenValue = AStack_5;
    value_00.currentCryptoKey = iVar4;
    value_00.hiddenValueOld = pBStack_6;
    value_00.fakeValue = fVar7;
    value_00.inited = (pAVar3->fields).speed.inited;
    value_00._17_3_ = *(undefined3 *)&(pAVar3->fields).speed.field_0x11;
    fStack_8 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
               ObscuredFloat_op_Implicit_1(value_00,(MethodInfo *)0x0);
    pAVar3 = (this->fields).ghostBehaviour;
    if (pAVar3 != (AdvancedGhostBehaviour *)0x0) {
      pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)pAVar3,(MethodInfo *)0x0);
      if (pTVar9 != (Transform *)0x0) {
        pBVar10 = (Byte__Array__Class *)
                 UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                           (pTVar9,(MethodInfo *)0x0);
        if (pFVar1 != (Func_5_Int32_Single_Single_UnityEngine_Transform_UnityEngine_Vector3_ *)0x0)
        {
          pMStack_11 = (pFVar1->fields)._._.method;
          pBStack_12 = pBVar10;
          pBStack_6 = (Byte__Array *)&pBStack_12;
          puVar13 = (undefined8 *)(*(pFVar1->fields)._._.invoke_impl)();
          uVar14 = *puVar13;
          fVar7 = *(float *)(puVar13 + 1);
          (this->fields).nextPosition.x = (float)(int)uVar14;
          (this->fields).nextPosition.y = (float)(int)((ulonglong)uVar14 >> 0x20);
          (this->fields).nextPosition.z = fVar7;
          iVar4 = WaitForTicks::WaitForTicks_GetEnvironmentTick(0,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
            cRam_? = '\x01';
          }
          fStack_15 = (this->fields).minLookDeltaOffset;
          pAVar3 = (this->fields).ghostBehaviour;
          if (pAVar3 != (AdvancedGhostBehaviour *)0x0) {
            iVar16 = (pAVar3->fields).speed.currentCryptoKey;
            AStack_5 = (pAVar3->fields).speed.hiddenValue;
            pBStack_6 = (pAVar3->fields).speed.hiddenValueOld;
            fVar17 = (pAVar3->fields).speed.fakeValue;
            if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
                cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
            }
            value.hiddenValue = AStack_5;
            value.currentCryptoKey = iVar16;
            value.hiddenValueOld = pBStack_6;
            value.fakeValue = fVar17;
            value.inited = (pAVar3->fields).speed.inited;
            value._17_3_ = *(undefined3 *)&(pAVar3->fields).speed.field_0x11;
            fStack_8 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                       ObscuredFloat::ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
            fStack_8 = 1.0 / fStack_8;
            pAVar3 = (this->fields).ghostBehaviour;
            pFVar1 = (this->fields).patrolPattern;
            if (pAVar3 != (AdvancedGhostBehaviour *)0x0) {
              fStack_2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                         ObscuredFloat::ObscuredFloat_op_Implicit_1
                                   ((pAVar3->fields).speed,(MethodInfo *)0x0);
              pAVar3 = (this->fields).ghostBehaviour;
              if (pAVar3 != (AdvancedGhostBehaviour *)0x0) {
                fVar17 = (pAVar3->fields).radius;
                pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                   ((Component *)pAVar3,(MethodInfo *)0x0);
                if (pTVar9 != (Transform *)0x0) {
                  pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                                     (pTVar9,(MethodInfo *)0x0);
                  if (pFVar1 != (Func_5_Int32_Single_Single_UnityEngine_Transform_UnityEngine_Vector3_
                                 *)0x0) {
                    puVar13 = (undefined8 *)
                             (*(pFVar1->fields)._._.invoke_impl)
                                       (&AStack_5,(pFVar1->fields)._._.method_code,
                                        (int)(fStack_8 * fStack_15 * _UNK_?) + iVar4,fStack_2
                                        ,fVar17,pTVar9,(pFVar1->fields)._._.method);
                    _pBStack_1c = *puVar13;
                    pIStack_18 = (Il2CppArrayBounds *)(*(float *)(puVar13 + 1) - fVar7);
                    puVar13 = (undefined8 *)func_?(&AStack_5,&stack0xffffffd8,0);
                    uVar14 = *puVar13;
                    fVar7 = *(float *)(puVar13 + 1);
                    (this->fields).lookDir.x = (float)(int)uVar14;
                    (this->fields).lookDir.y = (float)(int)((ulonglong)uVar14 >> 0x20);
                    (this->fields).lookDir.z = fVar7;
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* AdvancedGhostBehaviour+NetworkedValues(AdvancedGhostBehaviour) */

void Assembly-CSharp.dll::AdvancedGhostBehaviour+NetworkedValues::
     AdvancedGhostBehaviour_NetworkedValues__ctor
               (AdvancedGhostBehaviour_NetworkedValues *this,AdvancedGhostBehaviour *ghostBehaviour,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Func<int,_float,_float,_UnityEngine::Transform,_UnityEngine::Vector3>
                   );
    func_?(&
                    MethodInfo__AdvancedGhostBehaviour__NetworkedValues__EaseInEaseOutBackAndForward_int__float__float__UnityEngine__Transform_
                   );
    cRam_? = '\x01';
  }
  (this->fields).minLookDeltaOffset = 0.1;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  ppAVar1 = &(this->fields).ghostBehaviour;
  *ppAVar1 = ghostBehaviour;
  func_?(ppAVar1,ghostBehaviour);
  this_00 = (Func_5_Int32_Single_Single_Object_UnityEngine_Vector3_ *)
            func_?(
                           TypeInfo__System__Func<int,_float,_float,_UnityEngine::Transform,_UnityEngine::Vector3>
                           );
  mscorlib.dll::System::Func`5[Int32,Single,Single,Object,UnityEngine::Vector3]::
  Func_5_Int32_Single_Single_Object_UnityEngine_Vector3___ctor
            (this_00,(Object *)this,
             MethodInfo__AdvancedGhostBehaviour__NetworkedValues__EaseInEaseOutBackAndForward_int__float__float__UnityEngine__Transform_
             ,(MethodInfo *)0x0);
  ppFVar2 = &(this->fields).patrolPattern;
  *ppFVar2 = (Func_5_Int32_Single_Single_UnityEngine_Transform_UnityEngine_Vector3_ *)this_00;
  func_?(ppFVar2,this_00);
  AdvancedGhostBehaviour_NetworkedValues_Update(this,(MethodInfo *)0x0);
  return;
}

