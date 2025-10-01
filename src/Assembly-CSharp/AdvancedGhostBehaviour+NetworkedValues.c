
/* Vector3 BackAndForward(Int32, Single, Single, Transform) */

Vector3 * Assembly-CSharp.dll::AdvancedGhostBehaviour+NetworkedValues::AdvancedGhostBehaviour_NetworkedValues_BackAndForward(Vector3 *__return_storage_ptr__,AdvancedGhostBehaviour_NetworkedValues *this,int32_t serverTimeInMilliSeconds,float speed,float radius,Transform *transform,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    cRam_? = '\x01';
  }
  fVar1 = radius + radius;
  fVar2 = radius + radius + radius + radius;
  iVar3 = (int)((fVar2 / (speed * 0.2)) * 1000.0);
  fVar2 = ((float)(serverTimeInMilliSeconds % iVar3) / (float)iVar3) * fVar2;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar5 = (pVVar4->backVector).x;
  uVar6 = (pVVar4->backVector).y;
  fVar7 = (float)uVar5 * radius;
  fVar8 = (float)uVar6 * radius;
  VStack_9.z = (pVVar4->backVector).z * radius;
  if (fVar1 < fVar2) {
    func_?();
    VStack_9.z = -VStack_9.z;
    fVar7 = -fVar7;
    fVar8 = -fVar8;
  }
  fVar2 = VStack_9.z;
  puVar10 = (undefined8 *)func_?(&VStack_9,&stack0xffffffbc,0);
  fVar11 = -(float)((ulonglong)*puVar10 >> 0x20);
  fVar1 = -*(float *)(puVar10 + 1);
  if (transform != (Transform *)0x0) {
    position_00.y = fVar8;
    position_00.x = fVar7;
    position_00.z = fVar2;
    pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint(&VStack_9,transform,position_00,(MethodInfo *)0x0);
    uVar13 = pVVar12->x;
    uVar14 = pVVar12->y;
    fVar15 = pVVar12->z;
    position_01.y = fVar8;
    position_01.x = fVar7;
    position_01.z = fVar2;
    fVar7 = fVar2;
    pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint(&VStack_9,transform,position_01,(MethodInfo *)0x0);
    uVar16 = pVVar12->x;
    uVar17 = pVVar12->y;
    fVar7 = (float)uVar16 + fVar7;
    fVar11 = (float)uVar17 + fVar11;
    fVar1 = pVVar12->z + fVar1;
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    fVar8 = 1.0;
    fVar18 = 1.0;
    start.y = (float)uVar14;
    start.x = (float)uVar13;
    start.z = fVar15;
    end.y = fVar11;
    end.x = fVar7;
    end.z = fVar1;
    auVar19 = ZEXT412(0x3f800000) << 0x40;
    color.a = 1.0;
    color.r = (float)auVar19._0_4_;
    color.g = (float)auVar19._4_4_;
    color.b = (float)auVar19._8_4_;
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_DrawLine(start,end,color,0.5,(MethodInfo *)0x0);
    position_02.y = fVar18;
    position_02.x = fVar8;
    position_02.z = fVar2;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint(&VStack_9,transform,position_02,(MethodInfo *)0x0);
    position_03.y = fVar18;
    position_03.x = fVar8;
    position_03.z = fVar2;
    pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint((Vector3 *)&stack0xffffffa8,transform,position_03,(MethodInfo *)0x0);
    VStack_9.x = pVVar12->x;
    VStack_9.y = pVVar12->y;
    VStack_9.z = pVVar12->z;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar20 = (pVVar4->rightVector).x;
    uVar21 = (pVVar4->rightVector).y;
    VStack_9.z = (pVVar4->rightVector).z + VStack_9.z;
    fVar7 = 0.0;
    fVar1 = 0.5;
    fVar2 = 1.0;
    puVar22 = &UNK_?;
    start_00.y = fVar18;
    start_00.x = fVar8;
    start_00.z = 0.0;
    end_00.y = (float)uVar21 + VStack_9.y;
    end_00.x = (float)uVar20 + VStack_9.x;
    end_00.z = VStack_9.z;
    auVar19 = ZEXT412(0x3f800000) << 0x40;
    color_00.a = 1.0;
    color_00.r = (float)auVar19._0_4_;
    color_00.g = (float)auVar19._4_4_;
    color_00.b = (float)auVar19._8_4_;
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_DrawLine(start_00,end_00,color_00,0.5,(MethodInfo *)0x0);
    VStack_9.z = fVar2 * fVar7 + fVar18;
    position.y = fVar1 * fVar7 + fVar8;
    position.x = fVar11 * fVar7 + (float)puVar22;
    position.z = VStack_9.z;
    pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint(&VStack_9,transform,position,(MethodInfo *)0x0);
    _UNK_? = pVVar12->x;
    _UNK_? = pVVar12->y;
                    /* WARNING: Read-only address (ram,0xADDR) is written */
                    /* WARNING: Read-only address (ram,0xADDR) is written */
    _UNK_? = pVVar12->z;
    return (Vector3 *)&UNK_?;
  }
  func_?();
  pcVar23 = (code *)swi(3);
  pVVar12 = (Vector3 *)(*pcVar23)();
  return pVVar12;
}


/* Vector3 Circle(Int32, Single, Single, Transform) */

Vector3 * Assembly-CSharp.dll::AdvancedGhostBehaviour+NetworkedValues::AdvancedGhostBehaviour_NetworkedValues_Circle(Vector3 *__return_storage_ptr__,AdvancedGhostBehaviour_NetworkedValues *this,int32_t serverTimeInMilliSeconds,float speed,float radius,Transform *transform,MethodInfo *method)

{
  iVar1 = (int)((1.0 / ((speed * 0.2) / (radius * 6.2831855))) * 1000.0);
  fVar2 = ((float)(serverTimeInMilliSeconds % iVar1) / (float)iVar1) * 6.2831855;
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
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint(&VStack_4,transform,position,(MethodInfo *)0x0);
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

Vector3 * Assembly-CSharp.dll::AdvancedGhostBehaviour+NetworkedValues::AdvancedGhostBehaviour_NetworkedValues_EaseInEaseOutBackAndForward(Vector3 *__return_storage_ptr__,AdvancedGhostBehaviour_NetworkedValues *this,int32_t serverTimeInMilliSeconds,float speed,float radius,Transform *transform,MethodInfo *method)

{
  iVar1 = (int)((1.0 / ((speed * 0.2) / (radius * 6.2831855))) * 1000.0);
  dVar2 = (double)(((float)(serverTimeInMilliSeconds % iVar1) / (float)iVar1) * 6.2831855);
  func_?();
  VStack_3.y = 0.0;
  VStack_3.z = 0.0;
  VStack_3.x = (float)dVar2 * radius;
  if (transform != (Transform *)0x0) {
    position.y = 0.0;
    position.z = 0.0;
    position.x = VStack_3.x;
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint(&VStack_3,transform,position,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::AdvancedGhostBehaviour+NetworkedValues::AdvancedGhostBehaviour_NetworkedValues_GetNextLookAt(AdvancedGhostBehaviour_NetworkedValues *this,Vector3 curPosition,int32_t serverTimeInMilliSeconds,MethodInfo *method)

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
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    }
    value.hiddenValue = AVar3;
    value.currentCryptoKey = iVar2;
    value.hiddenValueOld = pBVar4;
    value.fakeValue = fVar5;
    value.inited = (pAVar1->fields).speed.inited;
    value._17_3_ = *(undefined3 *)&(pAVar1->fields).speed.field_0x11;
    Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
    pAVar1 = (this->fields).ghostBehaviour;
    pFVar6 = (this->fields).patrolPattern;
    if (pAVar1 != (AdvancedGhostBehaviour *)0x0) {
      Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::ObscuredFloat_op_Implicit_1((pAVar1->fields).speed,(MethodInfo *)0x0);
      pAVar1 = (this->fields).ghostBehaviour;
      if (pAVar1 != (AdvancedGhostBehaviour *)0x0) {
        this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pAVar1,(MethodInfo *)0x0);
        if (this_00 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent(this_00,(MethodInfo *)0x0);
          if (pFVar6 != (Func_5_Int32_Single_Single_UnityEngine_Transform_UnityEngine_Vector3_ *)0x0) {
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

Vector3 * Assembly-CSharp.dll::AdvancedGhostBehaviour+NetworkedValues::AdvancedGhostBehaviour_NetworkedValues_GetPosition(Vector3 *__return_storage_ptr__,AdvancedGhostBehaviour_NetworkedValues *this,float delta,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    cRam_? = '\x01';
  }
  pFVar1 = (this->fields).patrolPattern;
  WaitForTicks::WaitForTicks_GetEnvironmentTick((int)(delta * 1000.0),(MethodInfo *)0x0);
  pAVar2 = (this->fields).ghostBehaviour;
  if (pAVar2 != (AdvancedGhostBehaviour *)0x0) {
    iVar3 = (pAVar2->fields).speed.currentCryptoKey;
    AStack_4 = (pAVar2->fields).speed.hiddenValue;
    pBStack_5 = (pAVar2->fields).speed.hiddenValueOld;
    fVar6 = (pAVar2->fields).speed.fakeValue;
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    }
    value.hiddenValue = AStack_4;
    value.currentCryptoKey = iVar3;
    value.hiddenValueOld = pBStack_5;
    value.fakeValue = fVar6;
    value.inited = (pAVar2->fields).speed.inited;
    value._17_3_ = *(undefined3 *)&(pAVar2->fields).speed.field_0x11;
    Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
    pAVar2 = (this->fields).ghostBehaviour;
    if (pAVar2 != (AdvancedGhostBehaviour *)0x0) {
      pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pAVar2,(MethodInfo *)0x0);
      if (pTVar7 != (Transform *)0x0) {
        pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent(pTVar7,(MethodInfo *)0x0);
        if (pFVar1 != (Func_5_Int32_Single_Single_UnityEngine_Transform_UnityEngine_Vector3_ *)0x0) {
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

float Assembly-CSharp.dll::AdvancedGhostBehaviour+NetworkedValues::AdvancedGhostBehaviour_NetworkedValues_GetX(AdvancedGhostBehaviour_NetworkedValues *this,float serverTimeWithSpeedFactor,float radius,MethodInfo *method)

{
  dVar1 = (double)serverTimeWithSpeedFactor;
  func_?();
  return (float)dVar1 * radius;
}


/* Single GetY(Single, Single) */

float Assembly-CSharp.dll::AdvancedGhostBehaviour+NetworkedValues::AdvancedGhostBehaviour_NetworkedValues_GetY(AdvancedGhostBehaviour_NetworkedValues *this,float serverTimeWithSpeedFactor,float radius,MethodInfo *method)

{
  dVar1 = (double)serverTimeWithSpeedFactor;
  func_?();
  return (float)dVar1 * radius;
}


/* Void Test(Double) */

void Assembly-CSharp.dll::AdvancedGhostBehaviour+NetworkedValues::AdvancedGhostBehaviour_NetworkedValues_Test(AdvancedGhostBehaviour_NetworkedValues *this,double serverTimeNormalizedToPeriod,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  dVar1 = (double)CONCAT44(serverTimeNormalizedToPeriod._0_4_,in_stack_2);
  if ((5000.0 < dVar1) && ((this->fields).didMeasure == 0)) {
    iStack_3 = WaitForTicks::WaitForTicks_Diff((this->fields).prevServertime,(MethodInfo *)0x0);
    message = (Object *)func_?(TypeInfo__System__Int32,&iStack_3);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log(message,(MethodInfo *)0x0);
    iVar4 = WaitForTicks::WaitForTicks_GetEnvironmentTick(0,(MethodInfo *)0x0);
    dVar1 = (double)CONCAT44(serverTimeNormalizedToPeriod._0_4_,in_stack_2);
    (this->fields).prevServertime = iVar4;
    (this->fields).didMeasure = 1;
  }
  if (dVar1 < 5000.0) {
    (this->fields).didMeasure = 0;
  }
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::AdvancedGhostBehaviour+NetworkedValues::AdvancedGhostBehaviour_NetworkedValues_Update(AdvancedGhostBehaviour_NetworkedValues *this,MethodInfo *method)

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
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    }
    value_00.hiddenValue = AStack_5;
    value_00.currentCryptoKey = iVar4;
    value_00.hiddenValueOld = pBStack_6;
    value_00.fakeValue = fVar7;
    value_00.inited = (pAVar3->fields).speed.inited;
    value_00._17_3_ = *(undefined3 *)&(pAVar3->fields).speed.field_0x11;
    fStack_8 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::ObscuredFloat_op_Implicit_1(value_00,(MethodInfo *)0x0);
    pAVar3 = (this->fields).ghostBehaviour;
    if (pAVar3 != (AdvancedGhostBehaviour *)0x0) {
      pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pAVar3,(MethodInfo *)0x0);
      if (pTVar9 != (Transform *)0x0) {
        pBVar10 = (Byte__Array__Class *)UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent(pTVar9,(MethodInfo *)0x0);
        if (pFVar1 != (Func_5_Int32_Single_Single_UnityEngine_Transform_UnityEngine_Vector3_ *)0x0) {
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
          fStack_2 = (this->fields).minLookDeltaOffset;
          pAVar3 = (this->fields).ghostBehaviour;
          if (pAVar3 != (AdvancedGhostBehaviour *)0x0) {
            iVar15 = (pAVar3->fields).speed.currentCryptoKey;
            AStack_5 = (pAVar3->fields).speed.hiddenValue;
            pBStack_6 = (pAVar3->fields).speed.hiddenValueOld;
            fVar16 = (pAVar3->fields).speed.fakeValue;
            if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
            }
            value.hiddenValue = AStack_5;
            value.currentCryptoKey = iVar15;
            value.hiddenValueOld = pBStack_6;
            value.fakeValue = fVar16;
            value.inited = (pAVar3->fields).speed.inited;
            value._17_3_ = *(undefined3 *)&(pAVar3->fields).speed.field_0x11;
            fVar16 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
            pAVar3 = (this->fields).ghostBehaviour;
            fVar16 = (1.0 / fVar16) * fStack_2;
            pFVar1 = (this->fields).patrolPattern;
            if (pAVar3 != (AdvancedGhostBehaviour *)0x0) {
              fStack_2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::ObscuredFloat_op_Implicit_1((pAVar3->fields).speed,(MethodInfo *)0x0);
              pAVar3 = (this->fields).ghostBehaviour;
              if (pAVar3 != (AdvancedGhostBehaviour *)0x0) {
                fVar17 = (pAVar3->fields).radius;
                pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pAVar3,(MethodInfo *)0x0);
                if (pTVar9 != (Transform *)0x0) {
                  pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent(pTVar9,(MethodInfo *)0x0);
                  if (pFVar1 != (Func_5_Int32_Single_Single_UnityEngine_Transform_UnityEngine_Vector3_ *)0x0) {
                    puVar13 = (undefined8 *)(*(pFVar1->fields)._._.invoke_impl)(&AStack_5,(pFVar1->fields)._._.method_code,(int)(fVar16 * 1000.0) + iVar4,fStack_2,fVar17,pTVar9,(pFVar1->fields)._._.method);
                    _pBStack_18 = *puVar13;
                    pIStack_18 = (Il2CppArrayBounds *)(*(float *)(puVar13 + 1) - fVar7);
                    puVar13 = (undefined8 *)func_?(&AStack_5,&stack0xffffffdc,0);
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

void Assembly-CSharp.dll::AdvancedGhostBehaviour+NetworkedValues::AdvancedGhostBehaviour_NetworkedValues__ctor(AdvancedGhostBehaviour_NetworkedValues *this,AdvancedGhostBehaviour *ghostBehaviour,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Func<int,_float,_float,_UnityEngine::Transform,_UnityEngine::Vector3>);
    func_?(&MethodInfo__AdvancedGhostBehaviour__NetworkedValues__EaseInEaseOutBackAndForward_int__float__float__UnityEngine__Transform_);
    cRam_? = '\x01';
  }
  (this->fields).minLookDeltaOffset = 0.1;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  (this->fields).ghostBehaviour = ghostBehaviour;
  func_?(&(this->fields).ghostBehaviour,ghostBehaviour);
  this_00 = (Func_5_Int32_Single_Single_Object_UnityEngine_Vector3_ *)func_?(TypeInfo__System__Func<int,_float,_float,_UnityEngine::Transform,_UnityEngine::Vector3>);
  mscorlib.dll::System::Func`5[Int32,Single,Single,Object,UnityEngine::Vector3]::Func_5_Int32_Single_Single_Object_UnityEngine_Vector3___ctor(this_00,(Object *)this,MethodInfo__AdvancedGhostBehaviour__NetworkedValues__EaseInEaseOutBackAndForward_int__float__float__UnityEngine__Transform_,(MethodInfo *)0x0);
  (this->fields).patrolPattern = (Func_5_Int32_Single_Single_UnityEngine_Transform_UnityEngine_Vector3_ *)this_00;
  func_?(&(this->fields).patrolPattern,this_00);
  AdvancedGhostBehaviour_NetworkedValues_Update(this,(MethodInfo *)0x0);
  return;
}

