
/* MvCharacterController CloneToGameObject(GameObject, GameObject) */

MvCharacterController *
Assembly-CSharp.dll::MVCharacterController3D::MVCharacterController3D_CloneToGameObject
          (MVCharacterController3D *this,GameObject *targetGameObject,GameObject *seat,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (targetGameObject != (GameObject *)0x0) {
    pMVar1 = (MvCharacterController *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_85
                       (targetGameObject,
                        MVCharacterController3D_MethodInfo__UnityEngine__GameObject__AddComponent<MVCharacterController3D>__
                       );
    System.Core.dll::System::Linq::Enumerable+<CreateSelectIterator>c__Iterator10`2[System::
    Object,System::Single]::
    Enumerable_CreateSelectIterator_c_Iterator10_2_System_Object_System_Single__System_Collections_Generic_IEnumerator_TResult__get_Current
              ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Object_System_Single_ *)this,
               (MethodInfo *)0x0);
    fVar2 = (this->fields)._.elipsoidRadius.y;
    if (seat != (GameObject *)0x0) {
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (seat,(MethodInfo *)0x0);
      if (this_00 != (Transform *)0x0) {
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                           ((Vector3 *)&stack0xffffffec,this_00,(MethodInfo *)0x0);
        if (pMVar1 != (MvCharacterController *)0x0) {
          radius = pVVar3->x;
          MvCharacterController::MvCharacterController_Init
                    (pMVar1,(float)radius,fVar2 + fVar2,*pVVar3,(MethodInfo *)0x0);
          return pMVar1;
        }
      }
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  pMVar1 = (MvCharacterController *)(*pcVar4)();
  return pMVar1;
}


/* Vector3 CollideAndSlide(Vector3, Vector3) */

Vector3 * Assembly-CSharp.dll::MVCharacterController3D::MVCharacterController3D_CollideAndSlide
                    (Vector3 *__return_storage_ptr__,MVCharacterController3D *this,Vector3 R3Vel,
                    Vector3 R3Position,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bStack_1 = 0;
  puStack_2 = (undefined *)0x0;
  stack0xffffffd4 = 0.0;
  VStack_3.x = 0.0;
  VStack_3.y = 0.0;
  VStack_3.z = 0.0;
  _puStack_48 = 0;
  fVar4 = (float10)func_?(&R3Vel,0);
  if ((float)fVar4 == 0.0) {
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                       (&VStack_6,(MethodInfo *)0x0);
    MvCharacterController::MvCharacterController_set_Velocity
              ((MvCharacterController *)this,*pVVar5,(MethodInfo *)0x0);
    __return_storage_ptr__->x = R3Position.x;
    __return_storage_ptr__->y = R3Position.y;
    __return_storage_ptr__->z = R3Position.z;
    return __return_storage_ptr__;
  }
  bStack_1 = 1;
  pVVar5 = &(this->fields)._.elipsoidRadius;
  pVVar7 = MathFunctions::MathFunctions_DivideVector
                     (&VStack_6,&R3Position,pVVar5,(MethodInfo *)0x0);
  puStack_2 = (undefined *)pVVar7->x;
  unique0x0000a404 = pVVar7->y;
  pVVar7 = MathFunctions::MathFunctions_DivideVector(&VStack_6,&R3Vel,pVVar5,(MethodInfo *)0x0);
  VStack_3.x = pVVar7->x;
  VStack_3.y = pVVar7->y;
  VStack_3.z = pVVar7->z;
  (this->fields)._.collisionRecursionDepth = 0;
  MvCharacterController::MvCharacterController_CollideWithWorld
            (&VStack_6,(MvCharacterController *)this,(Vector3 *)&puStack_2,&VStack_3,&bStack_1,
             (MethodInfo *)0x0);
  pVVar5 = MathFunctions::MathFunctions_MultiplyVector
                     (&VStack_6,(Vector3 *)&stack0xffffffdc,pVVar5,(MethodInfo *)0x0);
  pMVar8 = (MVCharacterController3D *)pVVar5->x;
  _puStack_48 = CONCAT44(this,&UNK_?);
  bVar9 = MvCharacterController::MvCharacterController_OverlapCheckCollision
                    ((MvCharacterController *)this,*pVVar5,(MethodInfo *)0x0);
  _puStack_30 = ZEXT48(&puStack_10);
  func_?();
  if (bVar9 != 0) {
    puStack_2 = (undefined *)R3Vel.x;
    stack0xffffffd4 = R3Vel.y;
    _puStack_48 = CONCAT44(&UNK_?,puStack_10);
    pMVar8 = this;
    (*(code *)(this->klass->vtable).NoOverlapPosition.method)();
  }
  stack0xffffffd4 = (float)&VStack_6;
  pVVar5 = MathFunctions::MathFunctions_MultiplyVector
                     (&VStack_6,(Vector3 *)&stack0xffffffc4,&(this->fields)._.elipsoidRadius,
                      (MethodInfo *)0x0);
  uVar11 = _puStack_48;
  uStack_12._0_4_ = pVVar5->x;
  uStack_12._4_4_ = pVVar5->y;
  R3Position.x = R3Position.x + (float)puStack_10;
  fVar13 = (float)((ulonglong)_puStack_48 >> 0x20);
  R3Position.y = R3Position.y + fVar13;
  R3Position.z = R3Position.z + (float)pMVar8;
  fVar14 = (float)uStack_12._4_4_ + fVar13;
  fStack_15 = pVVar5->z + (float)pMVar8;
  fVar16 = fVar14 - R3Position.y;
  VStack_6.z = fStack_15 - R3Position.z;
  value.y = fVar16;
  value.x = ((float)(undefined4)uStack_12 + (float)puStack_10) - R3Position.x;
  value.z = VStack_6.z;
  _puStack_48 = uVar11;
  MvCharacterController::MvCharacterController_set_Velocity
            ((MvCharacterController *)this,value,(MethodInfo *)0x0);
  __return_storage_ptr__->x = fVar16;
  __return_storage_ptr__->y = fVar14;
  __return_storage_ptr__->z = fStack_15;
  return __return_storage_ptr__;
}


/* Vector3 GetNextVelocity(Vector3, Vector3, Vector3, Vector3 ByRef) */

Vector3 * Assembly-CSharp.dll::MVCharacterController3D::MVCharacterController3D_GetNextVelocity
                    (Vector3 *__return_storage_ptr__,MVCharacterController3D *this,Vector3 ePoint,
                    Vector3 eNewBasePoint,Vector3 eDestinationPoint,Vector3 *slidePlaneNormal,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = ePoint.z;
  afStack_2[0] = 0.0;
  afStack_2[1] = 0.0;
  puStack_3 = (undefined *)0x0;
  fVar4 = ePoint.x;
  fVar5 = ePoint.y;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  a.y = eNewBasePoint.y;
  a.x = eNewBasePoint.x;
  a.z = eNewBasePoint.z;
  b_00.y = ePoint.y;
  b_00.x = ePoint.x;
  b_00.z = fVar1;
  pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                     (&eNewBasePoint,a,b_00,(MethodInfo *)0x0);
  fVar7 = pVVar6->y;
  fVar8 = pVVar6->z;
  slidePlaneNormal->x = pVVar6->x;
  slidePlaneNormal->y = fVar7;
  slidePlaneNormal->z = fVar8;
  func_?(slidePlaneNormal,0);
  puStack_3 = (undefined *)fVar5;
  afStack_2[1] = fVar4;
  uVar9._0_4_ = slidePlaneNormal->x;
  uVar9._4_4_ = slidePlaneNormal->y;
  afStack_2[0] = slidePlaneNormal->z;
  func_?(afStack_2,uVar9);
  dVar10 = MathFunctions::MathFunctions_SignedDistanceTo
                    ((Plane *)afStack_2,(Vector3 *)&stack0xffffffe8,&eDestinationPoint,
                     (MethodInfo *)0x0);
  fVar5 = eDestinationPoint.z;
  fVar4 = slidePlaneNormal->z;
  uVar11 = 0;
  eNewBasePoint.y = SUB84(dVar10,0);
  eNewBasePoint.z = (float)((ulonglong)dVar10 >> 0x20);
  pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply_1
                     (&eNewBasePoint,(float)dVar10,*slidePlaneNormal,(MethodInfo *)0x0);
  uVar12 = pVVar6->x;
  ePoint.x = pVVar6->z;
  ePoint.y = 0.0;
  a_00.y = (float)uVar11;
  a_00.x = fVar4;
  a_00.z = fVar5;
  pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                     (&eNewBasePoint,a_00,*pVVar6,(MethodInfo *)0x0);
  fVar4 = ePoint.y;
  eDestinationPoint.y = ePoint.y;
  eDestinationPoint.x = ePoint.x;
  uVar13 = pVVar6->x;
  uVar14 = pVVar6->y;
  eNewBasePoint.z = pVVar6->z;
  eDestinationPoint.z = fVar1;
  ePoint.z = (float)&ePoint;
  ePoint.y = (float)&UNK_?;
  b.z = fVar1;
  b.x = ePoint.x;
  b.y = fVar4;
  eNewBasePoint.x = (float)uVar13;
  eNewBasePoint.y = (float)uVar14;
  pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                     ((Vector3 *)ePoint.z,*pVVar6,b,(MethodInfo *)0x0);
  fVar1 = pVVar6->z;
  *(undefined8 *)uVar12 = *(undefined8 *)pVVar6;
  *(float *)(uVar12 + 8) = fVar1;
  return (Vector3 *)uVar12;
}


/* Void Move(Vector3) */

void Assembly-CSharp.dll::MVCharacterController3D::MVCharacterController3D_Move
               (MVCharacterController3D *this,Vector3 motion,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xffffffe8,pTVar1,(MethodInfo *)0x0);
    uStack_3._0_4_ = (this->fields)._.center.x;
    fStack_4 = (this->fields)._.center.y;
    fVar5 = (this->fields)._.center.z;
    VVar6 = *pVVar2;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      uStack_3._0_4_ = (float)TypeInfo__UnityEngine__Vector3;
      func_?();
    }
    b.z = fVar5;
    b.x = (float)uStack_3;
    b.y = SUB84(uStack_3,4);
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                       ((Vector3 *)&stack0xffffffe8,VVar6,b,(MethodInfo *)0x0);
    motion.y = (float)this->klass[1]._0.image;
    motion.x = pVVar2->z;
    puVar7 = (undefined8 *)(*(code *)(this->klass->vtable).CollideAndSlide.method)();
    fVar5 = *(float *)(puVar7 + 1);
    motion.y = (float)*puVar7;
    motion.z = (float)((ulonglong)*puVar7 >> 0x20);
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    VVar6.y = motion.z;
    VVar6.x = motion.y;
    VVar6.z = fVar5;
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                       (&motion,VVar6,(this->fields)._.center,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (pTVar1,*pVVar2,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Boolean NoOverlapPosition(Vector3, Vector3, Vector3 ByRef) */

bool Assembly-CSharp.dll::MVCharacterController3D::MVCharacterController3D_NoOverlapPosition
               (MVCharacterController3D *this,Vector3 R3Position,Vector3 R3Direction,Vector3 *offset
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  fVar1 = 0.0;
  func_?();
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?();
  }
  func_?();
  fVar2 = R3Direction.z;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
  }
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                     ((Vector3 *)&stack0xffffffd0,(MethodInfo *)0x0);
  lhs.z = fVar2;
  lhs.x = (float)in_stack_4;
  lhs.y = SUB84(in_stack_4,4);
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Dot(lhs,*pVVar3,(MethodInfo *)0x0);
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                     ((Vector3 *)&stack0xfffffff4,(MethodInfo *)0x0);
  fVar5 = pVVar3->z;
  fVar2 = pVVar3->x;
  fVar6 = pVVar3->y;
  if ((_UNK_? < fVar1) || (fVar1 < _UNK_?)) {
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_right
                       ((Vector3 *)&stack0xfffffffc,(MethodInfo *)0x0);
    fVar5 = pVVar3->z;
  }
  fVar7 = R3Direction.z;
  fVar8 = R3Direction.y;
  fVar1 = R3Direction.x;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
  }
  lhs_00.y = fVar6;
  lhs_00.x = fVar2;
  lhs_00.z = fVar5;
  rhs.y = fVar8;
  rhs.x = fVar1;
  rhs.z = fVar7;
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Cross
                     ((Vector3 *)&stack0xfffffffc,lhs_00,rhs,(MethodInfo *)0x0);
  fVar1 = pVVar3->z;
  pVVar3 = (Vector3 *)func_?();
  uVar9 = pVVar3->x;
  uVar10 = pVVar3->y;
  rhs_00.y = (float)uVar10;
  rhs_00.x = (float)uVar9;
  fVar2 = pVVar3->z;
  rhs_00.z = R3Direction.z;
  R3Direction.x = (float)uVar9;
  R3Direction.y = (float)uVar10;
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Cross
            ((Vector3 *)&R3Direction.z,*pVVar3,rhs_00,(MethodInfo *)0x0);
  iVar11 = func_?();
  fVar6 = *(float *)(iVar11 + 8);
  a_14.y = (float)in_stack_12;
  a_14.x = fVar1;
  a_14.z = fVar2;
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     ((Vector3 *)&stack0x0000003c,a_14,0.005,(MethodInfo *)0x0);
  fVar2 = (float)in_stack_13;
  fVar1 = pVVar3->z;
  R3Direction.z = 0.005;
  a.y = (float)in_stack_14;
  a.x = (float)in_stack_13;
  a.z = fVar6;
  R3Direction.y = fVar6;
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
            ((Vector3 *)&stack0x00000054,a,0.005,(MethodInfo *)0x0);
  uRam_?._4_4_ = (float)in_stack_15;
  uRam_?._0_4_ = (float)in_stack_16;
  fStack17 = (float)in_stack_13;
  R3Direction.z = (float)&stack0x0000006c;
  R3Direction.y = (float)&UNK_?;
  a_00.y = (float)&stack0x00000054;
  a_00.x = (float)&UNK_?;
  a_00.z = (float)in_stack_13;
  b.z = fVar1;
  b.x = (float)in_stack_16;
  b.y = (float)in_stack_15;
  fRam00000008 = fVar1;
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                     ((Vector3 *)R3Direction.z,a_00,b,(MethodInfo *)0x0);
  in_stack_13 = &UNK_?;
  bVar18 = MvCharacterController::MvCharacterController_OverlapCheckCollision
                    ((MvCharacterController *)0x3ba3d70a,*pVVar3,(MethodInfo *)0x0);
  if (bVar18 != 0) {
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      in_stack_15 = &UNK_?;
      func_?();
    }
    a_01.y = (float)in_stack_19;
    a_01.x = (float)in_stack_20;
    a_01.z = in_stack_21;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_UnaryNegation
                       ((Vector3 *)&stack0x000000a0,a_01,(MethodInfo *)0x0);
    uRam_?._0_4_ = pVVar3->x;
    uRam_?._4_4_ = pVVar3->y;
    fRam00000008 = pVVar3->z;
    in_stack_15 = &UNK_?;
    in_stack_16 = (Vector3 *)&stack0x000000b4;
    a_02.y = (float)&stack0x00000054;
    a_02.x = (float)&UNK_?;
    a_02.z = fVar2;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                       (in_stack_16,a_02,*pVVar3,(MethodInfo *)0x0);
    bVar18 = MvCharacterController::MvCharacterController_OverlapCheckCollision
                      ((MvCharacterController *)0x3ba3d70a,*pVVar3,(MethodInfo *)0x0);
    if (bVar18 != 0) {
      uRam_?._4_4_ = in_stack_22;
      uRam_?._0_4_ = in_stack_23;
      fRam00000008 = in_stack_24;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      b_00.y = in_stack_22;
      b_00.x = in_stack_23;
      a_03.y = (float)&stack0x00000054;
      a_03.x = (float)&UNK_?;
      a_03.z = fVar2;
      b_00.z = in_stack_24;
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                         ((Vector3 *)&stack0x000000e8,a_03,b_00,(MethodInfo *)0x0);
      bVar18 = MvCharacterController::MvCharacterController_OverlapCheckCollision
                        ((MvCharacterController *)0x3ba3d70a,*pVVar3,(MethodInfo *)0x0);
      if (bVar18 != 0) {
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?();
        }
        a_04.y = (float)in_stack_25;
        a_04.x = (float)in_stack_26;
        a_04.z = in_stack_27;
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_UnaryNegation
                           ((Vector3 *)&stack0x0000011c,a_04,(MethodInfo *)0x0);
        uRam_?._0_4_ = pVVar3->x;
        uRam_?._4_4_ = pVVar3->y;
        fRam00000008 = pVVar3->z;
        in_stack_27 = 0.0;
        a_05.y = (float)&stack0x00000054;
        a_05.x = (float)&UNK_?;
        a_05.z = fVar2;
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                           ((Vector3 *)&stack0x00000130,a_05,*pVVar3,(MethodInfo *)0x0);
        bVar18 = MvCharacterController::MvCharacterController_OverlapCheckCollision
                          ((MvCharacterController *)0x3ba3d70a,*pVVar3,(MethodInfo *)0x0);
        if (bVar18 != 0) {
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            func_?();
          }
          b_01.y = (float)in_stack_28;
          b_01.x = (float)in_stack_29;
          a_06.z = in_stack_30;
          a_06._0_8_ = in_stack_31;
          b_01.z = in_stack_32;
          pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                             ((Vector3 *)&stack0x00000164,a_06,b_01,(MethodInfo *)0x0);
          pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Division
                             ((Vector3 *)&stack0x00000184,*pVVar3,in_stack_33,
                              (MethodInfo *)0x0);
          uRam_?._0_4_ = pVVar3->x;
          uRam_?._4_4_ = pVVar3->y;
          fRam00000008 = pVVar3->z;
          a_07.y = (float)&stack0x00000054;
          a_07.x = (float)&UNK_?;
          a_07.z = fVar2;
          pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                             ((Vector3 *)&stack0x0000019c,a_07,*pVVar3,(MethodInfo *)0x0);
          bVar18 = MvCharacterController::MvCharacterController_OverlapCheckCollision
                            ((MvCharacterController *)0x3ba3d70a,*pVVar3,(MethodInfo *)0x0);
          if (bVar18 != 0) {
            puStack34 = (undefined *)fRam00000008;
            fVar1 = (float)uRam_?;
            fVar6 = SUB84(uRam_?,4);
            uVar35 = uRam_?;
            if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
              func_?();
              uVar35._4_4_ = fVar6;
              uVar35._0_4_ = fVar1;
            }
            a_08.z = (float)puStack34;
            a_08.x = (float)uVar35;
            a_08.y = SUB84(uVar35,4);
            pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_UnaryNegation
                               ((Vector3 *)&stack0x000001d0,a_08,(MethodInfo *)0x0);
            uRam_?._0_4_ = pVVar3->x;
            uRam_?._4_4_ = pVVar3->y;
            fRam00000008 = pVVar3->z;
            a_09.y = (float)&stack0x00000054;
            a_09.x = (float)&UNK_?;
            a_09.z = fVar2;
            pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                               ((Vector3 *)&stack0x000001e4,a_09,*pVVar3,(MethodInfo *)0x0);
            bVar18 = MvCharacterController::MvCharacterController_OverlapCheckCollision
                              ((MvCharacterController *)0x3ba3d70a,*pVVar3,(MethodInfo *)0x0);
            if (bVar18 != 0) {
              if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                func_?();
              }
              b_02.y = (float)in_stack_36;
              b_02.x = (float)in_stack_37;
              a_10.z = in_stack_38;
              a_10.x = (float)(int)in_stack_39;
              a_10.y = (float)(int)((ulonglong)in_stack_39 >> 0x20);
              b_02.z = in_stack_40;
              pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                                 ((Vector3 *)&stack0x00000218,a_10,b_02,(MethodInfo *)0x0);
              pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Division
                                 ((Vector3 *)&stack0x00000238,*pVVar3,in_stack_41,
                                  (MethodInfo *)0x0);
              uRam_?._0_4_ = pVVar3->x;
              uRam_?._4_4_ = pVVar3->y;
              fRam00000008 = pVVar3->z;
              a_11.y = (float)&stack0x00000054;
              a_11.x = (float)&UNK_?;
              a_11.z = fVar2;
              pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                                 ((Vector3 *)&stack0x00000250,a_11,*pVVar3,(MethodInfo *)0x0);
              bVar18 = MvCharacterController::MvCharacterController_OverlapCheckCollision
                                ((MvCharacterController *)0x3ba3d70a,*pVVar3,(MethodInfo *)0x0);
              if (bVar18 != 0) {
                uVar35 = uRam_?;
                fVar1 = fRam00000008;
                if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000)
                     != 0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                  func_?();
                }
                a_12.z = fVar1;
                a_12.x = (float)uVar35;
                a_12.y = SUB84(uVar35,4);
                pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_UnaryNegation
                                   ((Vector3 *)&stack0x00000284,a_12,(MethodInfo *)0x0);
                uRam_?._0_4_ = pVVar3->x;
                uRam_?._4_4_ = pVVar3->y;
                fRam00000008 = pVVar3->z;
                a_13.y = (float)&stack0x00000054;
                a_13.x = (float)&UNK_?;
                a_13.z = fVar2;
                pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                                   ((Vector3 *)&stack0x00000298,a_13,*pVVar3,(MethodInfo *)0x0);
                bVar18 = MvCharacterController::MvCharacterController_OverlapCheckCollision
                                  ((MvCharacterController *)0x3ba3d70a,*pVVar3,(MethodInfo *)0x0);
                if (bVar18 != 0) {
                  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                    func_?();
                  }
                  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                                     ((Vector3 *)&stack0x000002cc,(MethodInfo *)0x0);
                  uRam_?._0_4_ = pVVar3->x;
                  uRam_?._4_4_ = pVVar3->y;
                  fRam00000008 = pVVar3->z;
                  return 0;
                }
              }
            }
          }
        }
      }
    }
  }
  return 1;
}


/* Vector3 RecalcDirectionMoveAway(Vector3, Vector3, Single, Vector3) */

Vector3 * Assembly-CSharp.dll::MVCharacterController3D::
          MVCharacterController3D_RecalcDirectionMoveAway
                    (Vector3 *__return_storage_ptr__,MVCharacterController3D *this,Vector3 ePos,
                    Vector3 eDir,float distance,Vector3 ePoint,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?(&eDir,0);
  fVar1 = eDir.z;
  fVar2 = eDir.x;
  fVar3 = eDir.y;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  a_00.y = fVar3;
  a_00.x = fVar2;
  a_00.z = fVar1;
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     ((Vector3 *)&stack0xfffffff0,a_00,distance,(MethodInfo *)0x0);
  fVar2 = ePos.z;
  a_01.y = ePos.y;
  a_01.x = ePos.x;
  a_01.z = ePos.z;
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                     ((Vector3 *)&stack0xffffffcc,a_01,*pVVar4,(MethodInfo *)0x0);
  method_00 = pVVar4->y;
  fVar1 = pVVar4->z;
  b_00.y = ePoint.y;
  b_00.x = ePoint.x;
  b_00.z = ePoint.z;
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
            (&ePoint,*pVVar4,b_00,(MethodInfo *)method_00);
  fVar3 = 0.0;
  puVar5 = &stack0xffffffe4;
  pVVar4 = (Vector3 *)func_?();
  uVar6 = pVVar4->y;
  ePos.y = pVVar4->z;
  eDir.x = 0.0;
  ePos.z = 0.005;
  ePos.x = (float)uVar6;
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     (&ePoint,*pVVar4,0.005,(MethodInfo *)0x0);
  eDir.y = fVar3;
  eDir.x = (float)puVar5;
  uVar7 = pVVar4->y;
  ePoint.y = pVVar4->z;
  ePoint.z = 0.0;
  ePos.z = (float)&ePoint;
  ePos.y = (float)&UNK_?;
  a.y = eDir.y;
  a.x = eDir.x;
  a.z = fVar1;
  eDir.z = fVar1;
  ePoint.x = (float)uVar7;
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                     ((Vector3 *)ePos.z,a,*pVVar4,(MethodInfo *)0x0);
  ePoint.z = (float)&UNK_?;
  b.y = ePos.y;
  b.x = ePos.x;
  b.z = fVar2;
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
            (&ePos,*pVVar4,b,(MethodInfo *)0x0);
  func_?();
  return &ePoint;
}


/* MVCharacterController3D() */

void Assembly-CSharp.dll::MVCharacterController3D::MVCharacterController3D__ctor
               (MVCharacterController3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MvCharacterController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MvCharacterController->_1).cctor_started == 0)) {
    func_?(TypeInfo__MvCharacterController);
  }
  (this->fields)._.sendCollisionData = 1;
  (this->fields)._.offsetFactor = 0.1;
  (this->fields)._.offsetBase = 0.1;
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

