
/* Vector3 BackAndForward(Int32, Single, Single, Transform) */

Vector3 * Assembly-CSharp.dll::AdvancedGhostBehaviour+NetworkedValues::
          AdvancedGhostBehaviour_NetworkedValues_BackAndForward
                    (Vector3 *__return_storage_ptr__,AdvancedGhostBehaviour_NetworkedValues *this,
                    int32_t serverTimeInMilliSeconds,float speed,float radius,Transform *transform,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = radius + radius;
  fVar2 = fVar1 + fVar1;
  iVar3 = (int)((fVar2 / (speed * _UNK_?)) * _UNK_?);
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_back
                      ((Vector3 *)&stack0xffffffdc,(MethodInfo *)0x0);
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                      ((Vector3 *)&stack0xffffffdc,*pVVar4,radius,(MethodInfo *)0x0);
  uVar5 = pVVar4->y;
  fVar6 = pVVar4->z;
  if (fVar1 < ((float)(serverTimeInMilliSeconds % iVar3) / (float)iVar3) * fVar2) {
    func_?();
    uVar7._0_4_ = pVVar4->x;
    uVar7._4_4_ = pVVar4->y;
    fVar1 = pVVar4->z;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    VVar8.z = fVar1;
    VVar8.x = (float)(int)uVar7;
    VVar8.y = (float)(int)((ulonglong)uVar7 >> 0x20);
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_UnaryNegation
                        ((Vector3 *)&stack0xffffffdc,VVar8,(MethodInfo *)0x0);
    uVar9 = pVVar4->y;
    fVar6 = pVVar4->z;
    uVar5 = uVar9;
  }
  puVar10 = (undefined8 *)func_?();
  uVar7 = *puVar10;
  fVar1 = *(float *)(puVar10 + 1);
  uVar11 = (undefined4)((ulonglong)uVar7 >> 0x20);
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
    uVar7 = CONCAT44(uVar11,(undefined4)uVar7);
  }
  fVar2 = 0.0;
  a_02.z = fVar1;
  a_02.x = (float)(int)uVar7;
  a_02.y = (float)(int)((ulonglong)uVar7 >> 0x20);
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_UnaryNegation
                      ((Vector3 *)&stack0xffffffdc,a_02,(MethodInfo *)0x0);
  fVar1 = pVVar4->z;
  if (transform != (Transform *)0x0) {
    uVar7 = CONCAT44(transform,(Vector3 *)&stack0xffffffe8);
    position_01.y = (float)uVar5;
    position_01.x = fVar2;
    position_01.z = fVar6;
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint
                        ((Vector3 *)&stack0xffffffe8,transform,position_01,(MethodInfo *)0x0);
    fVar6 = pVVar4->x;
    fVar12 = pVVar4->z;
    uVar5 = (undefined4)((ulonglong)uVar7 >> 0x20);
    puVar13 = &UNK_?;
    position_02.z = fVar2;
    position_02.x = (float)(int)uVar7;
    position_02.y = (float)(int)((ulonglong)uVar7 >> 0x20);
    fVar14 = fVar2;
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint
                        ((Vector3 *)&stack0xffffffe8,transform,position_02,(MethodInfo *)0x0);
    uVar15 = pVVar4->x;
    uVar16 = pVVar4->y;
    __return_storage_ptr__ = (Vector3 *)pVVar4->z;
    fVar17 = (float)uVar16;
    pVVar4 = (Vector3 *)&stack0xffffffc4;
    puVar18 = &UNK_?;
    VVar8.x = (float)uVar15;
    VVar8 = (Vector3)CONCAT84(uVar19,VVar8.x);
    b.y = fVar14;
    b.x = (float)uVar5;
    b.z = fVar1;
    pVVar20 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                        (pVVar4,VVar8,b,(MethodInfo *)0x0);
    fVar1 = pVVar20->x;
    fVar14 = pVVar20->y;
    fVar21 = pVVar20->z;
    pCVar22 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_blue
                        ((Color *)&stack0xffffffc0,(MethodInfo *)0x0);
    fVar23 = pCVar22->r;
    fVar24 = pCVar22->g;
    fVar25 = pCVar22->b;
    fVar26 = pCVar22->a;
    fStack27 = fVar14;
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
      fStack27 = fVar14;
    }
    start.y = (float)puVar13;
    start.x = fVar6;
    start.z = fVar12;
    end.y = fStack27;
    end.x = fVar1;
    end.z = fVar21;
    color.g = fVar24;
    color.r = fVar23;
    color.b = fVar25;
    color.a = fVar26;
    fStack28 = fVar21;
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_DrawLine
              (start,end,color,0.5,(MethodInfo *)0x0);
    position.z = fVar2;
    position.x = (float)(int)uVar7;
    position.y = (float)(int)((ulonglong)uVar7 >> 0x20);
    pVVar20 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint
                        ((Vector3 *)&stack0xffffffc4,transform,position,(MethodInfo *)0x0);
    fVar12 = pVVar20->x;
    fVar24 = pVVar20->y;
    fVar1 = pVVar20->z;
    position_00.z = fVar2;
    position_00.x = (float)(int)uVar7;
    position_00.y = (float)(int)((ulonglong)uVar7 >> 0x20);
    pVVar20 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint
                        ((Vector3 *)&stack0xffffffc4,transform,position_00,(MethodInfo *)0x0);
    fVar21 = pVVar20->x;
    fVar25 = pVVar20->y;
    fVar14 = pVVar20->z;
    pVVar20 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_right
                        ((Vector3 *)&stack0xffffffc4,(MethodInfo *)0x0);
    a.y = fVar25;
    a.x = fVar21;
    a.z = fVar14;
    pVVar20 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                        ((Vector3 *)&stack0xffffffc4,a,*pVVar20,(MethodInfo *)0x0);
    fVar23 = pVVar20->x;
    fVar26 = pVVar20->y;
    fVar14 = pVVar20->z;
    pCVar22 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_blue
                        ((Color *)&stack0xffffffc0,(MethodInfo *)0x0);
    end_00.y = fVar26;
    end_00.x = fVar23;
    start_00.y = fVar24;
    start_00.x = fVar12;
    start_00.z = fVar1;
    end_00.z = fVar14;
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_DrawLine
              (start_00,end_00,*pCVar22,0.5,(MethodInfo *)0x0);
    fVar1 = (float)uVar7;
    fVar14 = (float)((ulonglong)uVar7 >> 0x20);
    a_00.y = (float)pVVar4;
    a_00.x = (float)puVar18;
    a_00.z = (float)puVar13;
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                        ((Vector3 *)&stack0xffffffc4,a_00,fVar6,(MethodInfo *)0x0);
    a_01.y = fVar14;
    a_01.x = fVar1;
    a_01.z = fVar2;
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                        ((Vector3 *)&stack0xffffffc4,a_01,*pVVar4,(MethodInfo *)0x0);
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint
                        ((Vector3 *)&stack0xffffffc4,transform,*pVVar4,(MethodInfo *)0x0);
    fVar2 = pVVar4->y;
    fVar1 = pVVar4->z;
    __return_storage_ptr__->x = pVVar4->x;
    __return_storage_ptr__->y = fVar2;
    __return_storage_ptr__->z = fVar1;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar29 = (code *)swi(3);
  pVVar4 = (Vector3 *)(*pcVar29)();
  return pVVar4;
}


/* Vector3 Circle(Int32, Single, Single, Transform) */

Vector3 * Assembly-CSharp.dll::AdvancedGhostBehaviour+NetworkedValues::
          AdvancedGhostBehaviour_NetworkedValues_Circle
                    (Vector3 *__return_storage_ptr__,AdvancedGhostBehaviour_NetworkedValues *this,
                    int32_t serverTimeInMilliSeconds,float speed,float radius,Transform *transform,
                    MethodInfo *method)

{
  uStack_1 = 0;
  fStack_2 = 0.0;
  iVar3 = (int)((_UNK_? / ((speed * _UNK_?) / (radius * _UNK_?))) *
               _UNK_?);
  fVar4 = ((float)(serverTimeInMilliSeconds % iVar3) / (float)iVar3) * _UNK_?;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  pMVar5 = TypeInfo__UnityEngine__Mathf;
  dVar6 = (double)fVar4;
  func_?();
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    pMVar5 = TypeInfo__UnityEngine__Mathf;
  }
  if ((((uint)(pMVar5->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((pMVar5->_1).cctor_started == 0)) {
    func_?(pMVar5);
  }
  dVar7 = (double)fVar4;
  func_?(0);
  func_?(&uStack_1,(float)dVar6 * radius,0,(float)dVar7 * radius);
  if (transform != (Transform *)0x0) {
    position.z = fStack_2;
    position.x = (float)(undefined4)uStack_1;
    position.y = (float)uStack_1._4_4_;
    pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint
                       (&VStack_9,transform,position,(MethodInfo *)0x0);
    fVar10 = pVVar8->y;
    fVar4 = pVVar8->z;
    __return_storage_ptr__->x = pVVar8->x;
    __return_storage_ptr__->y = fVar10;
    __return_storage_ptr__->z = fVar4;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar11 = (code *)swi(3);
  pVVar8 = (Vector3 *)(*pcVar11)();
  return pVVar8;
}


/* Vector3 EaseInEaseOutBackAndForward(Int32, Single, Single, Transform) */

Vector3 * Assembly-CSharp.dll::AdvancedGhostBehaviour+NetworkedValues::
          AdvancedGhostBehaviour_NetworkedValues_EaseInEaseOutBackAndForward
                    (Vector3 *__return_storage_ptr__,AdvancedGhostBehaviour_NetworkedValues *this,
                    int32_t serverTimeInMilliSeconds,float speed,float radius,Transform *transform,
                    MethodInfo *method)

{
  uStack_1 = 0;
  fStack_2 = 0.0;
  iVar3 = (int)((_UNK_? / ((speed * _UNK_?) / (radius * _UNK_?))) *
               _UNK_?);
  fVar4 = ((float)(serverTimeInMilliSeconds % iVar3) / (float)iVar3) * _UNK_?;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  dVar5 = (double)fVar4;
  func_?(0,0,0);
  func_?(&uStack_1,(float)dVar5 * radius);
  if (transform != (Transform *)0x0) {
    position.z = fStack_2;
    position.x = (float)(undefined4)uStack_1;
    position.y = (float)uStack_1._4_4_;
    pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint
                       (&VStack_7,transform,position,(MethodInfo *)0x0);
    fVar8 = pVVar6->y;
    fVar4 = pVVar6->z;
    __return_storage_ptr__->x = pVVar6->x;
    __return_storage_ptr__->y = fVar8;
    __return_storage_ptr__->z = fVar4;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar9 = (code *)swi(3);
  pVVar6 = (Vector3 *)(*pcVar9)();
  return pVVar6;
}


/* Void GetNextLookAt(Vector3, Int32) */

void Assembly-CSharp.dll::AdvancedGhostBehaviour+NetworkedValues::
     AdvancedGhostBehaviour_NetworkedValues_GetNextLookAt
               (AdvancedGhostBehaviour_NetworkedValues *this,Vector3 curPosition,
               int32_t serverTimeInMilliSeconds,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  puStack_2 = (undefined *)0x0;
  pAVar3 = (this->fields).ghostBehaviour;
  if (pAVar3 != (AdvancedGhostBehaviour *)0x0) {
    iVar4 = (pAVar3->fields).speed.currentCryptoKey;
    AVar5 = (pAVar3->fields).speed.hiddenValue;
    pBVar6 = (pAVar3->fields).speed.hiddenValueOld;
    fVar7 = (pAVar3->fields).speed.fakeValue;
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    }
    value.hiddenValue = AVar5;
    value.currentCryptoKey = iVar4;
    value.hiddenValueOld = pBVar6;
    value.fakeValue = fVar7;
    value.inited = (pAVar3->fields).speed.inited;
    value._17_3_ = *(undefined3 *)&(pAVar3->fields).speed.field_0x11;
    Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
    ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
    pAVar3 = (this->fields).ghostBehaviour;
    this_00 = (Func_5_Int32_Single_Single_Object_UnityEngine_Vector3_ *)(this->fields).patrolPattern
    ;
    if (pAVar3 != (AdvancedGhostBehaviour *)0x0) {
      Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
      ObscuredFloat_op_Implicit_1((pAVar3->fields).speed,(MethodInfo *)0x0);
      pAVar3 = (this->fields).ghostBehaviour;
      if (pAVar3 != (AdvancedGhostBehaviour *)0x0) {
        this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                            ((Component_1 *)pAVar3,(MethodInfo *)0x0);
        if (this_01 != (Transform *)0x0) {
          puVar8 = &UNK_?;
          arg4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                           (this_01,(MethodInfo *)0x0);
          if (this_00 != (Func_5_Int32_Single_Single_Object_UnityEngine_Vector3_ *)0x0) {
            pVVar9 = System.Core.dll::System::Func`5[Int32,Single,Single,Object,UnityEngine::
                     Vector3]::Func_5_Int32_Single_Single_Object_UnityEngine_Vector3__Invoke
                               ((Vector3 *)&stack0xffffffd4,this_00,
                                serverTimeInMilliSeconds -
                                (int)((float)puVar8 * (float)pAVar3 * _UNK_?),(float)this_01
                                ,(float)
                                 MethodInfo__System__Func<int,_float,_float,_UnityEngine::Transform,_UnityEngine::Vector3>__Invoke_int__float__float__UnityEngine__Transform_
                                ,(Object *)arg4,
                                MethodInfo__System__Func<int,_float,_float,_UnityEngine::Transform,_UnityEngine::Vector3>__Invoke_int__float__float__UnityEngine__Transform_
                               );
            uVar10._0_4_ = pVVar9->x;
            uVar10._4_4_ = pVVar9->y;
            fVar7 = pVVar9->z;
            if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
              func_?();
            }
            puStack11 = (undefined8 *)curPosition.z;
            a.z = fVar7;
            a.x = (float)(int)uVar10;
            a.y = (float)(int)((ulonglong)uVar10 >> 0x20);
            pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                               ((Vector3 *)&stack0xffffffd4,a,curPosition,(MethodInfo *)0x0);
            uStack_1._0_4_ = pVVar9->x;
            uStack_1._4_4_ = pVVar9->y;
            puStack_2 = (undefined *)pVVar9->z;
            puStack11 = &uStack_1;
            puVar12 = (undefined8 *)func_?();
            uVar10 = *puVar12;
            fVar7 = *(float *)(puVar12 + 1);
            (this->fields).lookDir.x = (float)(int)uVar10;
            (this->fields).lookDir.y = (float)(int)((ulonglong)uVar10 >> 0x20);
            (this->fields).lookDir.z = fVar7;
            return;
          }
        }
      }
    }
  }
  func_?(0);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Vector3 GetPosition(Single) */

Vector3 * Assembly-CSharp.dll::AdvancedGhostBehaviour+NetworkedValues::
          AdvancedGhostBehaviour_NetworkedValues_GetPosition
                    (Vector3 *__return_storage_ptr__,AdvancedGhostBehaviour_NetworkedValues *this,
                    float delta,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Func_5_Int32_Single_Single_Object_UnityEngine_Vector3_ *)(this->fields).patrolPattern;
  WaitForTicks::WaitForTicks_GetEnvironmentTick((int)(delta * _UNK_?),(MethodInfo *)0x0);
  pAVar1 = (this->fields).ghostBehaviour;
  if (pAVar1 != (AdvancedGhostBehaviour *)0x0) {
    iVar2 = (pAVar1->fields).speed.currentCryptoKey;
    AStack_3 = (pAVar1->fields).speed.hiddenValue;
    pBVar4 = (pAVar1->fields).speed.hiddenValueOld;
    fVar5 = (pAVar1->fields).speed.fakeValue;
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    }
    value.hiddenValue = AStack_3;
    value.currentCryptoKey = iVar2;
    value.hiddenValueOld = pBVar4;
    value.fakeValue = fVar5;
    value.inited = (pAVar1->fields).speed.inited;
    value._17_3_ = *(undefined3 *)&(pAVar1->fields).speed.field_0x11;
    fVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
            ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
    pAVar1 = (this->fields).ghostBehaviour;
    if (pAVar1 != (AdvancedGhostBehaviour *)0x0) {
      pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)pAVar1,(MethodInfo *)0x0);
      if (pTVar6 != (Transform *)0x0) {
        arg1 = &UNK_?;
        pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                           (pTVar6,(MethodInfo *)0x0);
        if (this_00 != (Func_5_Int32_Single_Single_Object_UnityEngine_Vector3_ *)0x0) {
          pVVar7 = System.Core.dll::System::Func`5[Int32,Single,Single,Object,UnityEngine::Vector3]
                   ::Func_5_Int32_Single_Single_Object_UnityEngine_Vector3__Invoke
                             ((Vector3 *)&AStack_3,this_00,(int32_t)arg1,fVar5,
                              (float)
                              MethodInfo__System__Func<int,_float,_float,_UnityEngine::Transform,_UnityEngine::Vector3>__Invoke_int__float__float__UnityEngine__Transform_
                              ,(Object *)pTVar6,
                              MethodInfo__System__Func<int,_float,_float,_UnityEngine::Transform,_UnityEngine::Vector3>__Invoke_int__float__float__UnityEngine__Transform_
                             );
          fVar5 = pVVar7->y;
          pvVar8 = (void *)pVVar7->z;
          pTVar6->klass = (Transform__Class *)pVVar7->x;
          pTVar6->monitor = (MonitorData *)fVar5;
          (pTVar6->fields)._._.m_CachedPtr = pvVar8;
          return (Vector3 *)pTVar6;
        }
      }
    }
  }
  func_?(0);
  pcVar9 = (code *)swi(3);
  pVVar7 = (Vector3 *)(*pcVar9)();
  return pVVar7;
}


/* Single GetX(Single, Single) */

float Assembly-CSharp.dll::AdvancedGhostBehaviour+NetworkedValues::
      AdvancedGhostBehaviour_NetworkedValues_GetX
                (AdvancedGhostBehaviour_NetworkedValues *this,float serverTimeWithSpeedFactor,
                float radius,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
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
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  dVar1 = (double)CONCAT44(serverTimeNormalizedToPeriod._0_4_,in_stack_2);
  dVar3 = _UNK_?;
  if ((_UNK_? < dVar1) && ((this->fields).didMeasure == 0)) {
    iStack_4 = WaitForTicks::WaitForTicks_Diff((this->fields).prevServertime,(MethodInfo *)0x0);
    message = (Object *)func_?(TypeInfo__System__Int32,&iStack_4);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log(message,(MethodInfo *)0x0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pFVar1 = (Func_5_Int32_Single_Single_Object_UnityEngine_Vector3_ *)(this->fields).patrolPattern;
  iVar2 = WaitForTicks::WaitForTicks_GetEnvironmentTick(0,(MethodInfo *)0x0);
  pAVar3 = (this->fields).ghostBehaviour;
  if (pAVar3 != (AdvancedGhostBehaviour *)0x0) {
    iVar4 = (pAVar3->fields).speed.currentCryptoKey;
    AVar5 = (pAVar3->fields).speed.hiddenValue;
    pBVar6 = (pAVar3->fields).speed.hiddenValueOld;
    fVar7 = (pAVar3->fields).speed.fakeValue;
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    }
    value_00.hiddenValue = AVar5;
    value_00.currentCryptoKey = iVar4;
    value_00.hiddenValueOld = pBVar6;
    value_00.fakeValue = fVar7;
    value_00.inited = (pAVar3->fields).speed.inited;
    value_00._17_3_ = *(undefined3 *)&(pAVar3->fields).speed.field_0x11;
    fVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
             ObscuredFloat_op_Implicit_1(value_00,(MethodInfo *)0x0);
    pAVar3 = (this->fields).ghostBehaviour;
    if (pAVar3 != (AdvancedGhostBehaviour *)0x0) {
      fVar8 = (pAVar3->fields).radius;
      pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)pAVar3,(MethodInfo *)0x0);
      if (pTVar9 != (Transform *)0x0) {
        pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                           (pTVar9,(MethodInfo *)0x0);
        if (pFVar1 != (Func_5_Int32_Single_Single_Object_UnityEngine_Vector3_ *)0x0) {
          pVVar10 = System.Core.dll::System::Func`5[Int32,Single,Single,Object,UnityEngine::Vector3]
                   ::Func_5_Int32_Single_Single_Object_UnityEngine_Vector3__Invoke
                             ((Vector3 *)&stack0xffffffd4,pFVar1,iVar2,fVar7,fVar8,(Object *)pTVar9
                              ,
                              MethodInfo__System__Func<int,_float,_float,_UnityEngine::Transform,_UnityEngine::Vector3>__Invoke_int__float__float__UnityEngine__Transform_
                             );
          uVar11._0_4_ = pVVar10->x;
          uVar11._4_4_ = pVVar10->y;
          fVar7 = pVVar10->z;
          (this->fields).nextPosition.x = (float)(undefined4)uVar11;
          (this->fields).nextPosition.y = (float)uVar11._4_4_;
          (this->fields).nextPosition.z = fVar7;
          iVar2 = WaitForTicks::WaitForTicks_GetEnvironmentTick
                            ((undefined4)uVar11,(MethodInfo *)uVar11._4_4_);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pAVar3 = (this->fields).ghostBehaviour;
          fVar8 = (this->fields).minLookDeltaOffset;
          if (pAVar3 != (AdvancedGhostBehaviour *)0x0) {
            iVar4 = (pAVar3->fields).speed.currentCryptoKey;
            AVar5 = (pAVar3->fields).speed.hiddenValue;
            pBVar6 = (pAVar3->fields).speed.hiddenValueOld;
            fVar12 = (pAVar3->fields).speed.fakeValue;
            if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).
                        Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started ==
                0)) {
              func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
            }
            value.hiddenValue = AVar5;
            value.currentCryptoKey = iVar4;
            value.hiddenValueOld = pBVar6;
            value.fakeValue = fVar12;
            value.inited = (pAVar3->fields).speed.inited;
            value._17_3_ = *(undefined3 *)&(pAVar3->fields).speed.field_0x11;
            fVar12 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                     ObscuredFloat::ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
            pAVar3 = (this->fields).ghostBehaviour;
            pFVar1 = (Func_5_Int32_Single_Single_Object_UnityEngine_Vector3_ *)
                     (this->fields).patrolPattern;
            if (pAVar3 != (AdvancedGhostBehaviour *)0x0) {
              arg2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                     ObscuredFloat::ObscuredFloat_op_Implicit_1
                               ((pAVar3->fields).speed,(MethodInfo *)0x0);
              pAVar3 = (this->fields).ghostBehaviour;
              if (pAVar3 != (AdvancedGhostBehaviour *)0x0) {
                arg3 = (pAVar3->fields).radius;
                pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_1_get_transform((Component_1 *)pAVar3,(MethodInfo *)0x0);
                if (pTVar9 != (Transform *)0x0) {
                  pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                                     (pTVar9,(MethodInfo *)0x0);
                  if (pFVar1 != (Func_5_Int32_Single_Single_Object_UnityEngine_Vector3_ *)0x0) {
                    pVVar10 = System.Core.dll::System::Func`5[Int32,Single,Single,Object,UnityEngine
                             ::Vector3]::
                             Func_5_Int32_Single_Single_Object_UnityEngine_Vector3__Invoke
                                       ((Vector3 *)&stack0xffffffc8,pFVar1,
                                        iVar2 - (int)((1.0 / fVar12) * fVar8 * _UNK_?),arg2,
                                        arg3,(Object *)pTVar9,
                                        MethodInfo__System__Func<int,_float,_float,_UnityEngine::Transform,_UnityEngine::Vector3>__Invoke_int__float__float__UnityEngine__Transform_
                                       );
                    a = *pVVar10;
                    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr &
                         0x2000000) != 0) &&
                       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                      func_?();
                    }
                    b.z = fVar7;
                    b.x = (float)(int)uVar11;
                    b.y = (float)(int)((ulonglong)uVar11 >> 0x20);
                    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                              ((Vector3 *)&stack0xffffffc8,a,b,(MethodInfo *)0x0);
                    puVar13 = (undefined8 *)func_?();
                    uVar11 = *puVar13;
                    fVar7 = *(float *)(puVar13 + 1);
                    (this->fields).lookDir.x = (float)(int)uVar11;
                    (this->fields).lookDir.y = (float)(int)((ulonglong)uVar11 >> 0x20);
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
  func_?(0);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* AdvancedGhostBehaviour+NetworkedValues(AdvancedGhostBehaviour) */

void Assembly-CSharp.dll::AdvancedGhostBehaviour+NetworkedValues::
     AdvancedGhostBehaviour_NetworkedValues__ctor
               (AdvancedGhostBehaviour_NetworkedValues *this,AdvancedGhostBehaviour *ghostBehaviour,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).minLookDeltaOffset = 0.1;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  (this->fields).ghostBehaviour = ghostBehaviour;
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(
                           TypeInfo__System__Func<int,_float,_float,_UnityEngine::Transform,_UnityEngine::Vector3>
                           );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,
             MethodInfo__AdvancedGhostBehaviour__NetworkedValues__EaseInEaseOutBackAndForward_int__float__float__UnityEngine__Transform_
             ,
             MethodInfo__System__Func<int,_float,_float,_UnityEngine::Transform,_UnityEngine::Vector3>__Func_System__Object__void__
            );
  (this->fields).patrolPattern =
       (Func_5_Int32_Single_Single_UnityEngine_Transform_UnityEngine_Vector3_ *)this_00;
  AdvancedGhostBehaviour_NetworkedValues_Update(this,(MethodInfo *)0x0);
  return;
}


/* Vector3 get_SyncPosition() */

Vector3 * Assembly-CSharp.dll::AdvancedGhostBehaviour+NetworkedValues::
          AdvancedGhostBehaviour_NetworkedValues_get_SyncPosition
                    (Vector3 *__return_storage_ptr__,AdvancedGhostBehaviour_NetworkedValues *this,
                    MethodInfo *method)

{
  fVar1 = (this->fields).nextPosition.y;
  fVar2 = (this->fields).nextPosition.z;
  __return_storage_ptr__->x = (this->fields).nextPosition.x;
  __return_storage_ptr__->y = fVar1;
  __return_storage_ptr__->z = fVar2;
  return __return_storage_ptr__;
}

