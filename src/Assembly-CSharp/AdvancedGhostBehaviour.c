
/* Void Awake() */

void Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour_Awake
               (AdvancedGhostBehaviour *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  pOVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
           ObscuredFloat_op_Implicit(&OStack_2,10.0,(MethodInfo *)0x0);
  AVar3 = pOVar1->hiddenValue;
  pBVar4 = pOVar1->hiddenValueOld;
  fVar5 = pOVar1->fakeValue;
  bVar6 = pOVar1->inited;
  uVar7 = *(undefined3 *)&pOVar1->field_0x11;
  (this->fields).speed.currentCryptoKey = pOVar1->currentCryptoKey;
  (this->fields).speed.hiddenValue = AVar3;
  (this->fields).speed.hiddenValueOld = pBVar4;
  (this->fields).speed.fakeValue = fVar5;
  (this->fields).speed.inited = bVar6;
  *(undefined3 *)&(this->fields).speed.field_0x11 = uVar7;
  return;
}


/* Void DoRespawn() */

void Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour_DoRespawn
               (AdvancedGhostBehaviour *this,MethodInfo *method)

{
  if ((this->fields).clearEffectsBecauseOfReset != 0) {
    this_00 = (this->fields).GhostVisualization;
    if (this_00 == (AdvancedGhostVisualizaton *)0x0) goto code_?;
    AdvancedGhostVisualizaton::AdvancedGhostVisualizaton_PlayEffect
              (this_00,AdvancedGhostVisualizaton_Effect__Enum_None,0.0,(MethodInfo *)0x0);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
            ((Component_1 *)this,(MethodInfo *)0x0);
  pAVar1 = (this->fields).networkedValues;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  if (pAVar1 != (AdvancedGhostBehaviour_NetworkedValues *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    this_01 = (Func_5_Int32_Single_Single_Object_UnityEngine_Vector3_ *)
              (pAVar1->fields).patrolPattern;
    this_03 = (Transform *)0x0;
    puStack_3 = (undefined *)
                 WaitForTicks::WaitForTicks_GetEnvironmentTick
                           ((int)((float)((uint)fVar2 ^ _UNK_?) * _UNK_?),
                            (MethodInfo *)0x0);
    pAVar4 = (pAVar1->fields).ghostBehaviour;
    if (pAVar4 != (AdvancedGhostBehaviour *)0x0) {
      iVar5 = (pAVar4->fields).speed.currentCryptoKey;
      AVar6 = (pAVar4->fields).speed.hiddenValue;
      pBVar7 = (pAVar4->fields).speed.hiddenValueOld;
      fVar2 = (pAVar4->fields).speed.fakeValue;
      if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
                  methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
        func_?();
      }
      value.hiddenValue = AVar6;
      value.currentCryptoKey = iVar5;
      value.hiddenValueOld = pBVar7;
      value.fakeValue = fVar2;
      value.inited = (pAVar4->fields).speed.inited;
      value._17_3_ = *(undefined3 *)&(pAVar4->fields).speed.field_0x11;
      fVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
               ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
      pAVar4 = (pAVar1->fields).ghostBehaviour;
      if (pAVar4 != (AdvancedGhostBehaviour *)0x0) {
        fVar8 = (pAVar4->fields).radius;
        pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)pAVar4,(MethodInfo *)0x0);
        if (pTVar9 != (Transform *)0x0) {
          pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                             (pTVar9,(MethodInfo *)0x0);
          if (this_01 != (Func_5_Int32_Single_Single_Object_UnityEngine_Vector3_ *)0x0) {
            pVVar10 = System.Core.dll::System::Func`5[Int32,Single,Single,Object,UnityEngine::
                     Vector3]::Func_5_Int32_Single_Single_Object_UnityEngine_Vector3__Invoke
                               ((Vector3 *)&stack0xffffffe0,this_01,(int32_t)puStack_3,fVar2,fVar8
                                ,(Object *)pTVar9,
                                MethodInfo__System__Func<int,_float,_float,_UnityEngine::Transform,_UnityEngine::Vector3>__Invoke_int__float__float__UnityEngine__Transform_
                               );
            if (this_03 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                        (this_03,*pVVar10,(MethodInfo *)0x0);
              pAVar1 = (this->fields).networkedValues;
              if (pAVar1 != (AdvancedGhostBehaviour_NetworkedValues *)0x0) {
                pVVar10 = &(pAVar1->fields).nextPosition;
                fVar8 = pVVar10->y;
                fVar2 = (pAVar1->fields).nextPosition.z;
                targetPos = *pVVar10;
                this_02 = (this->fields).advancedGhostMotor;
                (this->fields).nextPosition.x = pVVar10->x;
                (this->fields).nextPosition.y = fVar8;
                (this->fields).nextPosition.z = fVar2;
                pVVar10 = AdvancedGhostBehaviour_GetMoveVector
                                   ((Vector3 *)&stack0xffffffe0,this,targetPos,(MethodInfo *)0x0);
                if (this_02 != (AdvancedGhostMotor *)0x0) {
                  AdvancedGhostMotor::AdvancedGhostMotor_Reset(this_02,*pVVar10,(MethodInfo *)0x0);
                  (this->fields).respawn = 0;
                  (this->fields).clearEffectsBecauseOfReset = 0;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void EditModeUpdateCulling() */

void Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour_EditModeUpdateCulling
               (AdvancedGhostBehaviour *this,MethodInfo *method)

{
  this_00 = (this->fields).cullingSubscriberBase;
  this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if (this_01 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xfffffff0,this_01,(MethodInfo *)0x0);
    if (this_00 != (CullingSubscriberBase *)0x0) {
      CullingSubscriberBase::CullingSubscriberBase_set_Position(this_00,*pVVar1,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void FixedUpdate() */

void Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour_FixedUpdate
               (AdvancedGhostBehaviour *this,MethodInfo *method)

{
  pAVar1 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar2 = (this->fields).advancedGhostMotor;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pAVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    return;
  }
  pVVar4 = AdvancedGhostBehaviour_GetMoveVector
                     ((Vector3 *)&stack0xfffffff0,this,(this->fields).nextPosition,(MethodInfo *)0x0
                     );
  pAVar2 = (this->fields).advancedGhostMotor;
  if (pAVar2 != (AdvancedGhostMotor *)0x0) {
    uVar5 = pVVar4->x;
    uVar6 = pVVar4->y;
    this = (AdvancedGhostBehaviour *)pVVar4->z;
    fVar7 = (float)uVar6;
    value.x = (float)uVar5;
    value = (Vector3)CONCAT84(uVar8,value.x);
    AdvancedGhostMotor::AdvancedGhostMotor_set_MoveDirection(pAVar2,value,(MethodInfo *)0x0);
    pAVar2 = (pAVar1->fields).advancedGhostMotor;
    if (pAVar2 != (AdvancedGhostMotor *)0x0) {
      AdvancedGhostMotor::AdvancedGhostMotor_FixedUpdateFunction(pAVar2,(MethodInfo *)0x0);
      this_00 = (pAVar1->fields).GhostVisualization;
      if ((this_00 != (AdvancedGhostVisualizaton *)0x0) &&
         (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                              ((Component_1 *)this_00,(MethodInfo *)0x0),
         this_01 != (GameObject *)0x0)) {
        bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                GameObject_get_activeInHierarchy(this_01,(MethodInfo *)0x0);
        if (bVar3 != 0) {
          pAVar2 = (pAVar1->fields).advancedGhostMotor;
          if (pAVar2 == (AdvancedGhostMotor *)0x0) goto code_?;
          AdvancedGhostMotor::AdvancedGhostMotor_FixedUpdateRotation(pAVar2,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Vector3 GetMoveVector(Vector3) */

Vector3 * Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour_GetMoveVector
                    (Vector3 *__return_storage_ptr__,AdvancedGhostBehaviour *this,Vector3 targetPos,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                     ((Vector3 *)&stack0xffffffdc,(MethodInfo *)0x0);
  fVar2 = targetPos.z;
  a_05.y = targetPos.y;
  a_05.x = targetPos.x;
  a_05.z = targetPos.z;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                     ((Vector3 *)&stack0xffffffdc,a_05,*pVVar1,(MethodInfo *)0x0);
  uStack_3._0_4_ = pVVar1->x;
  uStack_3._4_4_ = pVVar1->y;
  uVar4._0_4_ = pVVar1->z;
  pCVar5 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_cyan
                     ((Color *)&stack0xffffffc0,(MethodInfo *)0x0);
  fVar6 = pCVar5->r;
  fVar7 = pCVar5->g;
  fVar8 = pCVar5->b;
  fVar9 = pCVar5->a;
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?();
  }
  start_03.y = targetPos.y;
  start_03.x = targetPos.x;
  start_03.z = fVar2;
  end_03.z = (float)uVar4;
  end_03.x = (float)(undefined4)uStack_3;
  end_03.y = uStack_3._4_4_;
  color.g = fVar7;
  color.r = fVar6;
  color.b = fVar8;
  color.a = fVar9;
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_DrawLine
            (start_03,end_03,color,0.3,(MethodInfo *)0x0);
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_right
                     ((Vector3 *)&stack0xffffffdc,(MethodInfo *)0x0);
  uVar10 = pVVar1->x;
  uVar11 = pVVar1->y;
  a.y = (float)uVar11;
  a.x = (float)uVar10;
  targetPos.z = pVVar1->z;
  uStack_3 = CONCAT44(&UNK_?,(undefined4)uStack_3);
  a.z = fVar2;
  targetPos.x = (float)uVar10;
  targetPos.y = (float)uVar11;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                     ((Vector3 *)&stack0xffffffdc,a,*pVVar1,(MethodInfo *)0x0);
  uStack_3._0_4_ = pVVar1->x;
  uStack_3._4_4_ = pVVar1->y;
  uVar4._0_4_ = pVVar1->z;
  targetPos.z = (float)&stack0xffffffc0;
  targetPos.y = (float)&UNK_?;
  pCVar5 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_cyan
                     ((Color *)targetPos.z,(MethodInfo *)0x0);
  fVar6 = targetPos.y;
  targetPos.z = targetPos.x;
  fStack12 = fVar2;
  targetPos.y = (float)&UNK_?;
  start.y = fVar6;
  start.x = targetPos.x;
  start.z = fVar2;
  end.z = (float)uVar4;
  end.x = (float)(undefined4)uStack_3;
  end.y = uStack_3._4_4_;
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_DrawLine
            (start,end,*pCVar5,0.3,(MethodInfo *)0x0);
  pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                     ((Component_1 *)fVar2,(MethodInfo *)0x0);
  if (pTVar13 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       (&VStack_14,pTVar13,(MethodInfo *)0x0);
    uVar4._0_4_ = pVVar1->x;
    fStack_15 = pVVar1->y;
    uStack_3 = CONCAT44(pVVar1->z,(undefined4)uStack_3);
    pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)fVar2,(MethodInfo *)0x0);
    if (pTVar13 != (Transform *)0x0) {
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xffffffc4,pTVar13,(MethodInfo *)0x0);
      VStack_14.y = pVVar1->x;
      VStack_14.z = pVVar1->y;
      fVar6 = pVVar1->z;
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                         ((Vector3 *)&stack0xffffffc4,(MethodInfo *)0x0);
      a_00.z = fVar6;
      a_00.x = VStack_14.y;
      a_00.y = VStack_14.z;
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                         ((Vector3 *)&stack0xffffffc4,a_00,*pVVar1,(MethodInfo *)0x0);
      VStack_14.y = pVVar1->x;
      VStack_14.z = pVVar1->y;
      fVar6 = pVVar1->z;
      pCVar5 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_red
                         ((Color *)&stack0xffffffc0,(MethodInfo *)0x0);
      start_00.z = uStack_3._4_4_;
      start_00.x = (float)uVar4;
      start_00.y = fStack_15;
      end_00.z = fVar6;
      end_00.x = VStack_14.y;
      end_00.y = VStack_14.z;
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_DrawLine
                (start_00,end_00,*pCVar5,0.3,(MethodInfo *)0x0);
      pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)fVar2,(MethodInfo *)0x0);
      if (pTVar13 != (Transform *)0x0) {
        pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           ((Vector3 *)&stack0xffffffc4,pTVar13,(MethodInfo *)0x0);
        VStack_14.y = pVVar1->x;
        VStack_14.z = pVVar1->y;
        uStack_3 = CONCAT44(pVVar1->z,(undefined4)uStack_3);
        pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)fVar2,(MethodInfo *)0x0);
        if (pTVar13 != (Transform *)0x0) {
          pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             ((Vector3 *)&stack0xffffffc4,pTVar13,(MethodInfo *)0x0);
          uVar4._0_4_ = pVVar1->x;
          fStack_15 = pVVar1->y;
          fVar6 = pVVar1->z;
          pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_right
                             ((Vector3 *)&stack0xffffffc4,(MethodInfo *)0x0);
          a_01.z = fVar6;
          a_01.x = (float)uVar4;
          a_01.y = fStack_15;
          pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                             ((Vector3 *)&stack0xffffffc4,a_01,*pVVar1,(MethodInfo *)0x0);
          uVar4._0_4_ = pVVar1->x;
          fStack_15 = pVVar1->y;
          fVar6 = pVVar1->z;
          pCVar5 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_red
                             ((Color *)&stack0xffffffc0,(MethodInfo *)0x0);
          start_01.z = uStack_3._4_4_;
          start_01.x = VStack_14.y;
          start_01.y = VStack_14.z;
          end_01.z = fVar6;
          end_01.x = (float)uVar4;
          end_01.y = fStack_15;
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_DrawLine
                    (start_01,end_01,*pCVar5,0.3,(MethodInfo *)0x0);
          pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                             ((Component_1 *)fVar2,(MethodInfo *)0x0);
          if (pTVar13 != (Transform *)0x0) {
            pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                               ((Vector3 *)&stack0xffffffc4,pTVar13,(MethodInfo *)0x0);
            uVar4._0_4_ = pVVar1->x;
            fStack_15 = pVVar1->y;
            fVar6 = pVVar1->z;
            pCVar5 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_yellow
                               ((Color *)&stack0xffffffc0,(MethodInfo *)0x0);
            start_02.z = fVar6;
            start_02.x = (float)uVar4;
            start_02.y = fStack_15;
            end_02.y = targetPos.y;
            end_02.x = targetPos.x;
            end_02.z = fVar2;
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_DrawLine
                      (start_02,end_02,*pCVar5,0.3,(MethodInfo *)0x0);
            pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                               ((Component_1 *)fVar2,(MethodInfo *)0x0);
            if (pTVar13 != (Transform *)0x0) {
              pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                 ((Vector3 *)&stack0xffffffc4,pTVar13,(MethodInfo *)0x0);
              a_02.y = targetPos.y;
              a_02.x = targetPos.x;
              a_02.z = fVar2;
              pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                                 (&targetPos,a_02,*pVVar1,(MethodInfo *)0x0);
              uVar4._0_4_ = pVVar1->x;
              fStack_15 = pVVar1->y;
              fVar6 = pVVar1->z;
              targetPos.z = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                                      ((MethodInfo *)0x0);
              a_03.z = fVar6;
              a_03.x = (float)uVar4;
              a_03.y = fStack_15;
              pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Division
                                 (&targetPos,a_03,targetPos.z,(MethodInfo *)0x0);
              uVar16 = pVVar1->x;
              uVar17 = pVVar1->y;
              uVar4._0_4_ = pVVar1->z;
              fVar18 = (float10)func_?();
              fVar6 = *(float *)((int)fVar2 + 0x40);
              fVar7 = *(float *)((int)fVar2 + 0x44);
              fVar8 = *(float *)((int)fVar2 + 0x48);
              fVar9 = *(float *)((int)fVar2 + 0x4c);
              uVar19 = *(undefined4 *)((int)fVar2 + 0x50);
              targetPos.z = (float)fVar18;
              if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).
                          Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started
                  == 0)) {
                func_?();
              }
              value.hiddenValue = (ACTkByte4)fVar7;
              value.currentCryptoKey = (int32_t)fVar6;
              value.hiddenValueOld = (Byte__Array *)fVar8;
              value.fakeValue = fVar9;
              value._16_4_ = uVar19;
              fVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                       ObscuredFloat::ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
              uStack_3 = CONCAT44(fVar6,(undefined4)uStack_3);
              if (fVar6 < targetPos.z) {
                puVar20 = (undefined8 *)func_?();
                uVar16 = *(undefined4 *)((int)fVar2 + 0x50);
                uVar4 = *puVar20;
                fVar6 = *(float *)(puVar20 + 1);
                fVar7 = *(float *)((int)fVar2 + 0x40);
                fVar8 = *(float *)((int)fVar2 + 0x44);
                fVar9 = *(float *)((int)fVar2 + 0x48);
                fVar2 = *(float *)((int)fVar2 + 0x4c);
                if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).
                            Equals.methodPtr & 0x2000000) != 0) &&
                   ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started
                    == 0)) {
                  func_?();
                }
                value_00.hiddenValue = (ACTkByte4)fVar8;
                value_00.currentCryptoKey = (int32_t)fVar7;
                value_00.hiddenValueOld = (Byte__Array *)fVar9;
                value_00.fakeValue = fVar2;
                value_00._16_4_ = uVar16;
                targetPos.z = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                              ObscuredFloat::ObscuredFloat_op_Implicit_1(value_00,(MethodInfo *)0x0)
                ;
                if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000)
                     != 0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                  func_?();
                }
                a_04.z = fVar6;
                a_04.x = (float)uVar4;
                a_04.y = fStack_15;
                pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                                   (&targetPos,a_04,targetPos.z,(MethodInfo *)0x0);
                uVar4._0_4_ = pVVar1->z;
                *(undefined8 *)uVar11 = *(undefined8 *)pVVar1;
                *(float *)(uVar11 + 8) = (float)uVar4;
                return (Vector3 *)uVar11;
              }
              *(ulonglong *)uVar11 = CONCAT44(uVar17,uVar16);
              *(float *)(uVar11 + 8) = (float)uVar4;
              return (Vector3 *)uVar11;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar21 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar21)();
  return pVVar1;
}


/* Void Init(MVCubeModelBase, AdvancedGhostMotor, Func`1[Boolean], Int32) */

void Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour_Init
               (AdvancedGhostBehaviour *this,MVCubeModelBase *body,
               AdvancedGhostMotor *advancedGhostMotor,Func_1_Boolean_ *deathCheckFunc,int32_t woID,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                       (pTVar1,(MethodInfo *)0x0);
    (this->fields).transformParent = pTVar1;
    this_00 = (ScaleAnimationBase *)func_?();
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    (this_00->fields)._._._._.m_CachedPtr = (void *)0x4;
    (this_00->fields).originalScale.y = -NAN;
    (this_00->fields).originalScale.z = 1.4013e-42;
    ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,in_stack_2);
    (this_00->fields).state = (int32_t)this;
    this_01 = (OptimizedPerception *)func_?();
    OptimizedPerception::OptimizedPerception__ctor(this_01,(MethodInfo *)0x0);
    (this_00->fields).originalScale.x = (float)this_01;
    fVar3 = (this_00->fields).originalScale.z;
    this_02 = (DeterministicSyncedInterval *)func_?();
    DeterministicSyncedInterval::DeterministicSyncedInterval__ctor
              (this_02,woID,(int32_t)fVar3,(MethodInfo *)0x0);
    (this_00->fields).target = (Transform *)this_02;
    (this->fields).perception = (AdvancedGhostBehaviour_AdvancedGhostPerception *)this_00;
    this_03 = (AdvancedGhostBehaviour_NetworkedValues *)func_?();
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    (this_03->fields).minLookDeltaOffset = 0.1;
    ScaleAnimationBase::ScaleAnimationBase_Play
              ((ScaleAnimationBase *)this_03,0.0,(MethodInfo *)body);
    (this_03->fields).ghostBehaviour = this;
    pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar4,(Object *)this_03,
               MethodInfo__AdvancedGhostBehaviour__NetworkedValues__EaseInEaseOutBackAndForward_int__float__float__UnityEngine__Transform_
               ,
               MethodInfo__System__Func<int,_float,_float,_UnityEngine::Transform,_UnityEngine::Vector3>__Func_System__Object__void__
              );
    (this_03->fields).patrolPattern =
         (Func_5_Int32_Single_Single_UnityEngine_Transform_UnityEngine_Vector3_ *)pUVar4;
    AdvancedGhostBehaviour+NetworkedValues::AdvancedGhostBehaviour_NetworkedValues_Update
              (this_03,(MethodInfo *)0x0);
    (this->fields).networkedValues = this_03;
    fVar5 = (this_03->fields).nextPosition.y;
    fVar3 = (this_03->fields).nextPosition.z;
    (this->fields).nextPosition.x = (this_03->fields).nextPosition.x;
    (this->fields).nextPosition.y = fVar5;
    (this->fields).nextPosition.z = fVar3;
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (pTVar1,(this->fields).nextPosition,(MethodInfo *)0x0);
      bVar6 = cRam_? == '\0';
      (this->fields).advancedGhostMotor = advancedGhostMotor;
      (this->fields).deathCheckFunc = deathCheckFunc;
      if (bVar6) {
        func_?();
        cRam_? = '\x01';
      }
      if (body != (MVCubeModelBase *)0x0) {
        pCVar7 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                           ((DayNightCycle *)body,(MethodInfo *)0x0);
        layer = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                          (StringLiteral_Player,(MethodInfo *)0x0);
        LayerUtil::LayerUtil_SetLayerRecursively_4((GameObject *)pCVar7,layer,(MethodInfo *)0x0);
        pAVar8 = (this->fields).GhostVisualization;
        pCVar7 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                           ((DayNightCycle *)body,(MethodInfo *)0x0);
        if (pCVar7 != (CelestialParam *)0x0) {
          pGVar9 = (GhostBody *)
                   UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_85
                             ((GameObject *)pCVar7,
                              GhostBody_MethodInfo__UnityEngine__GameObject__AddComponent<GhostBody>__
                             );
          if (pAVar8 != (AdvancedGhostVisualizaton *)0x0) {
            (pAVar8->fields).ghostBody = pGVar9;
            pCVar7 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                               ((DayNightCycle *)body,(MethodInfo *)0x0);
            if (pCVar7 != (CelestialParam *)0x0) {
              this_04 = (AdvancedGhostBodyRotateWeapon *)
                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_AddComponent_85
                                  ((GameObject *)pCVar7,
                                   AdvancedGhostBodyRotateWeapon_MethodInfo__UnityEngine__GameObject__AddComponent<AdvancedGhostBodyRotateWeapon>__
                                  );
              pAVar8 = (this->fields).GhostVisualization;
              (this->fields).weapon = this_04;
              if (pAVar8 != (AdvancedGhostVisualizaton *)0x0) {
                pAVar10 = (pAVar8->fields).weaponHitSound;
                if (this_04 != (AdvancedGhostBodyRotateWeapon *)0x0) {
                  if (cRam_? == '\0') {
                    func_?();
                    cRam_? = '\x01';
                  }
                  (this_04->fields).weaponHitSound = pAVar10;
                  a = (body->fields).Changed;
                  pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                            *)func_?();
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                  SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                            (pUVar4,(Object *)this_04,
                             MethodInfo__AdvancedGhostBodyRotateWeapon__body_Changed_CubeModelChangedEventArgs_
                             ,
                             MethodInfo__System__Action<CubeModelChangedEventArgs>__Action_System__Object__void__
                            );
                  pDVar11 = mscorlib.dll::System::Delegate::Delegate_Combine
                                      ((Delegate *)a,(Delegate *)pUVar4,(MethodInfo *)0x0);
                  pDVar12 = (Delegate *)0x0;
                  if (pDVar11 != (Delegate *)0x0) {
                    if ((Action_1_CubeModelChangedEventArgs___Class *)pDVar11->klass ==
                        TypeInfo__System__Action<CubeModelChangedEventArgs>) {
                      pDVar12 = pDVar11;
                    }
                    if (pDVar12 == (Delegate *)0x0) goto code_?;
                  }
                  _UNK_? = pDVar12;
                  AdvancedGhostBodyRotateWeapon::AdvancedGhostBodyRotateWeapon_SetupWeaponCollision
                            (this_04,(MethodInfo *)0x0);
                  AdvancedGhostBehaviour_SetInitialState(this,(MethodInfo *)0x0);
                  if (cRam_? == '\0') {
                    func_?();
                    cRam_? = '\x01';
                  }
                  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_1_get_transform((Component_1 *)this,(MethodInfo *)0x0);
                  if (pTVar1 != (Transform *)0x0) {
                    pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_get_position
                                        ((Vector3 *)&stack0xffffffe4,pTVar1,(MethodInfo *)0x0);
                    position = *pVVar13;
                    pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                              *)func_?();
                    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                    SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                              (pUVar4,(Object *)this,
                               MethodInfo__AdvancedGhostBehaviour__OnStateChange_UnityEngine__CullingGroupEvent_
                               ,
                               MethodInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>__UnityAction_System__Object__void__
                              );
                    this_05 = (CullingSubscriberBase *)func_?();
                    CullingSubscriberBase::CullingSubscriberBase__ctor_2
                              (this_05,4.0,position,
                               (UnityAction_1_UnityEngine_CullingGroupEvent_ *)pUVar4,
                               (MethodInfo *)0x0);
                    (this->fields).cullingSubscriberBase = this_05;
                    if (this_05 != (CullingSubscriberBase *)0x0) {
                      LockCursorManager3DMode::LockCursorManager3DMode_set_OnCursorLockChanged
                                ((LockCursorManager3DMode *)this_05,(Action_1_Boolean_ *)0x3,
                                 (MethodInfo *)0x0);
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
  }
  func_?();
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void InitBody(MVCubeModelBase) */

void Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour_InitBody
               (AdvancedGhostBehaviour *this,MVCubeModelBase *body,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (body != (MVCubeModelBase *)0x0) {
    pCVar1 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                       ((DayNightCycle *)body,(MethodInfo *)0x0);
    layer = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                      (StringLiteral_Player,(MethodInfo *)0x0);
    LayerUtil::LayerUtil_SetLayerRecursively_4((GameObject *)pCVar1,layer,(MethodInfo *)0x0);
    pAVar2 = (this->fields).GhostVisualization;
    pCVar1 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                       ((DayNightCycle *)body,(MethodInfo *)0x0);
    if (pCVar1 != (CelestialParam *)0x0) {
      pGVar3 = (GhostBody *)
               UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_85
                         ((GameObject *)pCVar1,
                          GhostBody_MethodInfo__UnityEngine__GameObject__AddComponent<GhostBody>__);
      if (pAVar2 != (AdvancedGhostVisualizaton *)0x0) {
        (pAVar2->fields).ghostBody = pGVar3;
        pCVar1 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                           ((DayNightCycle *)body,(MethodInfo *)0x0);
        if (pCVar1 != (CelestialParam *)0x0) {
          this_00 = (AdvancedGhostBodyRotateWeapon *)
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_85
                              ((GameObject *)pCVar1,
                               AdvancedGhostBodyRotateWeapon_MethodInfo__UnityEngine__GameObject__AddComponent<AdvancedGhostBodyRotateWeapon>__
                              );
          pAVar2 = (this->fields).GhostVisualization;
          (this->fields).weapon = this_00;
          if ((pAVar2 != (AdvancedGhostVisualizaton *)0x0) &&
             (pAVar4 = (pAVar2->fields).weaponHitSound,
             this_00 != (AdvancedGhostBodyRotateWeapon *)0x0)) {
            if (cRam_? == '\0') {
              pAStack5 = (Action_1_CubeModelChangedEventArgs___Class *)_UNK_?;
              func_?();
              cRam_? = '\x01';
            }
            (this_00->fields).weaponHitSound = pAVar4;
            pAStack5 = TypeInfo__System__Action<CubeModelChangedEventArgs>;
            pAVar6 = (body->fields).Changed;
            this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                       *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (this_01,(Object *)this_00,
                       MethodInfo__AdvancedGhostBodyRotateWeapon__body_Changed_CubeModelChangedEventArgs_
                       ,
                       MethodInfo__System__Action<CubeModelChangedEventArgs>__Action_System__Object__void__
                      );
            pAVar7 = (Action_1_CubeModelChangedEventArgs_ *)
                     mscorlib.dll::System::Delegate::Delegate_Combine
                               ((Delegate *)pAVar6,(Delegate *)this_01,(MethodInfo *)0x0);
            pAVar6 = (Action_1_CubeModelChangedEventArgs_ *)0x0;
            if (pAVar7 == (Action_1_CubeModelChangedEventArgs_ *)0x0) {
code_?:
              (body->fields).Changed = pAVar6;
              AdvancedGhostBodyRotateWeapon::AdvancedGhostBodyRotateWeapon_SetupWeaponCollision
                        (this_00,(MethodInfo *)0x0);
              return;
            }
            if (pAVar7->klass == TypeInfo__System__Action<CubeModelChangedEventArgs>) {
              pAVar6 = pAVar7;
            }
            if (pAVar6 != (Action_1_CubeModelChangedEventArgs_ *)0x0) goto code_?;
            goto code_?;
          }
        }
      }
    }
  }
  pAStack5 = (Action_1_CubeModelChangedEventArgs___Class *)0x0;
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour_OnDestroy
               (AdvancedGhostBehaviour *this,MethodInfo *method)

{
  this_00 = (this->fields).cullingSubscriberBase;
  if (this_00 != (CullingSubscriberBase *)0x0) {
    CullingSubscriberBase::CullingSubscriberBase_Destroy(this_00,(MethodInfo *)0x0);
    (this->fields).cullingSubscriberBase = (CullingSubscriberBase *)0x0;
  }
  return;
}


/* Void OnStateChange(CullingGroupEvent) */

void Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour_OnStateChange
               (AdvancedGhostBehaviour *this,CullingGroupEvent cullingGroupEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = cullingGroupEvent._4_4_;
  iVar2 = cullingGroupEvent.m_Index;
  this_00 = (this->fields).cullingSubscriberBase;
  (this->fields).behaviourOnlyEnabled = 0;
  (this->fields).allVisible = 0;
  if (this_00 != (CullingSubscriberBase *)0x0) {
    distanceBandIndex =
         mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
         Serialization::JsonProperty]::
         Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                   ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                    (MethodInfo *)0x0);
    if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
      func_?(TypeInfo__CullingApiWrapper);
    }
    uVar3 = cullingGroupEvent._4_4_;
    cullingGroupEvent.m_PrevState = (uint8_t)uVar1;
    cullingGroupEvent.m_ThisState = SUB41(uVar1,1);
    cullingGroupEvent._6_2_ = SUB42(uVar1,2);
    cullingGroupEvent_00.m_PrevState = cullingGroupEvent.m_PrevState;
    cullingGroupEvent_00.m_ThisState = cullingGroupEvent.m_ThisState;
    cullingGroupEvent_00._6_2_ = cullingGroupEvent._6_2_;
    cullingGroupEvent_00.m_Index = iVar2;
    cullingGroupEvent._4_4_ = uVar3;
    bVar4 = CullingApiWrapper::CullingApiWrapper_Visible
                      (cullingGroupEvent_00,(int32_t)distanceBandIndex,(MethodInfo *)0x0);
    (this->fields).allVisible = bVar4;
    cullingGroupEvent_01.m_PrevState = cullingGroupEvent.m_PrevState;
    cullingGroupEvent_01.m_ThisState = cullingGroupEvent.m_ThisState;
    cullingGroupEvent_01._6_2_ = cullingGroupEvent._6_2_;
    cullingGroupEvent_01.m_Index = cullingGroupEvent.m_Index;
    bVar4 = CullingApiWrapper::CullingApiWrapper_Visible(cullingGroupEvent_01,3,(MethodInfo *)0x0);
    (this->fields).behaviourOnlyEnabled = bVar4;
    iVar5 = func_?(&cullingGroupEvent,0);
    if (iVar5 < 4) {
      (this->fields).behaviourOnlyEnabled = 1;
    }
    cullingGroupEvent._4_4_ = &UNK_?;
    AdvancedGhostBehaviour_SetVisible(this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void ReceivedDamage() */

void Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour_ReceivedDamage
               (AdvancedGhostBehaviour *this,MethodInfo *method)

{
  this_02 = (this->fields).GhostVisualization;
  if (this_02 == (AdvancedGhostVisualizaton *)0x0) {
    func_?(0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                      ((Component_1 *)this_02,(MethodInfo *)0x0);
  if (this_03 != (GameObject *)0x0) {
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                      (this_03,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return;
    }
    this_00 = (this_02->fields).receiveDamage;
    if (this_00 != (AudioSource *)0x0) {
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1
                (this_00,(MethodInfo *)0x0);
      this_01 = (this_02->fields).blinker;
      if (this_01 != (AdvancedGhostBlinker *)0x0) {
        BlinkerBase::BlinkerBase_StartBlinking
                  ((BlinkerBase *)this_01,BlinkType__Enum_Damage,1.3,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void ReceivedHealing() */

void Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour_ReceivedHealing
               (AdvancedGhostBehaviour *this,MethodInfo *method)

{
  this_01 = (this->fields).GhostVisualization;
  if (this_01 == (AdvancedGhostVisualizaton *)0x0) {
    func_?(0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                      ((Component_1 *)this_01,(MethodInfo *)0x0);
  if (this_02 != (GameObject *)0x0) {
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                      (this_02,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      this_00 = (this_01->fields).blinker;
      if (this_00 == (AdvancedGhostBlinker *)0x0) goto code_?;
      BlinkerBase::BlinkerBase_StartBlinking
                ((BlinkerBase *)this_00,BlinkType__Enum_Healing,1.3,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour_Reset
               (AdvancedGhostBehaviour *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).respawn = 1;
  handle = TypeRef__AdvancedGhostBehaviour__Idle;
  (this->fields).clearEffectsBecauseOfReset = 1;
  if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Type->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Type);
  }
  type = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                   ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  AdvancedGhostBehaviour_SetCurrentState(this,type,(MethodInfo *)0x0);
  AdvancedGhostBehaviour_SetVisible(this,(MethodInfo *)0x0);
  (this->fields).lives = (this->fields).maxLives;
  return;
}


/* Void SetCurrentState(Type) */

void Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour_SetCurrentState
               (AdvancedGhostBehaviour *this,Type *type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).currentState;
  if (pAVar1 != (AdvancedGhostBehaviour_IGhostBehaviourState *)0x0) {
    func_?(2,TypeInfo__AdvancedGhostBehaviour__IGhostBehaviourState,pAVar1,this);
  }
  pOVar2 = mscorlib.dll::System::Activator::Activator_CreateInstance(type,(MethodInfo *)0x0);
  pAVar3 = TypeInfo__AdvancedGhostBehaviour__IGhostBehaviourState;
  if (pOVar2 == (Object *)0x0) {
    func_?(0);
  }
  else {
    pAVar1 = (AdvancedGhostBehaviour_IGhostBehaviourState *)
             func_?(pOVar2,TypeInfo__AdvancedGhostBehaviour__IGhostBehaviourState);
    if (pAVar1 != (AdvancedGhostBehaviour_IGhostBehaviourState *)0x0) {
      func_?(0,TypeInfo__AdvancedGhostBehaviour__IGhostBehaviourState,pAVar1,this);
      (this->fields).currentState = pAVar1;
      return;
    }
  }
  func_?(pOVar2,pAVar3);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetDesiredPosition(Vector3) */

void Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour_SetDesiredPosition
               (AdvancedGhostBehaviour *this,Vector3 position,MethodInfo *method)

{
  (this->fields).nextPosition.x = position.x;
  (this->fields).nextPosition.y = position.y;
  (this->fields).nextPosition.z = position.z;
  return;
}


/* Void SetGameMode(Boolean) */

void Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour_SetGameMode
               (AdvancedGhostBehaviour *this,bool isPlayMode,MethodInfo *method)

{
  if (isPlayMode == 0) {
    (this->fields).wantsVisible = 0;
    AdvancedGhostBehaviour_SetVisible(this,(MethodInfo *)0x0);
    return;
  }
  AdvancedGhostBehaviour_SetInitialState(this,(MethodInfo *)0x0);
  pAVar1 = (this->fields).perception;
  if ((pAVar1 != (AdvancedGhostBehaviour_AdvancedGhostPerception *)0x0) &&
     (this_00 = (pAVar1->fields).syncedInterval, this_00 != (DeterministicSyncedInterval *)0x0)) {
    DeterministicSyncedInterval::DeterministicSyncedInterval_Update(this_00,(MethodInfo *)0x0);
    (this->fields).wantsVisible = 1;
    AdvancedGhostBehaviour_SetVisible(this,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetInitialState() */

void Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour_SetInitialState
               (AdvancedGhostBehaviour *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).lives != 0) {
    this_00 = (this->fields).deathCheckFunc;
    if (this_00 == (Func_1_Boolean_ *)0x0) {
      func_?(0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar2 = System.Core.dll::System::Func`1[Boolean]::Func_1_Boolean__Invoke
                      (this_00,MethodInfo__System__Func<bool>__Invoke__);
    if (bVar2 == 0) {
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      (this->fields).respawn = 1;
      pIVar3 = TypeRef__AdvancedGhostBehaviour__Idle;
      (this->fields).clearEffectsBecauseOfReset = 1;
      if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Type->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__Type);
      }
      pTVar4 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                         ((RuntimeTypeHandle)pIVar3,(MethodInfo *)0x0);
      AdvancedGhostBehaviour_SetCurrentState(this,pTVar4,(MethodInfo *)0x0);
      AdvancedGhostBehaviour_SetVisible(this,(MethodInfo *)0x0);
      (this->fields).lives = (this->fields).maxLives;
      return;
    }
  }
  pIVar3 = TypeRef__AdvancedGhostBehaviour__Dead;
  if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Type->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Type);
  }
  pTVar4 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                     ((RuntimeTypeHandle)pIVar3,(MethodInfo *)0x0);
  AdvancedGhostBehaviour_SetCurrentState(this,pTVar4,(MethodInfo *)0x0);
  return;
}


/* Void SetVisible() */

void Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour_SetVisible
               (AdvancedGhostBehaviour *this,MethodInfo *method)

{
  this_02 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).lives == 0) {
    bVar1 = 1;
  }
  else {
    this_00 = (this->fields).deathCheckFunc;
    if (this_00 == (Func_1_Boolean_ *)0x0) goto code_?;
    bVar1 = System.Core.dll::System::Func`1[Boolean]::Func_1_Boolean__Invoke
                      (this_00,MethodInfo__System__Func<bool>__Invoke__);
  }
  this_01 = (this->fields).GhostVisualization;
  if (this_01 != (AdvancedGhostVisualizaton *)0x0) {
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this_01,(MethodInfo *)0x0);
    if (((this->fields).allVisible == 0) || ((this->fields).wantsVisible == 0)) {
      this._0_1_ = 0;
    }
    else {
      this._0_1_ = bVar1 ^ 1;
    }
    if (pGVar2 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,(byte)this,(MethodInfo *)0x0);
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this_02,(MethodInfo *)0x0);
      value = 0;
      if ((this_02->fields).behaviourOnlyEnabled != 0) {
        value = bVar1 ^ 1;
      }
      if (pGVar2 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetupCulling() */

void Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour_SetupCulling
               (AdvancedGhostBehaviour *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       (&VStack_2,this_00,(MethodInfo *)0x0);
    uStack_3._0_4_ = pVVar1->x;
    uStack_3._4_4_ = pVVar1->y;
    fVar4 = pVVar1->z;
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this,
               MethodInfo__AdvancedGhostBehaviour__OnStateChange_UnityEngine__CullingGroupEvent_,
               MethodInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>__UnityAction_System__Object__void__
              );
    this_02 = (CullingSubscriberBase *)func_?();
    position.z = fVar4;
    position.x = (float)(undefined4)uStack_3;
    position.y = (float)uStack_3._4_4_;
    pCStack_5 = this_02;
    CullingSubscriberBase::CullingSubscriberBase__ctor_2
              (this_02,4.0,position,(UnityAction_1_UnityEngine_CullingGroupEvent_ *)this_01,
               (MethodInfo *)0x0);
    (this->fields).cullingSubscriberBase = this_02;
    if (this_02 != (CullingSubscriberBase *)0x0) {
      LockCursorManager3DMode::LockCursorManager3DMode_set_OnCursorLockChanged
                ((LockCursorManager3DMode *)this_02,(Action_1_Boolean_ *)0x3,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour_Update
               (AdvancedGhostBehaviour *this,MethodInfo *method)

{
  pAVar1 = this;
  pAVar2 = (this->fields).perception;
  if (pAVar2 == (AdvancedGhostBehaviour_AdvancedGhostPerception *)0x0) {
    return;
  }
  this_00 = (pAVar2->fields).syncedInterval;
  if (this_00 != (DeterministicSyncedInterval *)0x0) {
    bVar3 = DeterministicSyncedInterval::DeterministicSyncedInterval_Update
                      (this_00,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      pAVar4 = (pAVar2->fields).ghostBehaviour;
      if ((((pAVar4 == (AdvancedGhostBehaviour *)0x0) ||
           (pAVar5 = (pAVar4->fields).networkedValues,
           pAVar5 == (AdvancedGhostBehaviour_NetworkedValues *)0x0)) ||
          (pAVar4 == (AdvancedGhostBehaviour *)0x0)) ||
         (this_01 = (pAVar2->fields).perception, this_01 == (OptimizedPerception *)0x0))
      goto code_?;
      OptimizedPerception::OptimizedPerception_Update
                (this_01,(pAVar5->fields).nextPosition,(pAVar4->fields).perceptionRadius,
                 (MethodInfo *)0x0);
    }
    pAVar5 = (this->fields).networkedValues;
    if (pAVar5 != (AdvancedGhostBehaviour_NetworkedValues *)0x0) {
      AdvancedGhostBehaviour+NetworkedValues::AdvancedGhostBehaviour_NetworkedValues_Update
                (pAVar5,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        this = (AdvancedGhostBehaviour *)&UNK_?;
        func_?();
        cRam_? = '\x01';
      }
      pAVar6 = (pAVar1->fields).currentState;
      if (pAVar6 != (AdvancedGhostBehaviour_IGhostBehaviourState *)0x0) {
        pAVar7 = pAVar6->klass;
        uVar8 = 0;
        uVar9._0_1_ = (pAVar7->_1).rank;
        uVar9._1_1_ = (pAVar7->_1).minimumAlignment;
        if (uVar9 != 0) {
          do {
            if (pAVar7->interfaceOffsets[uVar8].interfaceType ==
                (Il2CppClass *)TypeInfo__AdvancedGhostBehaviour__IGhostBehaviourState) {
              ppMVar10 = &(&(pAVar6->klass->vtable).Update)
                          [pAVar6->klass->interfaceOffsets[uVar8].offset].method;
              goto code_?;
            }
            uVar8 = uVar8 + 1;
            pAVar1 = this;
          } while (uVar8 < uVar9);
        }
        this = pAVar1;
        ppMVar10 = (MethodInfo **)
                   func_?(pAVar6,TypeInfo__AdvancedGhostBehaviour__IGhostBehaviourState);
code_?:
        type = (Type *)(*(code *)*ppMVar10)(pAVar6,this);
        this_02 = (Object *)(this->fields).currentState;
        if (this_02 != (Object *)0x0) {
          pTVar11 = mscorlib.dll::System::Object::Object_GetType(this_02,(MethodInfo *)0x0);
          if (pTVar11 != type) {
            AdvancedGhostBehaviour_SetCurrentState(this,type,(MethodInfo *)0x0);
          }
          this_03 = (this->fields).advancedGhostMotor;
          if (this_03 != (AdvancedGhostMotor *)0x0) {
            AdvancedGhostMotor::AdvancedGhostMotor_FrameUpdate(this_03,(MethodInfo *)0x0);
            if ((this->fields).respawn == 0) {
              return;
            }
            AdvancedGhostBehaviour_DoRespawn(this,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void UpdateBehaviourState() */

void Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour_UpdateBehaviourState
               (AdvancedGhostBehaviour *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).currentState;
  if (pAVar1 != (AdvancedGhostBehaviour_IGhostBehaviourState *)0x0) {
    pAVar2 = pAVar1->klass;
    uVar3 = 0;
    uVar4._0_1_ = (pAVar2->_1).rank;
    uVar4._1_1_ = (pAVar2->_1).minimumAlignment;
    if (uVar4 != 0) {
      do {
        if (pAVar2->interfaceOffsets[uVar3].interfaceType ==
            (Il2CppClass *)TypeInfo__AdvancedGhostBehaviour__IGhostBehaviourState) {
          ppMVar5 = &(&(pAVar1->klass->vtable).Update)
                     [pAVar1->klass->interfaceOffsets[uVar3].offset].method;
          goto code_?;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar4);
    }
    ppMVar5 = (MethodInfo **)
              func_?(pAVar1,TypeInfo__AdvancedGhostBehaviour__IGhostBehaviourState,1);
code_?:
    type = (Type *)(*(code *)*ppMVar5)(pAVar1,this,ppMVar5[1]);
    this_00 = (Object *)(this->fields).currentState;
    if (this_00 != (Object *)0x0) {
      pTVar6 = mscorlib.dll::System::Object::Object_GetType(this_00,(MethodInfo *)0x0);
      if (pTVar6 != type) {
        AdvancedGhostBehaviour_SetCurrentState(this,type,(MethodInfo *)0x0);
      }
      return;
    }
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void UpdatePositionAndRotation() */

void Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour_UpdatePositionAndRotation
               (AdvancedGhostBehaviour *this,MethodInfo *method)

{
  pVVar1 = AdvancedGhostBehaviour_GetMoveVector
                     ((Vector3 *)&stack0xfffffff0,this,(this->fields).nextPosition,(MethodInfo *)0x0
                     );
  pAVar2 = (this->fields).advancedGhostMotor;
  if (pAVar2 != (AdvancedGhostMotor *)0x0) {
    AdvancedGhostMotor::AdvancedGhostMotor_set_MoveDirection(pAVar2,*pVVar1,(MethodInfo *)0x0);
    pAVar2 = (this->fields).advancedGhostMotor;
    if (pAVar2 != (AdvancedGhostMotor *)0x0) {
      AdvancedGhostMotor::AdvancedGhostMotor_FixedUpdateFunction(pAVar2,(MethodInfo *)0x0);
      this_00 = (this->fields).GhostVisualization;
      if (this_00 != (AdvancedGhostVisualizaton *)0x0) {
        this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                            ((Component_1 *)this_00,(MethodInfo *)0x0);
        if (this_01 != (GameObject *)0x0) {
          bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                  GameObject_get_activeInHierarchy(this_01,(MethodInfo *)0x0);
          if (bVar3 != 0) {
            pAVar2 = (this->fields).advancedGhostMotor;
            if (pAVar2 == (AdvancedGhostMotor *)0x0) goto code_?;
            AdvancedGhostMotor::AdvancedGhostMotor_FixedUpdateRotation(pAVar2,(MethodInfo *)0x0);
          }
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* AdvancedGhostBehaviour() */

void Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour__ctor
               (AdvancedGhostBehaviour *this,MethodInfo *method)

{
  (this->fields).lives = -1;
  (this->fields).maxLives = -1;
  (this->fields).radius = 10.0;
  (this->fields).perceptionRadius = 15.0;
  (this->fields).minPerceptionRadius = 15.0;
  (this->fields).speedPerceptionFactor = 0.3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}


/* Boolean get_IsDead() */

bool Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour_get_IsDead
               (AdvancedGhostBehaviour *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).lives == 0) {
    return 1;
  }
  this_00 = (this->fields).deathCheckFunc;
  if (this_00 != (Func_1_Boolean_ *)0x0) {
    bVar1 = System.Core.dll::System::Func`1[Boolean]::Func_1_Boolean__Invoke
                      (this_00,MethodInfo__System__Func<bool>__Invoke__);
    return bVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Single get_RoamRadius() */

float Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour_get_RoamRadius
                (AdvancedGhostBehaviour *this,MethodInfo *method)

{
  return (this->fields).perceptionRadius + (this->fields).radius;
}


/* MVTeam get_Team() */

MVTeam__Enum
Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour_get_Team
          (AdvancedGhostBehaviour *this,MethodInfo *method)

{
  pAVar1 = (this->fields).perception;
  if (pAVar1 != (AdvancedGhostBehaviour_AdvancedGhostPerception *)0x0) {
    return (pAVar1->fields).alliedTeam;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  MVar3 = (*pcVar2)();
  return MVar3;
}


/* Void set_Lives(Int32) */

void Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour_set_Lives
               (AdvancedGhostBehaviour *this,int32_t value,MethodInfo *method)

{
  (this->fields).lives = value;
  (this->fields).maxLives = value;
  return;
}


/* Void set_Radius(Single) */

void Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour_set_Radius
               (AdvancedGhostBehaviour *this,float value,MethodInfo *method)

{
  (this->fields).radius = value;
  return;
}


/* Void set_Speed(Single) */

void Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour_set_Speed
               (AdvancedGhostBehaviour *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  pOVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
           ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe8,value,(MethodInfo *)0x0);
  AVar2 = pOVar1->hiddenValue;
  pBVar3 = pOVar1->hiddenValueOld;
  fVar4 = pOVar1->fakeValue;
  bVar5 = pOVar1->inited;
  uVar6 = *(undefined3 *)&pOVar1->field_0x11;
  value_00 = *pOVar1;
  fVar7 = (this->fields).minPerceptionRadius;
  (this->fields).speed.currentCryptoKey = pOVar1->currentCryptoKey;
  (this->fields).speed.hiddenValue = AVar2;
  (this->fields).speed.hiddenValueOld = pBVar3;
  (this->fields).speed.fakeValue = fVar4;
  (this->fields).speed.inited = bVar5;
  *(undefined3 *)&(this->fields).speed.field_0x11 = uVar6;
  fVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
          ObscuredFloat_op_Implicit_1(value_00,(MethodInfo *)0x0);
  (this->fields).perceptionRadius = (this->fields).speedPerceptionFactor * fVar4 + fVar7;
  return;
}


/* Void set_Team(MVTeam) */

void Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour_set_Team
               (AdvancedGhostBehaviour *this,MVTeam__Enum value,MethodInfo *method)

{
  pAVar1 = (this->fields).perception;
  if (pAVar1 != (AdvancedGhostBehaviour_AdvancedGhostPerception *)0x0) {
    (pAVar1->fields).alliedTeam = value;
    pAVar2 = (this->fields).weapon;
    if (pAVar2 != (AdvancedGhostBodyRotateWeapon *)0x0) {
      (pAVar2->fields).alliedTeam = value;
      return;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

