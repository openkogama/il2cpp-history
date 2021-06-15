
/* Void CalculateAxisAlignedRect(Vector3[], Transform) */

void Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_CalculateAxisAlignedRect
               (Vector3__Array *hitsClockwise,Transform *t,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fStack_1 = 0.0;
  uStack_2 = 0;
  uStack_3 = 0;
  fStack_4 = 0.0;
  uVar5 = 0;
  pVVar6 = hitsClockwise->vector;
  do {
    if (hitsClockwise == (Vector3__Array *)0x0) goto code_?;
    if (hitsClockwise->max_length <= uVar5) goto code_?;
    if (t == (Transform *)0x0) goto code_?;
    pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_InverseTransformPoint
                       (&VStack_8,t,*pVVar6,(MethodInfo *)0x0);
    uStack_9._0_4_ = pVVar7->x;
    uStack_9._4_4_ = pVVar7->y;
    fStack_10 = pVVar7->z;
    if ((((uint)(TypeInfo__MVSweptElipsoidCheck->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_started == 0)) {
      VStack_8.z = (float)TypeInfo__MVSweptElipsoidCheck;
      VStack_8.y = (float)&UNK_?;
      func_?();
    }
    if (TypeInfo__MVSweptElipsoidCheck->static_fields->
        cornerPointsLocalSpaceCalculateAxisAlignedRect == (Vector3__Array *)0x0)
    goto code_?;
    puVar11 = (undefined8 *)func_?(uVar5);
    uVar5 = uVar5 + 1;
    pVVar6 = pVVar6 + 1;
    *puVar11 = uStack_9;
    *(float *)(puVar11 + 1) = fStack_10;
  } while ((int)uVar5 < 4);
  if ((((uint)(TypeInfo__MVSweptElipsoidCheck->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVSweptElipsoidCheck);
  }
  pVVar12 = TypeInfo__MVSweptElipsoidCheck->static_fields->
           cornerPointsLocalSpaceCalculateAxisAlignedRect;
  if (pVVar12 == (Vector3__Array *)0x0) goto code_?;
  if (pVVar12->max_length == 0) {
code_?:
    uVar13 = func_?(0,0);
    func_?(uVar13);
  }
  else {
    uStack_2._0_4_ = pVVar12->vector[0].x;
    uStack_2._4_4_ = pVVar12->vector[0].y;
    iVar14 = 1;
    fStack_1 = pVVar12->vector[0].z;
    uStack_3 = uStack_2;
    fStack_4 = fStack_1;
    do {
      iVar15 = 0;
      do {
        if ((((uint)(TypeInfo__MVSweptElipsoidCheck->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVSweptElipsoidCheck);
        }
        if (TypeInfo__MVSweptElipsoidCheck->static_fields->
            cornerPointsLocalSpaceCalculateAxisAlignedRect == (Vector3__Array *)0x0)
        goto code_?;
        uVar13 = func_?(iVar14,iVar15,0);
        fVar16 = (float10)func_?(uVar13);
        fStack_10 = (float)fVar16;
        fVar16 = (float10)func_?(&uStack_2,iVar15,0);
        uStack_9 = CONCAT44((float)fVar16,(undefined4)uStack_9);
        if ((float)fVar16 < fStack_10) {
          if ((((uint)(TypeInfo__MVSweptElipsoidCheck->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVSweptElipsoidCheck);
          }
          if (TypeInfo__MVSweptElipsoidCheck->static_fields->
              cornerPointsLocalSpaceCalculateAxisAlignedRect == (Vector3__Array *)0x0)
          goto code_?;
          uVar13 = func_?(iVar14,iVar15,0);
          fVar16 = (float10)func_?(uVar13);
          uStack_9 = CONCAT44((float)fVar16,(undefined4)uStack_9);
          func_?(&uStack_2,iVar15,(float)fVar16,0);
        }
        if ((((uint)(TypeInfo__MVSweptElipsoidCheck->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVSweptElipsoidCheck);
        }
        if (TypeInfo__MVSweptElipsoidCheck->static_fields->
            cornerPointsLocalSpaceCalculateAxisAlignedRect == (Vector3__Array *)0x0)
        goto code_?;
        uVar13 = func_?(iVar14,iVar15,0);
        fVar16 = (float10)func_?(uVar13);
        fStack_10 = (float)fVar16;
        fVar16 = (float10)func_?(&uStack_3,iVar15,0);
        uStack_9 = CONCAT44((float)fVar16,(undefined4)uStack_9);
        if (fStack_10 < (float)fVar16) {
          if ((((uint)(TypeInfo__MVSweptElipsoidCheck->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVSweptElipsoidCheck);
          }
          if (TypeInfo__MVSweptElipsoidCheck->static_fields->
              cornerPointsLocalSpaceCalculateAxisAlignedRect == (Vector3__Array *)0x0)
          goto code_?;
          uVar13 = func_?(iVar14,iVar15,0);
          fVar16 = (float10)func_?(uVar13);
          uStack_9 = CONCAT44((float)fVar16,(undefined4)uStack_9);
          func_?(&uStack_3,iVar15,(float)fVar16,0);
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 < 3);
      iVar14 = iVar14 + 1;
    } while (iVar14 < 4);
    if ((((uint)(TypeInfo__MVSweptElipsoidCheck->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVSweptElipsoidCheck);
    }
    pVVar12 = TypeInfo__MVSweptElipsoidCheck->static_fields->minMaxCalculateAxisAlignedRect;
    if (pVVar12 == (Vector3__Array *)0x0) {
code_?:
      func_?(0);
      goto code_?;
    }
    if (pVVar12->max_length != 0) {
      pVVar12->vector[0].x = (float)(undefined4)uStack_3;
      pVVar12->vector[0].y = (float)uStack_3._4_4_;
      pVVar12->vector[0].z = fStack_4;
      pVVar12 = TypeInfo__MVSweptElipsoidCheck->static_fields->minMaxCalculateAxisAlignedRect;
      if (pVVar12 != (Vector3__Array *)0x0) {
        if (1 < pVVar12->max_length) {
          pVVar12->vector[1].x = (float)(undefined4)uStack_2;
          pVVar12->vector[1].y = (float)uStack_2._4_4_;
          pVVar12->vector[1].z = fStack_1;
          return;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  uVar13 = func_?(0,0);
  func_?(uVar13);
code_?:
  uVar13 = func_?(0,0);
  func_?(uVar13);
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Boolean CubeIsWithinFirstHitRadius(IntVector, Single, CollisionState ByRef) */

bool Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_CubeIsWithinFirstHitRadius
               (IntVector pos,float moveDistance,CollisionState *collisionState,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = 0;
  uVar2 = 0;
  fVar3 = 0.0;
  if (collisionState->firstHitDetected != 0) {
    fVar4 = collisionState->scaledMaxRadius + _UNK_?;
    func_?(&stack0xffffffd4,(float)(int)pos.x,(float)(int)pos.y,(float)(int)pos.z,0);
    fVar5 = (collisionState->localOrigin).x;
    fVar6 = (collisionState->localOrigin).y;
    fVar7 = (collisionState->localOrigin).z;
    fVar8 = (collisionState->localDirection).z;
    uVar9._0_4_ = (collisionState->localDirection).x;
    fStack_10 = (collisionState->localDirection).y;
    fVar11 = collisionState->scaledMaxRadius;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    a.z = fVar8;
    a.x = (float)uVar9;
    a.y = fStack_10;
    pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                       ((Vector3 *)&stack0xffffffec,a,fVar11 * moveDistance,(MethodInfo *)0x0);
    a_00.y = fVar6;
    a_00.x = fVar5;
    a_00.z = fVar7;
    pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                       ((Vector3 *)&stack0xffffffe0,a_00,*pVVar12,(MethodInfo *)0x0);
    a_01.y = (float)uVar2;
    a_01.x = (float)uVar1;
    a_01.z = fVar3;
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
              ((Vector3 *)&stack0xffffffe0,a_01,*pVVar12,(MethodInfo *)0x0);
    fVar13 = (float10)func_?();
    if (fVar4 * fVar4 <= (float)fVar13) {
      return 0;
    }
  }
  return 1;
}


/* Boolean CubeIsWithinSphereRadius(IntVector, CollisionState ByRef) */

bool Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_CubeIsWithinSphereRadius
               (IntVector pos,CollisionState *collisionState,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  func_?(&uStack_1,(float)(int)pos.x,(float)(int)pos.y,(float)(int)pos.z,0);
  fVar2 = (collisionState->localOrigin).z;
  fVar3 = (collisionState->localDirection).z;
  uVar4 = (collisionState->localOrigin).x;
  uVar5 = (collisionState->localOrigin).y;
  uVar6._0_4_ = (collisionState->localDirection).x;
  uVar6._4_4_ = (collisionState->localDirection).y;
  uStack7 = (undefined2)((uint)uVar6._4_4_ >> 0x10);
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  a.y = (float)(int)(CONCAT26(uStack7,(int6)uVar6) >> 0x20);
  a.x = (float)(undefined4)uVar6;
  a.z = fVar3;
  pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     ((Vector3 *)&stack0xffffffcc,a,100.0,(MethodInfo *)0x0);
  a_00.y = (float)uVar5;
  a_00.x = (float)uVar4;
  a_00.z = fVar2;
  pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                     ((Vector3 *)&stack0xffffffcc,a_00,*pVVar8,(MethodInfo *)0x0);
  fVar3 = (collisionState->localOrigin).z;
  fVar9 = pVVar8->z;
  uVar10 = (collisionState->localOrigin).y;
  pos.z = (int16_t)uVar10;
  uStack7 = (undefined2)((uint)uVar10 >> 0x10);
  pVVar8 = &collisionState->localDirection;
  uVar11._0_4_ = pVVar8->x;
  uVar11._4_4_ = pVVar8->y;
  uStack_1 = CONCAT44(&UNK_?,(undefined4)uStack_1);
  pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     ((Vector3 *)&stack0xffffffcc,*pVVar8,100.0,(MethodInfo *)0x0);
  fVar2 = pVVar8->y;
  uVar6 = CONCAT26(uStack7,CONCAT24(pos.z,fVar2));
  uStack7 = (undefined2)((uint)pVVar8->z >> 0x10);
  fVar12 = (float)((ulonglong)uVar6 >> 0x20);
  pVStack13 = (Vector3 *)&stack0xffffffcc;
  puVar14 = &UNK_?;
  a_01.y = fVar12;
  a_01.x = fVar2;
  a_01.z = fVar3;
  b.z._2_2_ = uStack7;
  b._0_10_ = *(unkbyte10 *)pVVar8;
  pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                     (pVStack13,a_01,b,(MethodInfo *)0x0);
  uStack7 = (undefined2)(uVar11 >> 0x30);
  point.z = 0.0;
  point.x = (float)(int)uVar11;
  point.y = (float)(int)(uVar11 >> 0x20);
  lineStart.y = (float)pVStack13;
  lineStart.x = (float)puVar14;
  lineStart.z = fVar9;
  fStack15 = fVar9;
  MathFunctions::MathFunctions_DistancePointLine
            (point,lineStart,*pVVar8,(float *)&stack0xfffffff8,(MethodInfo *)0x0);
  return fVar12 <= fVar2;
}


/* Void DrawAxisAlignedRect(Vector3, Vector3, Int32, Transform, Single) */

void Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_DrawAxisAlignedRect
               (Vector3 min,Vector3 max,int32_t ignoreAxis,Transform *t,float localIgnoreAxisValue,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  VStack_1.z = 0.0;
  VStack_1.x = 0.0;
  VStack_1.y = 0.0;
  VStack_2.x = 0.0;
  VStack_2.y = 0.0;
  VStack_3.x = 0.0;
  VStack_3.y = 0.0;
  VStack_4.x = 0.0;
  VStack_4.y = 0.0;
  MathFunctions::MathFunctions_Vector3ToVector2(&min,&VStack_4,ignoreAxis,(MethodInfo *)0x0);
  MathFunctions::MathFunctions_Vector3ToVector2(&max,&VStack_3,ignoreAxis,(MethodInfo *)0x0);
  pLVar5 = (List_1_UnityEngine_Vector4_ *)
           func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
  pLStack_6 = pLVar5;
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (pLVar5,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__);
  if (pLVar5 != (List_1_UnityEngine_Vector4_ *)0x0) {
    item.y = VStack_4.y;
    item.x = VStack_4.x;
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
    List_1_UnityEngine_Vector2__Add
              ((List_1_UnityEngine_Vector2_ *)pLVar5,item,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
              );
    VStack_7.x = 0.0;
    VStack_7.y = 0.0;
    puStack_8 = (undefined *)0x0;
    fStack_9 = VStack_3.y;
    func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
    List_1_UnityEngine_Vector2__Add
              ((List_1_UnityEngine_Vector2_ *)pLVar5,VStack_7,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
              );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
    List_1_UnityEngine_Vector2__Add
              ((List_1_UnityEngine_Vector2_ *)pLVar5,VStack_3,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
              );
    VStack_10.x = (float)&VStack_11;
    VStack_11.x = 0.0;
    VStack_11.y = 0.0;
    VStack_12.x = 0.0;
    VStack_10.z = VStack_4.y;
    VStack_10.y = VStack_3.x;
    func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
    List_1_UnityEngine_Vector2__Add
              ((List_1_UnityEngine_Vector2_ *)pLVar5,VStack_11,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
              );
    pLVar5 = (List_1_UnityEngine_Vector4_ *)func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
    List_1_UnityEngine_Vector4___ctor
              (pLVar5,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
    index = 0;
    while( true ) {
      VStack_1.z = 0.0;
      VStack_1.x = 0.0;
      VStack_1.y = 0.0;
      VStack_2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
                  List_1_UnityEngine_Vector2__get_Item
                            ((List_1_UnityEngine_Vector2_ *)pLStack_6,index,
                             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                            );
      MathFunctions::MathFunctions_Vector2ToVector3
                (&VStack_2,&VStack_1,ignoreAxis,localIgnoreAxisValue,(MethodInfo *)0x0);
      if (t == (Transform *)0x0) break;
      position.z = VStack_1.z;
      position.x = VStack_1.x;
      position.y = VStack_1.y;
      pUVar13 = (UnitySynchronizationContext_WorkRequest *)
               UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint
                         (&VStack_12,t,position,(MethodInfo *)0x0);
      if (pLVar5 == (List_1_UnityEngine_Vector4_ *)0x0) break;
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
      UnitySynchronizationContext+WorkRequest]::
      List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
                ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)pLVar5,*pUVar13,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                );
      index = index + 1;
      if (3 < index) {
        uVar14 = 0;
        do {
          uVar15 = uVar14 & 0x80000003;
          if ((int)uVar15 < 0) {
            uVar15 = (uVar15 - 1 | 0xfffffffc) + 1;
          }
          pLStack_6 = (List_1_UnityEngine_Vector4_ *)uVar15;
          pVVar16 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
                   List_1_UnityEngine_Vector3__get_Item
                             (&VStack_10,(List_1_UnityEngine_Vector3_ *)pLVar5,uVar15,
                              MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                             );
          VStack_12.y = pVVar16->x;
          VStack_12.z = pVVar16->y;
          fStack_17 = pVVar16->z;
          pVVar16 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
                   List_1_UnityEngine_Vector3__get_Item
                             ((Vector3 *)&stack0xffffff8c,(List_1_UnityEngine_Vector3_ *)pLVar5,
                              uVar15,
                              MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                             );
          uVar14 = uVar14 + 1;
          uStack_18._0_4_ = pVVar16->x;
          uStack_18._4_4_ = pVVar16->y;
          fVar19 = pVVar16->z;
          uVar15 = uVar14 & 0x80000003;
          if ((int)uVar15 < 0) {
            uVar15 = (uVar15 - 1 | 0xfffffffc) + 1;
          }
          pVVar16 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
                   List_1_UnityEngine_Vector3__get_Item
                             ((Vector3 *)&fStack_9,(List_1_UnityEngine_Vector3_ *)pLVar5,uVar15,
                              MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                             );
          uStack_20._0_4_ = pVVar16->x;
          uStack_20._4_4_ = pVVar16->y;
          fVar21 = pVVar16->z;
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            func_?();
          }
          a_00.z = fVar19;
          a_00.x = (float)(undefined4)uStack_18;
          a_00.y = (float)uStack_18._4_4_;
          b.z = fVar21;
          b.x = (float)(undefined4)uStack_20;
          b.y = (float)uStack_20._4_4_;
          pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                             ((Vector3 *)&stack0xffffff74,a_00,b,(MethodInfo *)0x0);
          uStack_18._0_4_ = pVVar16->x;
          uStack_18._4_4_ = pVVar16->y;
          fVar19 = pVVar16->z;
          pVVar16 = (Vector3 *)func_?();
          a.z = fVar19;
          a.x = (float)(undefined4)uStack_18;
          a.y = (float)uStack_18._4_4_;
          pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                             ((Vector3 *)&stack0xffffff5c,a,*pVVar16,(MethodInfo *)0x0);
          uStack_18._0_4_ = pVVar16->x;
          uStack_18._4_4_ = pVVar16->y;
          fVar19 = pVVar16->z;
          if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Debug);
          }
          start.z = fStack_17;
          start.x = VStack_12.y;
          start.y = VStack_12.z;
          end.z = fVar19;
          end.x = (float)(undefined4)uStack_18;
          end.y = (float)uStack_18._4_4_;
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_DrawLine_2
                    (start,end,(MethodInfo *)0x0);
        } while ((int)uVar14 < 4);
        return;
      }
    }
  }
  func_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* Void GetBoundRays(Ray, ICubeModelCollider) */

void Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_GetBoundRays
               (Ray ray,ICubeModelCollider *cmb,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = ray.m_Origin.x;
  fVar2 = ray.m_Origin.y;
  fVar3 = ray.m_Origin.z;
  fVar4 = ray.m_Direction.x;
  fVar5 = ray.m_Direction.y;
  fVar6 = ray.m_Direction.z;
  if ((((uint)(TypeInfo__MVSweptElipsoidCheck->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVSweptElipsoidCheck);
  }
  ray_00.m_Origin.y = fVar2;
  ray_00.m_Origin.x = fVar1;
  ray_00.m_Origin.z = fVar3;
  ray_00.m_Direction.x = fVar4;
  ray_00.m_Direction.y = fVar5;
  ray_00.m_Direction.z = fVar6;
  MVSweptElipsoidCheck_GetMaxAngleLocalAxisVector
            ((Vector3 *)&stack0xffffffe8,ray_00,cmb,(MethodInfo *)0x0);
  InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
            ((Vector3 *)&stack0xffffffe8,(InputToPlayerMovementAndroid *)&ray,(MethodInfo *)0x0);
  puVar7 = (undefined8 *)func_?();
  fVar1 = *(float *)(puVar7 + 1);
  fVar3 = (float)*puVar7;
  fVar4 = (float)((ulonglong)*puVar7 >> 0x20);
  puVar7 = (undefined8 *)func_?();
  uVar8 = *puVar7;
  fVar2 = *(float *)(puVar7 + 1);
  uVar9 = (undefined4)uVar8;
  uVar10 = (undefined4)((ulonglong)uVar8 >> 0x20);
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
    uVar8 = CONCAT44(uVar10,uVar9);
  }
  lhs.y = fVar4;
  lhs.x = fVar3;
  lhs.z = fVar1;
  rhs.z = fVar2;
  rhs.x = (float)(int)uVar8;
  rhs.y = (float)(int)((ulonglong)uVar8 >> 0x20);
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Cross
            ((Vector3 *)&stack0xffffffc4,lhs,rhs,(MethodInfo *)0x0);
  pVVar11 = (Vector3 *)func_?();
  uVar9 = pVVar11->y;
  fVar5 = pVVar11->z;
  lhs_00.y = fVar4;
  lhs_00.x = fVar3;
  lhs_00.z = fVar1;
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Cross
            ((Vector3 *)&stack0xffffffc4,lhs_00,*pVVar11,(MethodInfo *)0x0);
  pVVar11 = (Vector3 *)func_?();
  fVar1 = pVVar11->x;
  fVar2 = pVVar11->y;
  fVar3 = pVVar11->z;
  pVVar12 = TypeInfo__MVSweptElipsoidCheck->static_fields->circleCornersGetBoundRays;
  if (pVVar12 == (Vector3__Array *)0x0) goto code_?;
  a_03.y = (float)uVar9;
  a_03.x = fVar2;
  a_03.z = fVar5;
  fVar13 = fVar5;
  fVar14 = fVar3;
  pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                     ((Vector3 *)&stack0xffffffc4,a_03,*pVVar11,(MethodInfo *)0x0);
  fVar6 = pVVar11->y;
  fVar4 = pVVar11->z;
  if (pVVar12->max_length == 0) {
    ray.m_Direction.z = 0.0;
    ray.m_Direction.y = (float)&UNK_?;
    ray.m_Direction.y = (float)func_?();
    ray.m_Direction.x = (float)&UNK_?;
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
  }
  else {
    pVVar12->vector[0].x = pVVar11->x;
    pVVar12->vector[0].y = fVar6;
    pVVar12->vector[0].z = fVar4;
    pVVar12 = TypeInfo__MVSweptElipsoidCheck->static_fields->circleCornersGetBoundRays;
    if (pVVar12 == (Vector3__Array *)0x0) goto code_?;
    a.y = fVar14;
    a.x = fVar2;
    a.z = fVar5;
    b.y = fVar1;
    b.x = fVar13;
    b.z = fVar3;
    ray.m_Origin.x = fVar2;
    ray.m_Origin.y = fVar14;
    ray.m_Origin.z = fVar5;
    ray.m_Direction.x = fVar13;
    ray.m_Direction.y = fVar1;
    ray.m_Direction.z = fVar3;
    pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                       ((Vector3 *)&stack0xffffffc4,a,b,(MethodInfo *)0x0);
    fVar6 = pVVar11->y;
    fVar4 = pVVar11->z;
    if (pVVar12->max_length < 2) goto code_?;
    pVVar12->vector[1].x = pVVar11->x;
    pVVar12->vector[1].y = fVar6;
    pVVar12->vector[1].z = fVar4;
    pVVar12 = TypeInfo__MVSweptElipsoidCheck->static_fields->circleCornersGetBoundRays;
    if (pVVar12 == (Vector3__Array *)0x0) goto code_?;
    a_00.y = fVar14;
    a_00.x = fVar2;
    a_00.z = fVar5;
    pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_UnaryNegation
                       ((Vector3 *)&stack0xffffffc4,a_00,(MethodInfo *)0x0);
    b_00.y = fVar1;
    b_00.x = fVar13;
    b_00.z = fVar3;
    pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                       ((Vector3 *)&stack0xffffffc4,*pVVar11,b_00,(MethodInfo *)0x0);
    fVar6 = pVVar11->y;
    fVar4 = pVVar11->z;
    if (pVVar12->max_length < 3) goto code_?;
    pVVar12->vector[2].x = pVVar11->x;
    pVVar12->vector[2].y = fVar6;
    pVVar12->vector[2].z = fVar4;
    pVVar12 = TypeInfo__MVSweptElipsoidCheck->static_fields->circleCornersGetBoundRays;
    if (pVVar12 == (Vector3__Array *)0x0) goto code_?;
    a_01.y = fVar14;
    a_01.x = fVar2;
    a_01.z = fVar5;
    pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_UnaryNegation
                       ((Vector3 *)&stack0xffffffc4,a_01,(MethodInfo *)0x0);
    b_01.y = fVar1;
    b_01.x = fVar13;
    b_01.z = fVar3;
    pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                       ((Vector3 *)&stack0xffffffc4,*pVVar11,b_01,(MethodInfo *)0x0);
    fVar2 = pVVar11->y;
    fVar1 = pVVar11->z;
    if (3 < pVVar12->max_length) {
      pVVar12->vector[3].x = pVVar11->x;
      pVVar12->vector[3].y = fVar2;
      pVVar12->vector[3].z = fVar1;
      iVar15 = 0;
      while( true ) {
        if ((((uint)(TypeInfo__MVSweptElipsoidCheck->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_started == 0)) {
          func_?();
        }
        pVVar12 = TypeInfo__MVSweptElipsoidCheck->static_fields->circleCornersGetBoundRays;
        if (pVVar12 == (Vector3__Array *)0x0) break;
        if ((int)pVVar12->max_length <= iVar15) {
          return;
        }
        if ((((uint)(TypeInfo__MVSweptElipsoidCheck->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_started == 0)) {
          func_?();
        }
        if ((TypeInfo__MVSweptElipsoidCheck->static_fields->raysGetBoundRays == (Ray__Array *)0x0)
           || (TypeInfo__MVSweptElipsoidCheck->static_fields->circleCornersGetBoundRays ==
               (Vector3__Array *)0x0)) break;
        func_?();
        puVar7 = (undefined8 *)func_?();
        fVar1 = *(float *)(puVar7 + 1);
        uVar9 = (undefined4)*puVar7;
        uVar10 = (undefined4)((ulonglong)*puVar7 >> 0x20);
        puVar7 = (undefined8 *)func_?();
        uVar8 = *puVar7;
        fVar2 = *(float *)(puVar7 + 1);
        fVar3 = (float)uVar8;
        fVar4 = (float)((ulonglong)uVar8 >> 0x20);
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?();
          uVar8 = CONCAT44(fVar4,fVar3);
        }
        a_02.y = (float)uVar10;
        a_02.x = (float)uVar9;
        a_02.z = fVar1;
        b_02.z = fVar2;
        b_02.x = (float)(int)uVar8;
        b_02.y = (float)(int)((ulonglong)uVar8 >> 0x20);
        UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                  ((Vector3 *)&stack0xffffffac,a_02,b_02,(MethodInfo *)0x0);
        func_?();
        func_?();
        if (TypeInfo__MVSweptElipsoidCheck->static_fields->raysGetBoundRays == (Ray__Array *)0x0)
        break;
        InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                  ((Vector3 *)&stack0xffffffa0,(InputToPlayerMovementAndroid *)&ray,
                   (MethodInfo *)0x0);
        func_?();
        func_?();
        iVar15 = iVar15 + 1;
      }
      goto code_?;
    }
  }
  func_?();
  func_?();
code_?:
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Vector3 GetMaxAngleLocalAxisVector(Ray, ICubeModelCollider) */

Vector3 * Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_GetMaxAngleLocalAxisVector
                    (Vector3 *__return_storage_ptr__,Ray ray,ICubeModelCollider *cmb,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fStack_1 = 0.0;
  fStack_2 = 0.0;
  uStack_3 = 0;
  uStack_4 = 0;
  func_?(&uStack_3,0,0,0,0);
  func_?(&uStack_4,0,0,0,0);
  fStack_5 = _UNK_?;
  uStack_6 = (ulonglong)(uint)uStack_6;
  while (cmb != (ICubeModelCollider *)0x0) {
    pIVar7 = cmb->klass;
    uVar8 = 0;
    uVar9._0_1_ = (pIVar7->_1).rank;
    uVar9._1_1_ = (pIVar7->_1).minimumAlignment;
    if (uVar9 != 0) {
      do {
        if (pIVar7->interfaceOffsets[uVar8].interfaceType ==
            (Il2CppClass *)TypeInfo__ICubeModelCollider) {
          ppMVar10 = &(&(cmb->klass->vtable).get_WorldRotation)
                     [pIVar7->interfaceOffsets[uVar8].offset].method;
          goto code_?;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar9);
    }
    ppMVar10 = (MethodInfo **)func_?(cmb,TypeInfo__ICubeModelCollider,6);
code_?:
    puVar11 = (undefined4 *)(*(code *)*ppMVar10)(auStack_12,cmb,ppMVar10[1]);
    uStack_13 = *puVar11;
    uStack_14 = puVar11[1];
    uStack_15 = *(undefined8 *)(puVar11 + 2);
    if ((((uint)(TypeInfo__MVSweptElipsoidCheck->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVSweptElipsoidCheck);
    }
    if (TypeInfo__MVSweptElipsoidCheck->static_fields->testVectorGetMaxAngleLocalAxisVector ==
        (Vector3__Array *)0x0) break;
    iVar16 = (int)uStack_6._4_4_;
    puVar17 = (undefined8 *)func_?(uStack_6._4_4_);
    uStack_6 = *puVar17;
    fVar18 = *(float *)(puVar17 + 1);
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Quaternion);
    }
    rotation.y = (float)uStack_14;
    rotation.x = (float)uStack_13;
    rotation.z = (float)(undefined4)uStack_15;
    rotation.w = uStack_15._4_4_;
    point.z = fVar18;
    point.x = (float)(uint)uStack_6;
    point.y = uStack_6._4_4_;
    pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                        (&VStack_20,rotation,point,(MethodInfo *)0x0);
    uStack_4._0_4_ = pVVar19->x;
    uStack_4._4_4_ = pVVar19->y;
    fStack_2 = pVVar19->z;
    pVVar19 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                        (&VStack_21,(InputToPlayerMovementAndroid *)&ray,(MethodInfo *)0x0);
    uStack_15._0_4_ = pVVar19->x;
    uStack_15._4_4_ = pVVar19->y;
    fVar18 = pVVar19->z;
    puVar17 = (undefined8 *)func_?(auStack_22,&uStack_4,0);
    uStack_23 = *puVar17;
    fVar24 = *(float *)(puVar17 + 1);
    uStack_6._4_4_ = fVar24;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    lhs.z = fVar18;
    lhs.x = (float)(undefined4)uStack_15;
    lhs.y = uStack_15._4_4_;
    rhs.z = uStack_6._4_4_;
    rhs.x = (float)(undefined4)uStack_23;
    rhs.y = (float)uStack_23._4_4_;
    uStack_6._4_4_ =
         UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Dot(lhs,rhs,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Mathf);
    }
    fVar18 = (float)(double)CONCAT44((uint)((ulonglong)(double)uStack_6._4_4_ >> 0x20) &
                                     _UNK_?,SUB84((double)uStack_6._4_4_,0) & _UNK_?)
    ;
    if (fVar18 < fStack_5) {
      uStack_3 = uStack_4;
      fStack_1 = fStack_2;
      fStack_5 = fVar18;
    }
    uStack_6 = CONCAT44(iVar16 + 1,(uint)uStack_6);
    if (2 < iVar16 + 1) {
      __return_storage_ptr__->x = (float)(undefined4)uStack_3;
      __return_storage_ptr__->y = (float)uStack_3._4_4_;
      __return_storage_ptr__->z = fStack_1;
      return __return_storage_ptr__;
    }
  }
  func_?(0);
  pcVar25 = (code *)swi(3);
  pVVar19 = (Vector3 *)(*pcVar25)();
  return pVVar19;
}


/* Vector3 GetPlaneNormal(Vector3) */

Vector3 * Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_GetPlaneNormal
                    (Vector3 *__return_storage_ptr__,Vector3 localDir,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?();
  }
  fVar1 = (float)(double)CONCAT44((uint)((ulonglong)(double)localDir.x >> 0x20) & _UNK_?,
                                  SUB84((double)localDir.x,0) & _UNK_?);
  fVar2 = (float)(double)CONCAT44((uint)((ulonglong)(double)localDir.y >> 0x20) & _UNK_?,
                                  SUB84((double)localDir.y,0) & _UNK_?);
  if (fVar2 <= fVar1) {
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?();
    }
    if ((float)(double)CONCAT44((uint)((ulonglong)(double)localDir.z >> 0x20) & _UNK_?,
                                SUB84((double)localDir.z,0) & _UNK_?) <= fVar1) {
      localDir.y = 0.0;
      localDir.z = 0.0;
      if (0.0 <= localDir.x) {
        if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
          func_?();
        }
        fVar3 = (float10)func_?((double)localDir.x);
        localDir.x = (float)fVar3;
      }
      else {
        if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
          func_?();
        }
        fVar3 = (float10)func_?((double)localDir.x);
        localDir.x = (float)fVar3;
      }
      goto code_?;
    }
  }
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?();
  }
  if (fVar1 <= fVar2) {
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?();
    }
    if ((float)(double)CONCAT44((uint)((ulonglong)(double)localDir.z >> 0x20) & _UNK_?,
                                SUB84((double)localDir.z,0) & _UNK_?) <= fVar2) {
      localDir.x = 0.0;
      localDir.z = 0.0;
      if (0.0 <= localDir.y) {
        if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
          func_?();
        }
        fVar3 = (float10)func_?((double)localDir.y);
        localDir.y = (float)fVar3;
      }
      else {
        if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
          func_?();
        }
        fVar3 = (float10)func_?((double)localDir.y);
        localDir.y = (float)fVar3;
      }
      goto code_?;
    }
  }
  localDir.y = 0.0;
  localDir.x = 0.0;
  if (0.0 <= localDir.z) {
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?();
    }
    fVar3 = (float10)func_?((double)localDir.z);
  }
  else {
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?();
    }
    fVar3 = (float10)func_?((double)localDir.z);
  }
  localDir.z = (float)fVar3;
code_?:
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
  }
  a.y = localDir.y;
  a.x = localDir.x;
  a.z = localDir.z;
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     (&localDir,a,-1.0,(MethodInfo *)0x0);
  fVar1 = pVVar4->y;
  fVar2 = pVVar4->z;
  __return_storage_ptr__->x = pVVar4->x;
  __return_storage_ptr__->y = fVar1;
  __return_storage_ptr__->z = fVar2;
  return __return_storage_ptr__;
}


/* Void GetRaysProjectedOnPlane(Ray[], Plane ByRef, Vector3, Vector3) */

void Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_GetRaysProjectedOnPlane
               (Ray__Array *boundRays,Plane *projectPlane,Vector3 planeOrigin,Vector3 planeNormal,
               MethodInfo *method)

{
  uStack_1 = CONCAT44(uStack_2,unaff_EBX);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = uStack_1 & 0xffffffff;
  fStack_3 = 0.0;
  uStack_4 = 0;
  uStack_5 = 0;
  uStack_6 = 0;
  if ((((uint)(TypeInfo__MVSweptElipsoidCheck->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVSweptElipsoidCheck);
  }
  pVVar7 = TypeInfo__MVSweptElipsoidCheck->static_fields->pointsOnPlane;
  if ((pVVar7 == (Vector3__Array *)0x0) || (boundRays == (Ray__Array *)0x0)) {
code_?:
    func_?(0);
code_?:
    uVar8 = func_?(0);
    func_?(uVar8);
code_?:
    uVar8 = 0;
    uVar9 = func_?(0,0);
    func_?(uVar9);
code_?:
    uVar8 = func_?(0,uVar8);
    func_?(uVar8);
code_?:
    uVar8 = 0;
    uVar9 = func_?(0,0);
    func_?(uVar9);
code_?:
    uVar8 = func_?(0,uVar8);
    func_?(uVar8);
code_?:
    uVar8 = 0;
    uVar9 = func_?(0,0);
    func_?(uVar9);
  }
  else {
    if (boundRays->max_length == 0) goto code_?;
    pRVar10 = boundRays->vector;
    puVar11 = (undefined8 *)func_?(&fStack_12,pRVar10,0);
    uVar13 = *puVar11;
    fVar14 = *(float *)(puVar11 + 1);
    if (pVVar7->max_length == 0) goto code_?;
    pVVar7->vector[0].x = (float)(int)uVar13;
    pVVar7->vector[0].y = (float)(int)((ulonglong)uVar13 >> 0x20);
    pVVar7->vector[0].z = fVar14;
    pVVar7 = TypeInfo__MVSweptElipsoidCheck->static_fields->pointsOnPlane;
    if (pVVar7 == (Vector3__Array *)0x0) goto code_?;
    uVar8 = 0;
    if (boundRays->max_length < 2) goto code_?;
    puVar11 = (undefined8 *)func_?(&fStack_12,boundRays->vector + 1,0);
    uVar13 = *puVar11;
    fVar14 = *(float *)(puVar11 + 1);
    if (pVVar7->max_length < 2) goto code_?;
    pVVar7->vector[1].x = (float)(int)uVar13;
    pVVar7->vector[1].y = (float)(int)((ulonglong)uVar13 >> 0x20);
    pVVar7->vector[1].z = fVar14;
    pVVar7 = TypeInfo__MVSweptElipsoidCheck->static_fields->pointsOnPlane;
    if (pVVar7 == (Vector3__Array *)0x0) goto code_?;
    uVar8 = 0;
    if (boundRays->max_length < 3) goto code_?;
    puVar11 = (undefined8 *)func_?(&fStack_12,boundRays->vector + 2,0);
    uVar13 = *puVar11;
    fVar14 = *(float *)(puVar11 + 1);
    if (pVVar7->max_length < 3) goto code_?;
    pVVar7->vector[2].x = (float)(int)uVar13;
    pVVar7->vector[2].y = (float)(int)((ulonglong)uVar13 >> 0x20);
    pVVar7->vector[2].z = fVar14;
    pVVar7 = TypeInfo__MVSweptElipsoidCheck->static_fields->pointsOnPlane;
    if (pVVar7 == (Vector3__Array *)0x0) goto code_?;
    uVar8 = 0;
    if (3 < boundRays->max_length) {
      puVar11 = (undefined8 *)func_?(&fStack_12,boundRays->vector + 3,0);
      uVar13 = *puVar11;
      fVar14 = *(float *)(puVar11 + 1);
      if (pVVar7->max_length < 4) goto code_?;
      pVVar7->vector[3].x = (float)(int)uVar13;
      pVVar7->vector[3].y = (float)(int)((ulonglong)uVar13 >> 0x20);
      pVVar7->vector[3].z = fVar14;
      pMVar15 = (MethodInfo *)0x0;
      while (pMVar15 < (MethodInfo *)boundRays->max_length) {
        fStack_16 = (pRVar10->m_Origin).x;
        fStack_12 = (pRVar10->m_Origin).y;
        uStack_17 = *(undefined8 *)&(pRVar10->m_Origin).z;
        uStack_18._0_4_ = (pRVar10->m_Direction).y;
        uStack_18._4_4_ = (pRVar10->m_Direction).z;
        if ((((uint)(TypeInfo__MVSweptElipsoidCheck->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVSweptElipsoidCheck);
        }
        if (TypeInfo__MVSweptElipsoidCheck->static_fields->pointsOnPlane == (Vector3__Array *)0x0)
        goto code_?;
        pVVar19 = (Vector3 *)
                 func_?(pMVar15,(projectPlane->m_Normal).x,(projectPlane->m_Normal).y,
                                 (projectPlane->m_Normal).z,projectPlane->m_Distance,0);
        ray.m_Origin.y = fStack_12;
        ray.m_Origin.x = fStack_16;
        ray.m_Origin.z = (float)(undefined4)uStack_17;
        ray.m_Direction.x = (float)uStack_17._4_4_;
        ray.m_Direction.y = (float)(undefined4)uStack_18;
        ray.m_Direction.z = (float)uStack_18._4_4_;
        bVar20 = MVSweptElipsoidCheck_RayCast(ray,pVVar19,in_stack_21,in_stack_22);
        if (bVar20 == 0) {
          uVar8 = func_?(pMVar15,0);
          puVar11 = (undefined8 *)func_?(auStack_23,uVar8);
          uStack_17 = *puVar11;
          uStack_18 = CONCAT44(*(undefined4 *)(puVar11 + 1),(undefined4)uStack_18);
          method_00 = pMVar15;
          this = (InputToPlayerMovementAndroid *)func_?(pMVar15,0);
          pVVar19 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                             (&VStack_24,this,method_00);
          uStack_25._0_4_ = pVVar19->x;
          uStack_25._4_4_ = pVVar19->y;
          fStack_26 = pVVar19->z;
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Vector3);
          }
          a.z = fStack_26;
          a.x = (float)(undefined4)uStack_25;
          a.y = (float)uStack_25._4_4_;
          pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_UnaryNegation
                             (&VStack_27,a,(MethodInfo *)0x0);
          uStack_1._0_4_ = pVVar19->x;
          uStack_2 = pVVar19->y;
          fStack_3 = pVVar19->z;
          uStack_4 = 0;
          func_?(&uStack_2,(int)uStack_17,(int)((ulonglong)uStack_17 >> 0x20),
                          uStack_18._4_4_);
          uStack_28 = uStack_2;
          fStack_29 = fStack_3;
          uStack_25 = CONCAT44(uStack_5,uStack_4);
          uStack_17 = uStack_6;
          if ((((uint)(TypeInfo__MVSweptElipsoidCheck->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVSweptElipsoidCheck);
          }
          if (TypeInfo__MVSweptElipsoidCheck->static_fields->pointsOnPlane == (Vector3__Array *)0x0)
          goto code_?;
          pVVar19 = (Vector3 *)
                   func_?(pMVar15,(projectPlane->m_Normal).x,(projectPlane->m_Normal).y,
                                   (projectPlane->m_Normal).z,projectPlane->m_Distance,0);
          ray_00.m_Origin.y = fStack_29;
          ray_00.m_Origin.x = (float)uStack_28;
          ray_00.m_Origin.z = (float)(undefined4)uStack_25;
          ray_00.m_Direction.x = (float)uStack_25._4_4_;
          ray_00.m_Direction.y = (float)(undefined4)uStack_17;
          ray_00.m_Direction.z = (float)uStack_17._4_4_;
          MVSweptElipsoidCheck_RayCast(ray_00,pVVar19,in_stack_21,in_stack_22);
        }
        pMVar15 = (MethodInfo *)((int)&pMVar15->methodPointer + 1);
        pRVar10 = pRVar10 + 1;
        if (3 < (int)pMVar15) {
          return;
        }
      }
      goto code_?;
    }
  }
  uVar8 = func_?(0,uVar8);
  func_?(uVar8);
code_?:
  uVar8 = func_?(0,0);
  func_?(uVar8);
  pcVar30 = (code *)swi(3);
  (*pcVar30)();
  return;
}


/* Int32 GetScanAxis(Vector3) */

int32_t Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_GetScanAxis
                  (Vector3 scanRectNormal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = 0;
  while( true ) {
    fVar2 = (float10)func_?(&scanRectNormal,iVar1,0);
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Mathf);
    }
    if (_UNK_? <
        (float)(double)CONCAT44((uint)((ulonglong)(double)(float)fVar2 >> 0x20) & _UNK_?,
                                SUB84((double)(float)fVar2,0) & _UNK_?)) break;
    iVar1 = iVar1 + 1;
    if (2 < iVar1) {
      arg1 = (Object *)func_?(TypeInfo__UnityEngine__Vector3,&stack0xffffffec);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      message = mscorlib.dll::System::String::String_Concat
                          ((Object *)StringLiteral_No_scan_axis_found_,arg1,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)message,(MethodInfo *)0x0);
      return -1;
    }
  }
  return iVar1;
}


/* Void HandleCube(VoxelHit ByRef, IntVector, Vector3, Single, CollisionState ByRef) */

void Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_HandleCube
               (VoxelHit *vh,IntVector pos,Vector3 radius,float distance,
               CollisionState *collisionState,MethodInfo *method)

{
  pCVar1 = collisionState;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  iVar2 = pos.y;
  iVar3 = pos.x;
  iVar4 = pos.z;
  if ((((uint)(TypeInfo__MVSweptElipsoidCheck->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_started == 0)) {
    func_?();
  }
  if (iVar3 < (collisionState->minBounds).x) {
    return;
  }
  if (iVar2 < (collisionState->minBounds).y) {
    return;
  }
  if (iVar4 < (collisionState->minBounds).z) {
    return;
  }
  if ((collisionState->maxBounds).x < iVar3) {
    return;
  }
  if ((collisionState->maxBounds).y < iVar2) {
    return;
  }
  if ((collisionState->maxBounds).z < iVar4) {
    return;
  }
  if ((((uint)(TypeInfo__MVSweptElipsoidCheck->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_started == 0)) {
    func_?();
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  fStack_5 = 0.0;
  puStack_6 = (undefined *)0x0;
  func_?();
  fVar7 = (collisionState->localOrigin).z;
  fVar8 = (collisionState->localDirection).z;
  fVar9 = (collisionState->localOrigin).x;
  fVar10 = (collisionState->localOrigin).y;
  uVar11 = (collisionState->localDirection).x;
  fVar12 = (collisionState->localDirection).y;
  uVar13 = (undefined2)uVar11;
  uVar14 = (undefined2)((uint)uVar11 >> 0x10);
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
  }
  VVar15.x._2_2_ = uVar14;
  VVar15.x._0_2_ = uVar13;
  VVar15.y = fVar12;
  VVar15.z = fVar8;
  pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                      ((Vector3 *)&stack0xffffffc4,VVar15,100.0,(MethodInfo *)0x0);
  fVar8 = pVVar16->y;
  fVar12 = pVVar16->z;
  fVar17 = 0.0;
  a_00.y = fVar10;
  a_00.x = fVar9;
  a_00.z = fVar7;
  pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                      ((Vector3 *)&stack0xffffffc4,a_00,*pVVar16,(MethodInfo *)0x0);
  fVar9 = (collisionState->localOrigin).z;
  puVar18 = (undefined *)pVVar16->z;
  pMVar19 = (MethodInfo *)(collisionState->localOrigin).y;
  uVar13 = 0;
  uVar14 = 0x42c8;
  pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                      ((Vector3 *)&stack0xffffffc4,collisionState->localDirection,100.0,pMVar19);
  fVar7 = pVVar16->x;
  fVar20 = pVVar16->y;
  fVar10 = 0.0;
  a_01.x._2_2_ = uVar14;
  a_01.x._0_2_ = uVar13;
  a_01.y = (float)pMVar19;
  a_01.z = fVar9;
  pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                      ((Vector3 *)&stack0xffffffc4,a_01,*pVVar16,(MethodInfo *)0x0);
  pos._0_4_ = &stack0xfffffff4;
  uVar21 = pVVar16->x;
  uVar22 = pVVar16->y;
  vh = (VoxelHit *)pVVar16->z;
  pos.z = 0;
  uStack23 = 0;
  uVar13 = SUB42(fVar9,0);
  uVar14 = (undefined2)((uint)fVar9 >> 0x10);
  point.y = fVar20;
  point.x = fVar7;
  point.z = fVar10;
  lineStart.y._0_2_ = uVar13;
  lineStart.x = (float)pMVar19;
  lineStart.y._2_2_ = uVar14;
  lineStart.z = (float)puVar18;
  fVar24 = (float)uVar22;
  VVar15.x = (float)uVar21;
  VVar15 = (Vector3)CONCAT84(VVar15._0_8_,VVar15.x);
  MathFunctions::MathFunctions_DistancePointLine
            (point,lineStart,VVar15,(float *)pos._0_4_,(MethodInfo *)0x0);
  if ((float)pMVar19 < (float)CONCAT22(uVar14,uVar13)) {
    return;
  }
  if (collisionState->cmb != (ICubeModelCollider *)0x0) {
    pIVar25 = collisionState->cmb->klass;
    uVar26 = 0;
    uVar27._0_1_ = (pIVar25->_1).rank;
    uVar27._1_1_ = (pIVar25->_1).minimumAlignment;
    pVVar28 = (Vector3__Array *)pos._0_4_;
    if (uVar27 != 0) {
      do {
        if (pIVar25->interfaceOffsets[uVar26].interfaceType ==
            (Il2CppClass *)TypeInfo__ICubeModelCollider) {
          ppMVar29 = &(&(pIVar25->vtable).GetCube)[pIVar25->interfaceOffsets[uVar26].offset].method;
          goto code_?;
        }
        uVar26 = uVar26 + 1;
      } while (uVar26 < uVar27);
    }
    ppMVar29 = (MethodInfo **)func_?();
code_?:
    pTVar30 = (ThemeAttribute_1_System_Boolean_ *)(*(code *)*ppMVar29)();
    uVar13 = SUB42(pTVar30,0);
    uVar14 = (undefined2)((uint)pTVar30 >> 0x10);
    if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
      func_?();
    }
    collisionState = (CollisionState *)&UNK_?;
    bVar31 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Inequality
                       ((CubeBase *)pTVar30,(CubeBase *)0x0,(MethodInfo *)0x0);
    if (bVar31 == 0) {
      return;
    }
    if (pTVar30 != (ThemeAttribute_1_System_Boolean_ *)0x0) {
      bVar31 = ThemeAttributes::ThemeAttribute`1[System::Boolean]::
               ThemeAttribute_1_System_Boolean__get_Value(pTVar30,(MethodInfo *)0x0);
      if (bVar31 == 0x3f) {
        return;
      }
      if ((((uint)(TypeInfo__MVSweptElipsoidCheck->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_started == 0)) {
        func_?();
      }
      if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000) != 0)
         && ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
        func_?();
      }
      MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_GetCorners
                ((CubeBase *)pTVar30,
                 &TypeInfo__MVSweptElipsoidCheck->static_fields->cachedCornersElipsoidSpace,
                 (MethodInfo *)0x0);
      func_?();
      iVar32 = 0;
      while( true ) {
        if ((((uint)(TypeInfo__MVSweptElipsoidCheck->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_started == 0)) {
          func_?();
        }
        pVVar33 = TypeInfo__MVSweptElipsoidCheck->static_fields->cachedCornersElipsoidSpace;
        if (pVVar33 == (Vector3__Array *)0x0) goto code_?;
        if ((int)pVVar33->max_length <= iVar32) break;
        if ((((uint)(TypeInfo__MVSweptElipsoidCheck->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_started == 0)) {
          func_?();
        }
        if (TypeInfo__MVSweptElipsoidCheck->static_fields->cachedCornersElipsoidSpace ==
            (Vector3__Array *)0x0) goto code_?;
        puVar34 = (undefined8 *)func_?();
        uVar35 = CONCAT44(fVar12,fVar8);
        fVar9 = *(float *)(puVar34 + 1);
        uVar36 = *puVar34;
        uVar37 = (undefined2)uVar36;
        uVar38 = (undefined2)((ulonglong)uVar36 >> 0x10);
        fVar7 = (float)((ulonglong)uVar36 >> 0x20);
        fVar10 = fVar17;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          fVar20 = fVar8;
          fVar39 = fVar12;
          func_?();
          uVar36 = CONCAT44(fVar7,CONCAT22(uVar38,uVar37));
          uVar35 = CONCAT44(fVar39,fVar20);
        }
        pos.z = (int16_t)uVar35;
        uStack23 = (undefined2)((ulonglong)uVar35 >> 0x10);
        vh = (VoxelHit *)((ulonglong)uVar36 >> 0x20);
        pos.x = SUB42(fVar9,0);
        pos.y = (int16_t)((uint)fVar9 >> 0x10);
        puVar18 = &UNK_?;
        a.z._0_2_ = pos.x;
        a.x = (float)(int)uVar36;
        a.y = (float)(int)((ulonglong)uVar36 >> 0x20);
        a.z._2_2_ = pos.y;
        b.z = fVar10;
        b.x = (float)(int)uVar35;
        b.y = (float)(int)((ulonglong)uVar35 >> 0x20);
        pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                            ((Vector3 *)&fStack_5,a,b,(MethodInfo *)0x0);
        fVar9 = pVVar16->z;
        *puVar34 = *(undefined8 *)pVVar16;
        *(float *)(puVar34 + 1) = fVar9;
        pVVar28 = TypeInfo__MVSweptElipsoidCheck->static_fields->cachedCornersElipsoidSpace;
        if (pVVar28 == (Vector3__Array *)0x0) goto code_?;
        func_?();
        collisionState = (CollisionState *)&stack0xffffffc4;
        puVar34 = (undefined8 *)func_?();
        uVar36 = *puVar34;
        uVar40 = *(undefined4 *)(puVar34 + 1);
        uVar37 = (undefined2)uVar36;
        uVar38 = (undefined2)((ulonglong)uVar36 >> 0x10);
        fVar9 = (float)((ulonglong)uVar36 >> 0x20);
        puVar34 = (undefined8 *)func_?();
        iVar32 = iVar32 + 1;
        *puVar34 = CONCAT44(fVar9,CONCAT22(uVar38,uVar37));
        *(undefined4 *)(puVar34 + 1) = uVar40;
      }
      if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000) != 0)
         && ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
        func_?();
      }
      pFVar41 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_FaceFlagsArray
                          ((MethodInfo *)0x0);
      fVar9 = 0.0;
      if (pFVar41 != (FaceFlags__Enum__Array *)0x0) {
        pTVar30 = (ThemeAttribute_1_System_Boolean_ *)CONCAT22(uVar14,uVar13);
        pFVar42 = pFVar41;
        goto code_?;
      }
    }
  }
code_?:
  func_?();
code_?:
  pos.z = 0;
  uStack23 = 0;
  pos.x = 0x2ace;
  pos.y = 0x1047;
  uVar40 = func_?();
  pos.x = (int16_t)uVar40;
  pos.y = (int16_t)((uint)uVar40 >> 0x10);
  func_?();
  pcVar43 = (code *)swi(3);
  (*pcVar43)();
  return;
code_?:
  if ((int)pFVar41->max_length <= (int)fVar9) {
    if (((char)((uint)puVar18 >> 0x18) != '\0') && (pCVar1->firstHitDetected == 0)) {
      pos.z = (int16_t)pCVar1->scanAxis;
      uStack23 = (undefined2)((uint)pCVar1->scanAxis >> 0x10);
      pos._0_4_ = &pos;
      sVar44 = func_?();
      pCVar1->firstHitScanAxis = (int)sVar44;
      pCVar1->firstHitDetected = 1;
    }
    return;
  }
  if (pFVar41->max_length <= (uint)fVar9) goto code_?;
  bVar45 = *(byte *)((int)pFVar41->vector + (int)fVar9);
  pos.z = (int16_t)pTVar30;
  uStack23 = (undefined2)((uint)pTVar30 >> 0x10);
  pVVar28 = (Vector3__Array *)CONCAT31((int3)((uint)pVVar28 >> 8),bVar45);
  pos.x = 0x27c2;
  pos.y = 0x1047;
  bVar31 = ThemeAttributes::ThemeAttribute`1[System::Boolean]::
           ThemeAttribute_1_System_Boolean__get_Value(pTVar30,(MethodInfo *)0x0);
  if ((bVar45 & bVar31) == 0) {
    pFVar41 = pFVar42;
    pVVar33 = pVVar28;
    if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
      func_?();
      pFVar41 = pFVar42;
      pVVar33 = pVVar28;
    }
    pVVar28 = pVVar33;
    fVar10 = (float)MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_FaceFlagToFace
                             ((FaceFlags__Enum)pVVar33,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVSweptElipsoidCheck->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_started == 0)) {
      func_?();
    }
    fVar12 = (float)MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_FaceFlagToFace
                             ((FaceFlags__Enum)pVVar33,(MethodInfo *)0x0);
    collisionState = (CollisionState *)0x0;
    faceVertices = &TypeInfo__MVSweptElipsoidCheck->static_fields->cachedFaceElipsoidSpace;
    corners = &TypeInfo__MVSweptElipsoidCheck->static_fields->cachedCornersElipsoidSpace;
    MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_GetFace
              (corners,faceVertices,(Face__Enum)fVar12,(MethodInfo *)0x0);
    if (TypeInfo__MVSweptElipsoidCheck->static_fields->cachedFaceElipsoidSpace ==
        (Vector3__Array *)0x0) goto code_?;
    puVar34 = (undefined8 *)func_?();
    fVar7 = *(float *)(puVar34 + 1);
    puStack_6 = (undefined *)*puVar34;
    fVar8 = (float)((ulonglong)*puVar34 >> 0x20);
    if (TypeInfo__MVSweptElipsoidCheck->static_fields->cachedFaceElipsoidSpace ==
        (Vector3__Array *)0x0) goto code_?;
    puVar34 = (undefined8 *)func_?();
    fVar20 = *(float *)(puVar34 + 1);
    fVar17 = (float)*puVar34;
    fVar39 = (float)((ulonglong)*puVar34 >> 0x20);
    if (TypeInfo__MVSweptElipsoidCheck->static_fields->cachedFaceElipsoidSpace ==
        (Vector3__Array *)0x0) goto code_?;
    pVVar16 = (Vector3 *)func_?();
    pCVar1 = (CollisionState *)0x0;
    uVar40 = CONCAT22(pos.y,pos.x);
    uVar36 = CONCAT44(corners,&UNK_?);
    pMVar19 = (MethodInfo *)0x0;
    pCVar46 = pCVar1;
    pfVar47 = (float *)&stack0xfffffe64;
    for (iVar32 = 0x31; cVar48 = (char)((uint)puVar18 >> 0x18), iVar32 != 0; iVar32 = iVar32 + -1) {
      *pfVar47 = (pCVar46->localOrigin).x;
      pCVar46 = (CollisionState *)&(pCVar46->localOrigin).y;
      pfVar47 = pfVar47 + 1;
    }
    cube = (Cube *)CONCAT22(uVar14,uVar13);
    fVar49 = pVVar16->z;
    p2_00.y = fVar39;
    p2_00.x = fVar17;
    p1_00.y = fVar8;
    p1_00.x = (float)puStack_6;
    p1_00.z = fVar7;
    p2_00.z = fVar20;
    radiusVec_00.z = (float)faceVertices;
    radiusVec_00.x = (float)&UNK_?;
    radiusVec_00.y = (float)corners;
    pos_01.z = pos.z;
    pos_01.x = pos.x;
    pos_01.y = pos.y;
    collisionState_01.firstHitScanAxis = (int32_t)in_stack_50;
    auVar51 = in_stack_52._0_12_;
    auVar53 = in_stack_52._12_12_;
    auVar54 = in_stack_52._24_12_;
    auVar55 = in_stack_52._36_12_;
    auVar56 = in_stack_52._48_12_;
    auVar57 = in_stack_52._60_12_;
    auVar58 = in_stack_52._76_64_;
    uVar59 = in_stack_52._144_6_;
    uVar60 = in_stack_52._150_6_;
    collisionState_01.localOrigin.x = (float)auVar51._0_4_;
    collisionState_01.localOrigin.y = (float)auVar51._4_4_;
    collisionState_01.localOrigin.z = (float)auVar51._8_4_;
    collisionState_01.localHitPoint.x = (float)auVar53._0_4_;
    collisionState_01.localHitPoint.y = (float)auVar53._4_4_;
    collisionState_01.localHitPoint.z = (float)auVar53._8_4_;
    collisionState_01.localNormal.x = (float)auVar54._0_4_;
    collisionState_01.localNormal.y = (float)auVar54._4_4_;
    collisionState_01.localNormal.z = (float)auVar54._8_4_;
    collisionState_01.localDirection.x = (float)auVar55._0_4_;
    collisionState_01.localDirection.y = (float)auVar55._4_4_;
    collisionState_01.localDirection.z = (float)auVar55._8_4_;
    collisionState_01.origin.x = (float)auVar56._0_4_;
    collisionState_01.origin.y = (float)auVar56._4_4_;
    collisionState_01.origin.z = (float)auVar56._8_4_;
    collisionState_01.direction.x = (float)auVar57._0_4_;
    collisionState_01.direction.y = (float)auVar57._4_4_;
    collisionState_01.direction.z = (float)auVar57._8_4_;
    collisionState_01.cmb = (ICubeModelCollider *)in_stack_52._72_4_;
    collisionState_01.localToElipsoidSpace.m00 = (float)auVar58._0_4_;
    collisionState_01.localToElipsoidSpace.m10 = (float)auVar58._4_4_;
    collisionState_01.localToElipsoidSpace.m20 = (float)auVar58._8_4_;
    collisionState_01.localToElipsoidSpace.m30 = (float)auVar58._12_4_;
    collisionState_01.localToElipsoidSpace.m01 = (float)auVar58._16_4_;
    collisionState_01.localToElipsoidSpace.m11 = (float)auVar58._20_4_;
    collisionState_01.localToElipsoidSpace.m21 = (float)auVar58._24_4_;
    collisionState_01.localToElipsoidSpace.m31 = (float)auVar58._28_4_;
    collisionState_01.localToElipsoidSpace.m02 = (float)auVar58._32_4_;
    collisionState_01.localToElipsoidSpace.m12 = (float)auVar58._36_4_;
    collisionState_01.localToElipsoidSpace.m22 = (float)auVar58._40_4_;
    collisionState_01.localToElipsoidSpace.m32 = (float)auVar58._44_4_;
    collisionState_01.localToElipsoidSpace.m03 = (float)auVar58._48_4_;
    collisionState_01.localToElipsoidSpace.m13 = (float)auVar58._52_4_;
    collisionState_01.localToElipsoidSpace.m23 = (float)auVar58._56_4_;
    collisionState_01.localToElipsoidSpace.m33 = (float)auVar58._60_4_;
    collisionState_01.scanAxis = in_stack_52._140_4_;
    collisionState_01.minBounds.x = (short)uVar59;
    collisionState_01.minBounds.y = (short)((uint6)uVar59 >> 0x10);
    collisionState_01.minBounds.z = (short)((uint6)uVar59 >> 0x20);
    collisionState_01.maxBounds.x = (short)uVar60;
    collisionState_01.maxBounds.y = (short)((uint6)uVar60 >> 0x10);
    collisionState_01.maxBounds.z = (short)((uint6)uVar60 >> 0x20);
    auVar51 = in_stack_61._8_12_;
    auVar53 = in_stack_61._20_12_;
    collisionState_01.firstHitDetected = in_stack_61[0];
    collisionState_01._161_3_ = in_stack_61._1_3_;
    collisionState_01.scaledMaxRadius = (float)in_stack_61._4_4_;
    collisionState_01.elipsoidSpaceOrigin.x = (float)auVar51._0_4_;
    collisionState_01.elipsoidSpaceOrigin.y = (float)auVar51._4_4_;
    collisionState_01.elipsoidSpaceOrigin.z = (float)auVar51._8_4_;
    collisionState_01.elipsoidSpaceDirection.x = (float)auVar53._0_4_;
    collisionState_01.elipsoidSpaceDirection.y = (float)auVar53._4_4_;
    collisionState_01.elipsoidSpaceDirection.z = (float)auVar53._8_4_;
    collisionState_01.elipsoidSpaceDistance = (float)in_stack_61._32_4_;
    pVVar62 = vh;
    fVar7 = fVar12;
    ppVVar63 = faceVertices;
    iVar2 = pos.z;
    fVar8 = fVar10;
    bVar31 = MVSweptElipsoidCheck_HandleTriangleTest
                       (p1_00,p2_00,*pVVar16,vh,fVar12,(Face__Enum)fVar10,cube,radiusVec_00,pos_01,
                        collisionState_01,pMVar19);
    fVar20 = (float)((uint)(bVar31 != 0 || cVar48 != '\0') << 0x18);
    if (TypeInfo__MVSweptElipsoidCheck->static_fields->cachedFaceElipsoidSpace ==
        (Vector3__Array *)0x0) goto code_?;
    puVar34 = (undefined8 *)func_?();
    fVar17 = *(float *)(puVar34 + 1);
    fVar39 = (float)*puVar34;
    fVar64 = (float)((ulonglong)*puVar34 >> 0x20);
    if (TypeInfo__MVSweptElipsoidCheck->static_fields->cachedFaceElipsoidSpace ==
        (Vector3__Array *)0x0) goto code_?;
    puVar34 = (undefined8 *)func_?();
    fVar65 = *(float *)(puVar34 + 1);
    puStack_6 = (undefined *)*puVar34;
    fVar66 = (float)((ulonglong)*puVar34 >> 0x20);
    if (TypeInfo__MVSweptElipsoidCheck->static_fields->cachedFaceElipsoidSpace ==
        (Vector3__Array *)0x0) goto code_?;
    pVVar16 = (Vector3 *)func_?();
    radiusVec.y = (float)corners;
    radiusVec.x = (float)&UNK_?;
    pos_00.y = pos.y;
    pos_00.x = pos.x;
    in_stack_50 = (MethodInfo *)0x0;
    pCVar46 = pCVar1;
    pfVar47 = (float *)&stack0xfffffe3c;
    for (iVar32 = 0x31; bVar45 = (byte)((uint)fVar20 >> 0x18), iVar32 != 0; iVar32 = iVar32 + -1) {
      *pfVar47 = (pCVar46->localOrigin).x;
      pCVar46 = (CollisionState *)&(pCVar46->localOrigin).y;
      pfVar47 = pfVar47 + 1;
    }
    pTVar30 = (ThemeAttribute_1_System_Boolean_ *)CONCAT22(uVar14,uVar13);
    p2.y = fVar66;
    p2.x = (float)puStack_6;
    p1.y = fVar64;
    p1.x = fVar39;
    p1.z = fVar17;
    p2.z = fVar65;
    radiusVec.z = (float)faceVertices;
    pos_00.z = pos.z;
    collisionState_00.localOrigin.y = (float)pVVar62;
    collisionState_00.localOrigin.x = fVar49;
    collisionState_00.localOrigin.z = fVar7;
    collisionState_00.localHitPoint.x = fVar10;
    collisionState_00.localHitPoint.y = (float)cube;
    collisionState_00.localHitPoint.z = (float)(int)uVar36;
    collisionState_00.localNormal.x = (float)(int)((ulonglong)uVar36 >> 0x20);
    collisionState_00.localNormal.y = (float)ppVVar63;
    collisionState_00.localNormal.z = (float)uVar40;
    collisionState_00.localDirection.x._0_2_ = iVar2;
    collisionState_00.localDirection.x._2_2_ = in_stack_67;
    auVar51 = in_stack_52._8_12_;
    auVar53 = in_stack_52._20_12_;
    auVar58 = in_stack_52._36_64_;
    uVar59 = in_stack_52._104_6_;
    uVar60 = in_stack_52._110_6_;
    auVar54 = in_stack_52._128_12_;
    auVar55 = in_stack_52._140_12_;
    collisionState_00.localDirection.y = (float)in_stack_52._0_4_;
    collisionState_00.localDirection.z = (float)in_stack_52._4_4_;
    collisionState_00.origin.x = (float)auVar51._0_4_;
    collisionState_00.origin.y = (float)auVar51._4_4_;
    collisionState_00.origin.z = (float)auVar51._8_4_;
    collisionState_00.direction.x = (float)auVar53._0_4_;
    collisionState_00.direction.y = (float)auVar53._4_4_;
    collisionState_00.direction.z = (float)auVar53._8_4_;
    collisionState_00.cmb = (ICubeModelCollider *)in_stack_52._32_4_;
    collisionState_00.localToElipsoidSpace.m00 = (float)auVar58._0_4_;
    collisionState_00.localToElipsoidSpace.m10 = (float)auVar58._4_4_;
    collisionState_00.localToElipsoidSpace.m20 = (float)auVar58._8_4_;
    collisionState_00.localToElipsoidSpace.m30 = (float)auVar58._12_4_;
    collisionState_00.localToElipsoidSpace.m01 = (float)auVar58._16_4_;
    collisionState_00.localToElipsoidSpace.m11 = (float)auVar58._20_4_;
    collisionState_00.localToElipsoidSpace.m21 = (float)auVar58._24_4_;
    collisionState_00.localToElipsoidSpace.m31 = (float)auVar58._28_4_;
    collisionState_00.localToElipsoidSpace.m02 = (float)auVar58._32_4_;
    collisionState_00.localToElipsoidSpace.m12 = (float)auVar58._36_4_;
    collisionState_00.localToElipsoidSpace.m22 = (float)auVar58._40_4_;
    collisionState_00.localToElipsoidSpace.m32 = (float)auVar58._44_4_;
    collisionState_00.localToElipsoidSpace.m03 = (float)auVar58._48_4_;
    collisionState_00.localToElipsoidSpace.m13 = (float)auVar58._52_4_;
    collisionState_00.localToElipsoidSpace.m23 = (float)auVar58._56_4_;
    collisionState_00.localToElipsoidSpace.m33 = (float)auVar58._60_4_;
    collisionState_00.scanAxis = in_stack_52._100_4_;
    collisionState_00.minBounds.x = (short)uVar59;
    collisionState_00.minBounds.y = (short)((uint6)uVar59 >> 0x10);
    collisionState_00.minBounds.z = (short)((uint6)uVar59 >> 0x20);
    collisionState_00.maxBounds.x = (short)uVar60;
    collisionState_00.maxBounds.y = (short)((uint6)uVar60 >> 0x10);
    collisionState_00.maxBounds.z = (short)((uint6)uVar60 >> 0x20);
    collisionState_00.firstHitScanAxis = in_stack_52._116_4_;
    collisionState_00.firstHitDetected = in_stack_52[0x78];
    collisionState_00._161_3_ = in_stack_52._121_3_;
    collisionState_00.scaledMaxRadius = (float)in_stack_52._124_4_;
    collisionState_00.elipsoidSpaceOrigin.x = (float)auVar54._0_4_;
    collisionState_00.elipsoidSpaceOrigin.y = (float)auVar54._4_4_;
    collisionState_00.elipsoidSpaceOrigin.z = (float)auVar54._8_4_;
    collisionState_00.elipsoidSpaceDirection.x = (float)auVar55._0_4_;
    collisionState_00.elipsoidSpaceDirection.y = (float)auVar55._4_4_;
    collisionState_00.elipsoidSpaceDirection.z = (float)auVar55._8_4_;
    collisionState_00.elipsoidSpaceDistance = (float)in_stack_52._152_4_;
    bVar31 = MVSweptElipsoidCheck_HandleTriangleTest
                       (p1,p2,*pVVar16,vh,fVar12,(Face__Enum)fVar8,(Cube *)pTVar30,radiusVec,pos_00,
                        collisionState_00,in_stack_50);
    puVar18 = (undefined *)((uint)(bVar45 | bVar31) << 0x18);
    fVar9 = (float)((int)fVar9 + 1);
    pFVar42 = pFVar41;
    goto code_?;
  }
  fVar9 = (float)((int)fVar9 + 1);
  pCVar1 = collisionState;
  goto code_?;
}


/* Void HandleObjectsInsideBoxCollider(Ray, Vector3, Quaternion, Single, Single, Int32,
   PhysicsCollisionDatasWrapper, VoxelHit ByRef, Ray[], HashSet`1[System.Int32]) */

void Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_HandleObjectsInsideBoxCollider
               (Ray ray,Vector3 radius,Quaternion rotation,float maxRadius,float distance,
               int32_t indexOfFirstHit,PhysicsCollisionDatasWrapper *collisionData,
               VoxelHit *voxelHit,Ray__Array *boundRays,HashSet_1_System_Int32_ *ignoreWoIds,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?(&stack0xffffffb4,0,0x48);
  if (collisionData != (PhysicsCollisionDatasWrapper *)0x0) {
    do {
      do {
        while( true ) {
          do {
            indexOfFirstHit = indexOfFirstHit + 1;
            pIVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                     Collection_1_VoxelHit__get_Items
                               ((Collection_1_VoxelHit_ *)collisionData,(MethodInfo *)0x0);
            if ((int)pIVar1 <= indexOfFirstHit) {
              return;
            }
            pPVar2 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                               (collisionData,indexOfFirstHit,(MethodInfo *)0x0);
            if (pPVar2 == (PhysicsCollisionData *)0x0) goto code_?;
            wo = MVWorldObjectClientManager::MVWorldObjectClientManager_GetMVObject
                           ((pPVar2->fields).transform,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__SharedCollisionFunctions->vtable).Equals.methodPtr & 0x2000000)
                 != 0) && ((TypeInfo__SharedCollisionFunctions->_1).cctor_started == 0)) {
              func_?();
            }
            bVar3 = SharedCollisionFunctions::SharedCollisionFunctions_IgnoreCollision
                              (wo,ignoreWoIds,(MethodInfo *)0x0);
          } while (bVar3 != 0);
          iVar4 = func_?(wo,TypeInfo__ICubeModelCollider);
          if (iVar4 == 0) break;
          fVar5 = voxelHit->distance;
          pPVar2 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                             (collisionData,indexOfFirstHit,(MethodInfo *)0x0);
          if (pPVar2 == (PhysicsCollisionData *)0x0) goto code_?;
          if (fVar5 <= (pPVar2->fields).distance) {
            return;
          }
          func_?(&stack0xffffffb4,0,0x48);
          pPVar2 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                             (collisionData,indexOfFirstHit,(MethodInfo *)0x0);
          if (pPVar2 == (PhysicsCollisionData *)0x0) goto code_?;
          pCVar6 = (pPVar2->fields).collider;
          pPVar2 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                             (collisionData,indexOfFirstHit,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__MVSweptElipsoidCheck->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVSweptElipsoidCheck);
          }
          uVar7 = func_?(wo,TypeInfo__ICubeModelCollider,pPVar2,ray.m_Origin.x,
                                  ray.m_Origin.y,ray.m_Origin.z,ray.m_Direction.x,
                                  ray.m_Direction._4_8_,boundRays,0);
          chunk = (BoxCollider *)
                  func_?(pCVar6,TypeInfo__UnityEngine__BoxCollider,distance,uVar7);
          bVar3 = MVSweptElipsoidCheck_LayerScan
                            ((VoxelHit *)&stack0xffffffb4,radius,maxRadius,chunk,in_stack_8,
                             in_stack_9,in_stack_10,in_stack_11,in_stack_12
                             ,in_stack_13);
          if ((bVar3 != 0) && (fStack_14 < voxelHit->distance)) {
            if ((((uint)(TypeInfo__SharedCollisionFunctions->vtable).Equals.methodPtr & 0x2000000)
                 != 0) && ((TypeInfo__SharedCollisionFunctions->_1).cctor_started == 0)) {
              func_?(TypeInfo__SharedCollisionFunctions);
            }
            SharedCollisionFunctions::SharedCollisionFunctions_SetToVoxelHit
                      (voxelHit,(VoxelHit *)&stack0xffffffb4,(MethodInfo *)0x0);
          }
        }
        pPVar2 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                           (collisionData,indexOfFirstHit,(MethodInfo *)0x0);
        if (pPVar2 == (PhysicsCollisionData *)0x0) goto code_?;
      } while ((pPVar2->fields).isInsideCollider != 0);
      fVar5 = voxelHit->distance;
      pPVar2 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                         (collisionData,indexOfFirstHit,(MethodInfo *)0x0);
      if (pPVar2 == (PhysicsCollisionData *)0x0) goto code_?;
      pfVar15 = &(pPVar2->fields).distance;
    } while (fVar5 < *pfVar15 || fVar5 == *pfVar15);
    pPVar2 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                       (collisionData,indexOfFirstHit,(MethodInfo *)0x0);
    if (wo != (MVWorldObjectClient *)0x0) {
      pIVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)wo,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__SharedCollisionFunctions->vtable).Equals.methodPtr & 0x2000000) != 0)
         && ((TypeInfo__SharedCollisionFunctions->_1).cctor_started == 0)) {
        func_?();
      }
      SharedCollisionFunctions::SharedCollisionFunctions_SetToNoneVoxelHit
                (voxelHit,pPVar2,(int32_t)pIVar1,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?(0);
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Boolean HandleTriangleTest(Vector3, Vector3, Vector3, VoxelHit ByRef, Single, Face, Cube,
   Vector3, IntVector, CollisionState) */

bool Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_HandleTriangleTest
               (Vector3 p1,Vector3 p2,Vector3 p3,VoxelHit *currentVoxelHit,float distance,
               Face__Enum face,Cube *cube,Vector3 radiusVec,IntVector pos,
               CollisionState collisionState,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVSweptElipsoidCheck->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVSweptElipsoidCheck);
  }
  pMVar1 = TypeInfo__MVSweptElipsoidCheck->static_fields;
  (pMVar1->vhCached).distance = INFINITY;
  bVar2 = TriangleCheck::TriangleCheck_CheckTriangle
                     (&p1,&p2,&p3,&collisionState.elipsoidSpaceOrigin,
                      &collisionState.elipsoidSpaceDirection,collisionState.elipsoidSpaceDistance,
                      &pMVar1->vhCached,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    return 0;
  }
  if ((((uint)(TypeInfo__MVSweptElipsoidCheck->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_started == 0)) {
    func_?();
  }
  if ((TypeInfo__MVSweptElipsoidCheck->static_fields->vhCached).distance <=
      collisionState.elipsoidSpaceDistance) {
code_?:
    if ((((uint)(TypeInfo__MVSweptElipsoidCheck->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_started == 0)) {
      func_?();
    }
    fVar3 = collisionState.elipsoidSpaceOrigin.z;
    uVar4 = collisionState.elipsoidSpaceOrigin._0_8_;
    pfVar5 = &(TypeInfo__MVSweptElipsoidCheck->static_fields->vhCached).distance;
    if (*pfVar5 <= currentVoxelHit->distance && currentVoxelHit->distance != *pfVar5) {
      if ((((uint)(TypeInfo__MVSweptElipsoidCheck->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_started == 0)) {
        func_?();
      }
      VVar6 = (TypeInfo__MVSweptElipsoidCheck->static_fields->vhCached).point;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      uVar7 = collisionState.elipsoidSpaceOrigin._0_8_;
      VVar8.z = fVar3;
      collisionState.elipsoidSpaceOrigin.x = (float)uVar4;
      collisionState.elipsoidSpaceOrigin.y = SUB84(uVar4,4);
      VVar8.x = collisionState.elipsoidSpaceOrigin.x;
      VVar8.y = collisionState.elipsoidSpaceOrigin.y;
      collisionState.elipsoidSpaceOrigin._0_8_ = uVar7;
      UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                ((Vector3 *)&stack0xffffffac,VVar8,VVar6,(MethodInfo *)0x0);
      fVar9 = (float10)func_?();
      if (_UNK_? <= (float)fVar9) {
        if ((((uint)(TypeInfo__MVSweptElipsoidCheck->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_started == 0)) {
          func_?();
        }
        currentVoxelHit->distance =
             (TypeInfo__MVSweptElipsoidCheck->static_fields->vhCached).distance;
        puVar10 = (undefined8 *)func_?();
        uVar4 = *puVar10;
        fVar3 = *(float *)(puVar10 + 1);
        (currentVoxelHit->point).x = (float)(int)uVar4;
        (currentVoxelHit->point).y = (float)(int)((ulonglong)uVar4 >> 0x20);
        (currentVoxelHit->point).z = fVar3;
        currentVoxelHit->face = face;
        pVVar11 = (Vector3 *)func_?();
        VVar6 = *pVVar11;
        pVVar11 = (Vector3 *)func_?();
        VVar8 = *pVVar11;
        pVVar11 = (Vector3 *)func_?();
        pVVar11 = MathFunctions::MathFunctions_GetNormal
                            ((Vector3 *)&stack0xffffffac,VVar6,VVar8,*pVVar11,(MethodInfo *)0x0);
        fVar12 = pVVar11->y;
        fVar3 = pVVar11->z;
        (currentVoxelHit->normal).x = pVVar11->x;
        (currentVoxelHit->normal).y = fVar12;
        (currentVoxelHit->normal).z = fVar3;
        currentVoxelHit->cube = cube;
        func_?();
        (currentVoxelHit->cubePos).x = 0;
        (currentVoxelHit->cubePos).y = 0;
        (currentVoxelHit->cubePos).z = 0;
        return 1;
      }
    }
    return 0;
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_this_is_wrong,(MethodInfo *)0x0);
  pOVar13 = (Object__Array *)func_?();
  pOVar14 = (Object *)func_?();
  if (pOVar13 == (Object__Array *)0x0) goto code_?;
  if ((pOVar14 == (Object *)0x0) || (iVar15 = func_?(), iVar15 != 0)) {
    if (pOVar13->max_length == 0) goto code_?;
    pOVar13->vector[0] = pOVar14;
    pOVar14 = (Object *)func_?();
    if ((pOVar14 != (Object *)0x0) && (iVar15 = func_?(), iVar15 == 0))
    goto code_?;
    if (pOVar13->max_length < 2) goto code_?;
    pOVar13->vector[1] = pOVar14;
    pOVar14 = (Object *)func_?();
    if ((pOVar14 != (Object *)0x0) && (iVar15 = func_?(), iVar15 == 0))
    goto code_?;
    if (pOVar13->max_length < 3) goto code_?;
    pOVar13->vector[2] = pOVar14;
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogFormat
              (StringLiteral_Points___0____1____2_,pOVar13,(MethodInfo *)0x0);
    pOVar13 = (Object__Array *)func_?();
    pOVar14 = (Object *)func_?();
    if (pOVar13 == (Object__Array *)0x0) goto code_?;
    if ((pOVar14 != (Object *)0x0) && (iVar15 = func_?(), iVar15 == 0))
    goto code_?;
    if (pOVar13->max_length == 0) goto code_?;
    pOVar13->vector[0] = pOVar14;
    pOVar14 = (Object *)func_?();
    if ((pOVar14 != (Object *)0x0) && (iVar15 = func_?(), iVar15 == 0))
    goto code_?;
    if (pOVar13->max_length < 2) goto code_?;
    pOVar13->vector[1] = pOVar14;
    pOVar14 = (Object *)func_?();
    if ((pOVar14 != (Object *)0x0) && (iVar15 = func_?(), iVar15 == 0))
    goto code_?;
    if (2 < pOVar13->max_length) {
      pOVar13->vector[2] = pOVar14;
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogFormat
                (StringLiteral_Origin__Direction__distance__0__,pOVar13,(MethodInfo *)0x0);
      goto code_?;
    }
  }
  else {
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    uVar16 = func_?();
    func_?(uVar16);
  }
  uVar16 = func_?();
  func_?(uVar16);
code_?:
  func_?();
  pcVar17 = (code *)swi(3);
  bVar2 = (*pcVar17)();
  return bVar2;
}


/* Boolean IsWithinBounds(IntVector, CollisionState ByRef) */

bool Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_IsWithinBounds
               (IntVector pos,CollisionState *collisionState,MethodInfo *method)

{
  if (((((collisionState->minBounds).x <= pos.x) && ((collisionState->minBounds).y <= pos.y)) &&
      ((collisionState->minBounds).z <= pos.z)) &&
     (((pos.x <= (collisionState->maxBounds).x && (pos.y <= (collisionState->maxBounds).y)) &&
      (pos.z <= (collisionState->maxBounds).z)))) {
    return 1;
  }
  return 0;
}


/* Boolean LayerScan(VoxelHit ByRef, Vector3, Single, BoxCollider, Single, ICubeModelCollider,
   PhysicsCollisionData, Ray, Ray[]) */

bool Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_LayerScan
               (VoxelHit *vh,Vector3 radius,float maxRadius,BoxCollider *chunk,float distance,
               ICubeModelCollider *wo,PhysicsCollisionData *collisionData,Ray ray,
               Ray__Array *boundRays,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fStack_1 = 0.0;
  pVStack_2 = (Vector3 *)0x0;
  fVar3 = 0.0;
  fVar4 = 0.0;
  fStack_5 = 0.0;
  uStack_6 = 0;
  uStack_7 = 0;
  uStack_8 = 0;
  fStack_9 = 0.0;
  uStack_10 = 0;
  uStack_11 = 0;
  uStack_12 = 0;
  uStack_13 = 0;
  uStack_14 = 0;
  uStack_15 = 0;
  func_?(&CStack_16,0,0xc4);
  CStack_16.firstHitScanAxis = -1;
  CStack_16.firstHitDetected = 0;
  CStack_16.minBounds.x = 0;
  CStack_16.minBounds.y = 0;
  CStack_16.minBounds.z = 0;
  CStack_16.maxBounds.x = 0;
  CStack_16.maxBounds.y = 0;
  CStack_16.maxBounds.z = 0;
  if (chunk != (BoxCollider *)0x0) {
    pVVar17 = UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::BoxCollider_get_center
                        (&VStack_18,chunk,(MethodInfo *)0x0);
    VStack_19.x = pVVar17->x;
    VStack_19.y = pVVar17->y;
    fVar20 = pVVar17->z;
    UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::BoxCollider_get_size
              (&VStack_18,chunk,(MethodInfo *)0x0);
    func_?(&pVStack_2,VStack_19.x,VStack_19.y,fVar20);
    VStack_19.z = (float)pVStack_2;
    VStack_18.y = fVar4;
    VStack_18.x = fVar3;
    VStack_18.z = 0.0;
    VStack_19.x = 0.0;
    VStack_19.y = 0.0;
    if ((((uint)(TypeInfo__SharedCollisionFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__SharedCollisionFunctions->_1).cctor_started == 0)) {
      func_?(TypeInfo__SharedCollisionFunctions);
      fVar3 = VStack_18.x;
      fVar4 = VStack_18.y;
    }
    localSpaceBounds.m_Center.y = fVar3;
    localSpaceBounds.m_Center.x = VStack_19.z;
    localSpaceBounds.m_Center.z = fVar4;
    localSpaceBounds.m_Extents.x = VStack_18.z;
    localSpaceBounds.m_Extents.y = VStack_19.x;
    localSpaceBounds.m_Extents.z = VStack_19.y;
    SharedCollisionFunctions::SharedCollisionFunctions_GetVoxelBounds
              (&CStack_16.minBounds,&CStack_16.maxBounds,localSpaceBounds,(MethodInfo *)0x0);
    if ((collisionData != (PhysicsCollisionData *)0x0) &&
       (pTVar21 = (collisionData->fields).transform, pTVar21 != (Transform *)0x0)) {
      pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_InverseTransformPoint
                          (&VStack_18,pTVar21,(collisionData->fields).point,(MethodInfo *)0x0);
      pTVar21 = (collisionData->fields).transform;
      CStack_16.localHitPoint.x = pVVar17->x;
      CStack_16.localHitPoint.y = pVVar17->y;
      CStack_16.localHitPoint.z = pVVar17->z;
      if (pTVar21 != (Transform *)0x0) {
        pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                  Transform_InverseTransformDirection
                            (&VStack_18,pTVar21,(collisionData->fields).normal,(MethodInfo *)0x0);
        pTVar21 = (collisionData->fields).transform;
        CStack_16.localNormal.x = pVVar17->x;
        CStack_16.localNormal.y = pVVar17->y;
        CStack_16.localNormal.z = pVVar17->z;
        pVVar17 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                            (&VStack_18,(InputToPlayerMovementAndroid *)&ray,(MethodInfo *)0x0);
        if (pTVar21 != (Transform *)0x0) {
          pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                    Transform_InverseTransformDirection
                              (&VStack_18,pTVar21,*pVVar17,(MethodInfo *)0x0);
          CStack_16.localDirection.x = pVVar17->x;
          CStack_16.localDirection.y = pVVar17->y;
          CStack_16.localDirection.z = pVVar17->z;
          if ((((uint)(TypeInfo__MVSweptElipsoidCheck->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVSweptElipsoidCheck);
          }
          pMVar22 = TypeInfo__MVSweptElipsoidCheck->static_fields;
          uVar23 = (pMVar22->worldToElipsoidSpace).m00;
          uVar24 = (pMVar22->worldToElipsoidSpace).m10;
          uVar25 = (pMVar22->worldToElipsoidSpace).m20;
          uVar26 = (pMVar22->worldToElipsoidSpace).m30;
          uVar27 = (pMVar22->worldToElipsoidSpace).m01;
          uVar28 = (pMVar22->worldToElipsoidSpace).m11;
          uVar29 = (pMVar22->worldToElipsoidSpace).m21;
          uVar30 = (pMVar22->worldToElipsoidSpace).m31;
          lhs.m31 = (float)uVar30;
          lhs.m21 = (float)uVar29;
          lhs.m11 = (float)uVar28;
          lhs.m01 = (float)uVar27;
          lhs.m30 = (float)uVar26;
          lhs.m20 = (float)uVar25;
          lhs.m10 = (float)uVar24;
          lhs.m00 = (float)uVar23;
          fVar3 = (pMVar22->worldToElipsoidSpace).m02;
          fVar4 = (pMVar22->worldToElipsoidSpace).m12;
          fVar20 = (pMVar22->worldToElipsoidSpace).m22;
          fVar31 = (pMVar22->worldToElipsoidSpace).m32;
          fVar32 = (pMVar22->worldToElipsoidSpace).m03;
          fVar33 = (pMVar22->worldToElipsoidSpace).m13;
          fVar34 = (pMVar22->worldToElipsoidSpace).m23;
          fVar35 = (pMVar22->worldToElipsoidSpace).m33;
          pTVar21 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                              ((Component_1 *)chunk,(MethodInfo *)0x0);
          if (pTVar21 != (Transform *)0x0) {
            pMVar36 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                      Transform_get_localToWorldMatrix
                                ((Matrix4x4 *)&stack0xfffffe18,pTVar21,(MethodInfo *)0x0);
            VStack_19.z = pMVar36->m00;
            VStack_18.x = pMVar36->m10;
            VStack_18.y = pMVar36->m20;
            VStack_18.z = pMVar36->m30;
            fStack_37 = pMVar36->m01;
            fStack_38 = pMVar36->m11;
            VStack_19.x = pMVar36->m21;
            VStack_19.y = pMVar36->m31;
            fStack_39 = pMVar36->m02;
            fStack_40 = pMVar36->m12;
            fStack_41 = pMVar36->m22;
            fStack_42 = pMVar36->m32;
            fStack_43 = pMVar36->m03;
            fStack_44 = pMVar36->m13;
            uStack_45._0_4_ = pMVar36->m23;
            uStack_45._4_4_ = pMVar36->m33;
            fVar46 = pMVar36->m23;
            fVar47 = pMVar36->m33;
            fVar48 = pMVar36->m10;
            fVar49 = pMVar36->m20;
            fVar50 = pMVar36->m21;
            fVar51 = pMVar36->m31;
            if ((((uint)(TypeInfo__UnityEngine__Matrix4x4->vtable).Equals.methodPtr & 0x2000000) !=
                 0) && ((TypeInfo__UnityEngine__Matrix4x4->_1).cctor_started == 0)) {
              func_?();
              fVar46 = (float)uStack_45;
              fVar47 = uStack_45._4_4_;
              fVar48 = VStack_18.x;
              fVar49 = VStack_18.y;
              fVar50 = VStack_19.x;
              fVar51 = VStack_19.y;
            }
            lhs.m02 = fVar3;
            lhs.m12 = fVar4;
            lhs.m22 = fVar20;
            lhs.m32 = fVar31;
            lhs.m03 = fVar32;
            lhs.m13 = fVar33;
            lhs.m23 = fVar34;
            lhs.m33 = fVar35;
            rhs.m10 = fVar48;
            rhs.m00 = VStack_19.z;
            rhs.m20 = fVar49;
            rhs.m30 = VStack_18.z;
            rhs.m01 = fStack_37;
            rhs.m11 = fStack_38;
            rhs.m21 = fVar50;
            rhs.m31 = fVar51;
            rhs.m02 = fStack_39;
            rhs.m12 = fStack_40;
            rhs.m22 = fStack_41;
            rhs.m32 = fStack_42;
            rhs.m03 = fStack_43;
            rhs.m13 = fStack_44;
            rhs.m23 = fVar46;
            rhs.m33 = fVar47;
            pMVar36 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_op_Multiply
                                ((Matrix4x4 *)&stack0xfffffe18,lhs,rhs,(MethodInfo *)0x0);
            CStack_16.localToElipsoidSpace.m00 = pMVar36->m00;
            CStack_16.localToElipsoidSpace.m10 = pMVar36->m10;
            CStack_16.localToElipsoidSpace.m20 = pMVar36->m20;
            CStack_16.localToElipsoidSpace.m30 = pMVar36->m30;
            CStack_16.localToElipsoidSpace.m01 = pMVar36->m01;
            CStack_16.localToElipsoidSpace.m11 = pMVar36->m11;
            CStack_16.localToElipsoidSpace.m21 = pMVar36->m21;
            CStack_16.localToElipsoidSpace.m31 = pMVar36->m31;
            CStack_16.localToElipsoidSpace.m02 = pMVar36->m02;
            CStack_16.localToElipsoidSpace.m12 = pMVar36->m12;
            CStack_16.localToElipsoidSpace.m22 = pMVar36->m22;
            CStack_16.localToElipsoidSpace.m32 = pMVar36->m32;
            CStack_16.localToElipsoidSpace.m03 = pMVar36->m03;
            CStack_16.localToElipsoidSpace.m13 = pMVar36->m13;
            CStack_16.localToElipsoidSpace.m23 = pMVar36->m23;
            CStack_16.localToElipsoidSpace.m33 = pMVar36->m33;
            CStack_16.cmb = wo;
            if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
              func_?();
            }
            pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                                (&VStack_18,(MethodInfo *)0x0);
            uStack_7._0_4_ = pVVar17->x;
            uStack_7._4_4_ = pVVar17->y;
            fStack_5 = pVVar17->z;
            pVStack_2 = &VStack_18;
            pVVar17 = (Vector3 *)func_?();
            pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                                (&VStack_18,*pVVar17,maxRadius,(MethodInfo *)0x0);
            uVar52._0_4_ = pVVar17->x;
            uVar52._4_4_ = pVVar17->y;
            fStack_1 = pVVar17->z;
            uStack_6 = uVar52;
            if (CStack_16.cmb != (ICubeModelCollider *)0x0) {
              puVar53 = (undefined8 *)
                        func_?(&fStack_38,5,TypeInfo__ICubeModelCollider,CStack_16.cmb);
              VStack_18._0_8_ = *puVar53;
              VStack_18.z = *(float *)(puVar53 + 1);
              fVar3 = uStack_6._4_4_;
              uStack_6 = CONCAT44(uStack_6._4_4_,(float)(undefined4)uVar52 / VStack_18.x);
              if (CStack_16.cmb != (ICubeModelCollider *)0x0) {
                puVar53 = (undefined8 *)
                          func_?(&fStack_38,5,TypeInfo__ICubeModelCollider,CStack_16.cmb);
                fVar4 = fStack_1;
                VStack_18._0_8_ = *puVar53;
                VStack_18.z = *(float *)(puVar53 + 1);
                uStack_6 = CONCAT44(fVar3 / VStack_18.y,(undefined4)uStack_6);
                if (CStack_16.cmb != (ICubeModelCollider *)0x0) {
                  puVar53 = (undefined8 *)
                            func_?(&fStack_38,5,TypeInfo__ICubeModelCollider,CStack_16.cmb
                                           );
                  VStack_18._0_8_ = *puVar53;
                  VStack_18.z = *(float *)(puVar53 + 1);
                  fStack_1 = fVar4 / VStack_18.z;
                  fVar54 = (float10)func_?(&uStack_6,0);
                  CStack_16.scaledMaxRadius = (float)fVar54;
                  puVar53 = (undefined8 *)func_?(&VStack_18,&ray,0);
                  CStack_16.origin._0_8_ = *puVar53;
                  CStack_16.origin.z = *(float *)(puVar53 + 1);
                  pVVar17 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                                      (&VStack_18,(InputToPlayerMovementAndroid *)&ray,
                                       (MethodInfo *)0x0);
                  chunk = (BoxCollider *)0x0;
                  CStack_16.direction.x = pVVar17->x;
                  CStack_16.direction.y = pVVar17->y;
                  CStack_16.direction.z = pVVar17->z;
                  if ((collisionData->fields).isInsideCollider == 0) {
                    puVar53 = (undefined8 *)func_?(&VStack_18,&ray);
                    fVar4 = *(float *)(puVar53 + 1);
                    fStack_41 = (float)*puVar53;
                    fStack_42 = (float)((ulonglong)*puVar53 >> 0x20);
                    pVVar17 = InputToPlayerMovementAndroid::
                              InputToPlayerMovementAndroid_get_Direction
                                        (&VStack_18,(InputToPlayerMovementAndroid *)&ray,
                                         (MethodInfo *)0x0);
                    VStack_19.x = pVVar17->x;
                    VStack_19.y = pVVar17->y;
                    uStack_45 = CONCAT44(pVVar17->z,(float)uStack_45);
                    fVar3 = (collisionData->fields).distance;
                    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr &
                         0x2000000) != 0) &&
                       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                      func_?();
                    }
                    a_00.z = uStack_45._4_4_;
                    a_00.x = VStack_19.x;
                    a_00.y = VStack_19.y;
                    pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                                        (&VStack_18,a_00,fVar3 - _UNK_?,(MethodInfo *)0x0);
                    a_01.y = fStack_42;
                    a_01.x = fStack_41;
                    a_01.z = fVar4;
                    pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                                        (&VStack_18,a_01,*pVVar17,(MethodInfo *)0x0);
                    CStack_16.origin.x = pVVar17->x;
                    CStack_16.origin.y = pVVar17->y;
                    CStack_16.origin.z = pVVar17->z;
                    pVVar17 = (Vector3 *)func_?();
                    b.z = CStack_16.origin.z;
                    b.x = CStack_16.origin.x;
                    b.y = CStack_16.origin.y;
                    pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                              Vector3_op_Subtraction(&VStack_18,*pVVar17,b,(MethodInfo *)0x0);
                    uStack_8._0_4_ = pVVar17->x;
                    uStack_8._4_4_ = pVVar17->y;
                    fStack_9 = pVVar17->z;
                    fVar54 = (float10)func_?();
                    chunk = (BoxCollider *)(float)fVar54;
                    distance = distance - (float)chunk;
                  }
                  if ((((uint)(TypeInfo__MVSweptElipsoidCheck->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_started == 0)) {
                    func_?();
                  }
                  puVar53 = (undefined8 *)
                            func_?(&VStack_18,
                                            &TypeInfo__MVSweptElipsoidCheck->static_fields->
                                             worldToElipsoidSpace,CStack_16.origin.x,
                                            CStack_16.origin.y,CStack_16.origin.z);
                  CStack_16.elipsoidSpaceOrigin._0_8_ = *puVar53;
                  CStack_16.elipsoidSpaceOrigin.z = *(float *)(puVar53 + 1);
                  puVar53 = (undefined8 *)
                            func_?(&VStack_18,
                                            &TypeInfo__MVSweptElipsoidCheck->static_fields->
                                             worldToElipsoidSpace,CStack_16.direction.x,
                                            CStack_16.direction.y,CStack_16.direction.z);
                  uStack_10 = *puVar53;
                  uStack_11 = *(undefined4 *)(puVar53 + 1);
                  puVar53 = (undefined8 *)func_?(&VStack_18,&uStack_10,0);
                  fVar3 = CStack_16.direction.z;
                  CStack_16.elipsoidSpaceDirection._0_8_ = *puVar53;
                  CStack_16.elipsoidSpaceDirection.z = *(float *)(puVar53 + 1);
                  VStack_19.x = CStack_16.direction.x;
                  VStack_19.y = CStack_16.direction.y;
                  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                    func_?();
                  }
                  a.z = fVar3;
                  a.x = VStack_19.x;
                  a.y = VStack_19.y;
                  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                            (&VStack_18,a,distance,(MethodInfo *)0x0);
                  puVar53 = (undefined8 *)func_?();
                  uStack_12 = *puVar53;
                  uStack_13 = *(undefined4 *)(puVar53 + 1);
                  fVar54 = (float10)func_?(&uStack_12);
                  pTVar21 = (collisionData->fields).transform;
                  CStack_16.elipsoidSpaceDistance = (float)fVar54;
                  if (pTVar21 != (Transform *)0x0) {
                    position.z = CStack_16.origin.z;
                    position.x = CStack_16.origin.x;
                    position.y = CStack_16.origin.y;
                    pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_InverseTransformPoint
                                        (&VStack_18,pTVar21,position,(MethodInfo *)0x0);
                    CStack_16.localOrigin.x = pVVar17->x;
                    CStack_16.localOrigin.y = pVVar17->y;
                    CStack_16.localOrigin.z = pVVar17->z;
                    localDir.z = CStack_16.localDirection.z;
                    localDir.x = CStack_16.localDirection.x;
                    localDir.y = CStack_16.localDirection.y;
                    pVVar17 = MVSweptElipsoidCheck_GetPlaneNormal
                                        (&VStack_18,localDir,(MethodInfo *)0x0);
                    VStack_19.x = pVVar17->x;
                    VStack_19.y = pVVar17->y;
                    fVar3 = pVVar17->z;
                    uStack_45 = CONCAT44(fVar3,(float)uStack_45);
                    fStack_41 = VStack_19.x;
                    fStack_42 = VStack_19.y;
                    pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                                        (&VStack_18,(MethodInfo *)0x0);
                    lhs_00.y = fStack_42;
                    lhs_00.x = fStack_41;
                    lhs_00.z = fVar3;
                    bVar55 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Equality
                                       (lhs_00,*pVVar17,(MethodInfo *)0x0);
                    if (bVar55 != 0) {
                      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr &
                           0x2000000) != 0) &&
                         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
                        func_?(TypeInfo__UnityEngine__Debug);
                      }
                      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                                ((Object *)StringLiteral_scanRect_cant_be_zero,(MethodInfo *)0x0);
                    }
                    if ((((uint)(TypeInfo__MVSweptElipsoidCheck->vtable).Equals.methodPtr &
                         0x2000000) != 0) &&
                       ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_started == 0)) {
                      func_?(TypeInfo__MVSweptElipsoidCheck);
                    }
                    VStack_18.x = VStack_19.x;
                    VStack_18.y = VStack_19.y;
                    VStack_18.z = uStack_45._4_4_;
                    if (cRam_? == '\0') {
                      func_?(_UNK_?);
                      cRam_? = '\x01';
                    }
                    iVar56 = 0;
                    do {
                      fVar54 = (float10)func_?(&VStack_18,iVar56,0);
                      fStack_42 = (float)fVar54;
                      if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr &
                           0x2000000) != 0) &&
                         ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
                        func_?(TypeInfo__UnityEngine__Mathf);
                      }
                      if (_UNK_? <
                          (float)(double)CONCAT44((uint)((ulonglong)(double)fStack_42 >> 0x20) &
                                                  _UNK_?,
                                                  SUB84((double)fStack_42,0) & _UNK_?))
                      goto code_?;
                      iVar56 = iVar56 + 1;
                    } while (iVar56 < 3);
                    fStack_42 = VStack_18.z;
                    fStack_40 = VStack_18.x;
                    fStack_41 = VStack_18.y;
                    arg1 = (Object *)func_?(TypeInfo__UnityEngine__Vector3,&fStack_40);
                    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) !=
                         0) && ((TypeInfo__System__String->_1).cctor_started == 0)) {
                      func_?(TypeInfo__System__String);
                    }
                    message = mscorlib.dll::System::String::String_Concat
                                        ((Object *)StringLiteral_No_scan_axis_found_,arg1,
                                         (MethodInfo *)0x0);
                    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000)
                         != 0) && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
                      func_?(TypeInfo__UnityEngine__Debug);
                    }
                    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                              ((Object *)message,(MethodInfo *)0x0);
                    iVar56 = -1;
code_?:
                    pTVar21 = (collisionData->fields).transform;
                    CStack_16.scanAxis = iVar56;
                    if (pTVar21 != (Transform *)0x0) {
                      fVar3 = uStack_45._4_4_;
                      direction.z = uStack_45._4_4_;
                      direction.x = VStack_19.x;
                      direction.y = VStack_19.y;
                      pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                Transform_TransformDirection
                                          (&VStack_18,pTVar21,direction,(MethodInfo *)0x0);
                      uVar57 = pVVar17->x;
                      uVar58 = pVVar17->y;
                      func_?(&TypeInfo__MVSweptElipsoidCheck->static_fields->collisionPlane
                                      ,uVar57,uVar58,pVVar17->z);
                      uStack_45._0_4_ = (collisionData->fields).point.x;
                      uStack_45._4_4_ = (collisionData->fields).point.y;
                      pTVar21 = (collisionData->fields).transform;
                      fStack_42 = (collisionData->fields).point.z;
                      if (pTVar21 != (Transform *)0x0) {
                        direction_00.z = fVar3;
                        direction_00.x = VStack_19.x;
                        direction_00.y = VStack_19.y;
                        pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                  Transform_TransformDirection
                                            (&VStack_18,pTVar21,direction_00,(MethodInfo *)0x0);
                        planeOrigin.z = fStack_42;
                        planeOrigin.x = (float)uStack_45;
                        planeOrigin.y = uStack_45._4_4_;
                        MVSweptElipsoidCheck_GetRaysProjectedOnPlane
                                  (boundRays,
                                   &TypeInfo__MVSweptElipsoidCheck->static_fields->collisionPlane,
                                   planeOrigin,*pVVar17,(MethodInfo *)0x0);
                        if ((collisionData->fields).isInsideCollider != 0) {
                          if ((((uint)(TypeInfo__MVSweptElipsoidCheck->vtable).Equals.methodPtr &
                               0x2000000) != 0) &&
                             ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_started == 0)) {
                            func_?();
                          }
                          pointsOnProjectPlane =
                               TypeInfo__MVSweptElipsoidCheck->static_fields->pointsOnPlane;
                          puVar53 = (undefined8 *)func_?();
                          VStack_19._0_8_ = *puVar53;
                          fVar3 = *(float *)(puVar53 + 1);
                          pVVar17 = InputToPlayerMovementAndroid::
                                    InputToPlayerMovementAndroid_get_Direction
                                              (&VStack_18,(InputToPlayerMovementAndroid *)&ray,
                                               (MethodInfo *)0x0);
                          startOrigin.z = fVar3;
                          startOrigin.x = VStack_19.x;
                          startOrigin.y = VStack_19.y;
                          MVSweptElipsoidCheck_MoveAxisAlignedRectBackward
                                    (pointsOnProjectPlane,startOrigin,*pVVar17,(MethodInfo *)0x0);
                        }
                        if ((((uint)(TypeInfo__MVSweptElipsoidCheck->vtable).Equals.methodPtr &
                             0x2000000) != 0) &&
                           ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_started == 0)) {
                          func_?();
                        }
                        MVSweptElipsoidCheck_CalculateAxisAlignedRect
                                  (TypeInfo__MVSweptElipsoidCheck->static_fields->pointsOnPlane,
                                   (collisionData->fields).transform,(MethodInfo *)0x0);
                        if ((collisionData->fields).isInsideCollider == 0) {
                          if ((((uint)(TypeInfo__MVSweptElipsoidCheck->vtable).Equals.methodPtr &
                               0x2000000) != 0) &&
                             ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_started == 0)) {
                            func_?();
                          }
                          localNormal.z = CStack_16.localNormal.z;
                          localNormal.x = CStack_16.localNormal.x;
                          localNormal.y = CStack_16.localNormal.y;
                          localHit.z = CStack_16.localHitPoint.z;
                          localHit.x = CStack_16.localHitPoint.x;
                          localHit.y = CStack_16.localHitPoint.y;
                          localDir_00.z = CStack_16.localDirection.z;
                          localDir_00.x = CStack_16.localDirection.x;
                          localDir_00.y = CStack_16.localDirection.y;
                          MVSweptElipsoidCheck_MoveAxisAlignedRectOutOfBox
                                    (TypeInfo__MVSweptElipsoidCheck->static_fields->
                                     minMaxCalculateAxisAlignedRect,localNormal,localHit,localDir_00
                                     ,(MethodInfo *)0x0);
                        }
                        if ((((uint)(TypeInfo__MVSweptElipsoidCheck->vtable).Equals.methodPtr &
                             0x2000000) != 0) &&
                           ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_started == 0)) {
                          func_?();
                        }
                        bVar55 = MVSweptElipsoidCheck_LayerScan_1
                                           (radius,TypeInfo__MVSweptElipsoidCheck->static_fields->
                                                   minMaxCalculateAxisAlignedRect,vh,distance,
                                            &CStack_16,(MethodInfo *)0x0);
                        if (bVar55 == 0) {
                          return 0;
                        }
                        if ((((uint)(TypeInfo__MVSweptElipsoidCheck->vtable).Equals.methodPtr &
                             0x2000000) != 0) &&
                           ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_started == 0)) {
                          func_?();
                        }
                        fStack_42 = vh->distance;
                        uStack_45 = CONCAT44(CStack_16.elipsoidSpaceDirection.z,(float)uStack_45);
                        VStack_19.x = CStack_16.elipsoidSpaceDirection.x;
                        VStack_19.y = CStack_16.elipsoidSpaceDirection.y;
                        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr &
                             0x2000000) != 0) &&
                           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                          func_?();
                        }
                        a_02.z = uStack_45._4_4_;
                        a_02.x = VStack_19.x;
                        a_02.y = VStack_19.y;
                        UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                                  (&VStack_18,a_02,fStack_42,(MethodInfo *)0x0);
                        puVar53 = (undefined8 *)func_?();
                        uStack_14 = *puVar53;
                        uStack_15 = *(undefined4 *)(puVar53 + 1);
                        fVar54 = (float10)func_?();
                        vh->distance = (float)(fVar54 + (float10)(float)chunk);
                        if (wo != (ICubeModelCollider *)0x0) {
                          pIVar59 = wo->klass;
                          uVar60 = 0;
                          fStack_42 = 0.0;
                          uVar61._0_1_ = (pIVar59->_1).rank;
                          uVar61._1_1_ = (pIVar59->_1).minimumAlignment;
                          uStack_45 = (ulonglong)CONCAT24(uVar61,(float)uStack_45);
                          if (uVar61 != 0) {
                            do {
                              if (pIVar59->interfaceOffsets[uVar60].interfaceType ==
                                  (Il2CppClass *)TypeInfo__ICubeModelCollider) {
                                ppMVar62 = &(&(pIVar59->vtable).get_Id)
                                            [pIVar59->interfaceOffsets[uVar60].offset].method;
                                goto code_?;
                              }
                              uVar60 = uVar60 + 1;
                            } while (uVar60 < uVar61);
                          }
                          ppMVar62 = (MethodInfo **)
                                     func_?(wo,TypeInfo__ICubeModelCollider,0);
code_?:
                          iVar63 = (*(code *)*ppMVar62)(wo,ppMVar62[1]);
                          uVar61 = 0;
                          fStack_42 = 0.0;
                          pIVar59 = wo->klass;
                          sVar64._0_1_ = (pIVar59->_1).rank;
                          sVar64._1_1_ = (pIVar59->_1).minimumAlignment;
                          uStack_45._4_4_ = (float)iVar63;
                          if (sVar64 != 0) {
                            do {
                              if (pIVar59->interfaceOffsets[uVar61].interfaceType ==
                                  (Il2CppClass *)TypeInfo__ICubeModelCollider) {
                                ppMVar62 = &(&(pIVar59->vtable).get_InteractionFlags)
                                            [pIVar59->interfaceOffsets[uVar61].offset].method;
                                goto code_?;
                              }
                              uVar61 = uVar61 + 1;
                              uVar60._0_1_ = (pIVar59->_1).rank;
                              uVar60._1_1_ = (pIVar59->_1).minimumAlignment;
                            } while (uVar61 < uVar60);
                          }
                          ppMVar62 = (MethodInfo **)
                                     func_?(wo,TypeInfo__ICubeModelCollider,3);
code_?:
                          uVar52 = (*(code *)*ppMVar62)(wo,ppMVar62[1]);
                          vh->isCubeHit = 1;
                          vh->woId = (int32_t)uStack_45._4_4_;
                          vh->collider = (collisionData->fields).collider;
                          pTVar21 = (collisionData->fields).transform;
                          *(int *)&vh->interactionFlags = (int)uVar52;
                          vh->transform = pTVar21;
                          *(int *)((int)&vh->interactionFlags + 4) =
                               (int)((ulonglong)uVar52 >> 0x20);
                          return 1;
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
    }
  }
  func_?(0);
  pcVar65 = (code *)swi(3);
  bVar55 = (*pcVar65)();
  return bVar55;
}


/* Boolean LayerScan(Vector3, Vector3[], VoxelHit ByRef, Single, CollisionState ByRef) */

bool Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_LayerScan_1
               (Vector3 radius,Vector3__Array *alignedRect,VoxelHit *vh,float distance,
               CollisionState *collisionState,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  fStack_1 = 0.0;
  uStack_2 = 0;
  fStack_3 = 0.0;
  iStack_4 = 0;
  uStack_5 = 0.0;
  iStack_6 = 0;
  uStack_7._0_4_ = (CellTraverser__Class *)0x0;
  uStack_7._4_4_ = (MonitorData *)0x0;
  VStack_8.x = 0.0;
  VStack_8.y = 0.0;
  VStack_8.z = 0.0;
  VStack_9.x = 0.0;
  VStack_9.y = 0.0;
  VStack_9.z = 0.0;
  uStack_10 = 0;
  fStack_11 = 0.0;
  vh->distance = INFINITY;
  if (alignedRect != (Vector3__Array *)0x0) {
    if (alignedRect->max_length == 0) goto code_?;
    uStack_7._0_4_ = (CellTraverser__Class *)alignedRect->vector[0].x;
    uStack_7._4_4_ = (MonitorData *)alignedRect->vector[0].y;
    iVar12 = 0;
    VStack_8.z = alignedRect->vector[0].z;
    VStack_8.x = alignedRect->vector[0].x;
    VStack_8.y = alignedRect->vector[0].y;
    bVar13 = false;
    pMVar14 = (MethodInfo *)VStack_8.z;
    uVar15 = uStack_7;
    pMStack_16 = (MethodInfo *)VStack_8.z;
    do {
      if (iVar12 != collisionState->scanAxis) {
        func_?();
        fVar17 = (float10)func_?();
        pMStack_18 = (MethodInfo *)(float)fVar17;
        if (bVar13) {
          func_?();
        }
        else {
          func_?();
          bVar13 = true;
        }
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < 3);
    VStack_19.y = (float)(CellTraverser__Class *)uStack_7;
    VStack_19.z = (float)uStack_7._4_4_;
    method_02 = pMVar14;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    a.z = (float)pMVar14;
    a.x = VStack_19.y;
    a.y = VStack_19.z;
    b.z = (float)pMStack_16;
    b.x = (float)(CellTraverser__Class *)uVar15;
    b.y = (float)SUB84(uVar15,4);
    pVVar20 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                        (&VStack_19,a,b,(MethodInfo *)0x0);
    VStack_9.x = pVVar20->x;
    VStack_9.y = pVVar20->y;
    VStack_9.z = pVVar20->z;
    pVVar20 = &VStack_9;
    pVVar21 = &VStack_22;
    puVar23 = &UNK_?;
    puVar24 = (undefined8 *)func_?();
    VStack_19._4_8_ = *puVar24;
    pMVar14 = *(MethodInfo **)(puVar24 + 1);
    a_00.z = VStack_8.z;
    a_00.x = VStack_8.x;
    a_00.y = VStack_8.y;
    b_00.z._0_2_ = (short)pMStack_16;
    b_00.x = (float)(CellTraverser__Class *)uVar15;
    b_00.y = (float)SUB84(uVar15,4);
    b_00.z._2_2_ = (short)((uint)pMStack_16 >> 0x10);
    pVVar25 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                        (&VStack_22,a_00,b_00,(MethodInfo *)0x0);
    method_01 = (CellTraverser__Class *)0x0;
    uStack_10._0_4_ = pVVar25->x;
    uStack_10._4_4_ = pVVar25->y;
    fStack_11 = pVVar25->z;
    puVar24 = (undefined8 *)func_?();
    VStack_22._4_8_ = *puVar24;
    method_00 = *(MethodInfo **)(puVar24 + 1);
    uVar26 = VStack_19.y._0_2_;
    uVar27 = VStack_19.y._2_2_;
    fVar28 = VStack_19.z;
    ppCVar29 = &pCStack_30;
    uVar31 = 0x467e;
    uVar32 = 0x1047;
    localPos.y._0_2_ = uVar26;
    localPos.x = (float)ppCVar29;
    localPos.y._2_2_ = uVar27;
    localPos.z = fVar28;
    IVar33 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
             CubeMathFunctions_LocalPosToLocalIntVector(localPos,pMVar14);
    fStack_1 = *IVar33._0_4_;
    uStack_2 = *(undefined2 *)(IVar33._0_4_ + 1);
    uVar34 = 0;
    uVar35 = VStack_22.y._0_2_;
    uVar36 = VStack_22.y._2_2_;
    uVar37 = VStack_22.z._0_2_;
    uVar38 = VStack_22.z._2_2_;
    pVVar39 = (VoxelHit *)&pCStack_30;
    uVar40 = 0x46af;
    uVar41 = 0x1047;
    localPos_00.y._0_2_ = uVar35;
    localPos_00.x = (float)pVVar39;
    localPos_00.y._2_2_ = uVar36;
    localPos_00.z._0_2_ = uVar37;
    localPos_00.z._2_2_ = uVar38;
    IVar33 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
             CubeMathFunctions_LocalPosToLocalIntVector(localPos_00,method_00);
    fStack_3 = *IVar33._0_4_;
    iStack_4 = *(int16_t *)(IVar33._0_4_ + 1);
    if ((((uint)(TypeInfo__MVSweptElipsoidCheck->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_started == 0)) {
      pVVar20 = (Vector3 *)&UNK_?;
      func_?();
    }
    pCVar42 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
    if (pCVar42 != (CellTraverser *)0x0) {
      iVar12 = 0x31;
      pMVar14 = (MethodInfo *)0x0;
      pCVar43 = collisionState;
      pfVar44 = (float *)&stack0xfffffde4;
      while( true ) {
        if (iVar12 == 0) break;
        iVar12 = iVar12 + -1;
        *pfVar44 = (pCVar43->localOrigin).x;
        pCVar43 = (CollisionState *)&(pCVar43->localOrigin).y;
        pfVar44 = pfVar44 + 1;
      }
      localOrigin.z = (float)pMStack_16;
      localOrigin.x = (float)(CellTraverser__Class *)uVar15;
      localOrigin.y = (float)SUB84(uVar15,4);
      collisionState_00.localToElipsoidSpace.m31 = (float)in_stack_45;
      auVar46 = in_stack_47._0_12_;
      auVar48 = in_stack_47._12_12_;
      auVar49 = in_stack_47._24_12_;
      auVar50 = in_stack_47._36_12_;
      auVar51 = in_stack_47._48_12_;
      auVar52 = in_stack_47._60_12_;
      collisionState_00.localOrigin.x = (float)auVar46._0_4_;
      collisionState_00.localOrigin.y = (float)auVar46._4_4_;
      collisionState_00.localOrigin.z = (float)auVar46._8_4_;
      collisionState_00.localHitPoint.x = (float)auVar48._0_4_;
      collisionState_00.localHitPoint.y = (float)auVar48._4_4_;
      collisionState_00.localHitPoint.z = (float)auVar48._8_4_;
      collisionState_00.localNormal.x = (float)auVar49._0_4_;
      collisionState_00.localNormal.y = (float)auVar49._4_4_;
      collisionState_00.localNormal.z = (float)auVar49._8_4_;
      collisionState_00.localDirection.x = (float)auVar50._0_4_;
      collisionState_00.localDirection.y = (float)auVar50._4_4_;
      collisionState_00.localDirection.z = (float)auVar50._8_4_;
      collisionState_00.origin.x = (float)auVar51._0_4_;
      collisionState_00.origin.y = (float)auVar51._4_4_;
      collisionState_00.origin.z = (float)auVar51._8_4_;
      collisionState_00.direction.x = (float)auVar52._0_4_;
      collisionState_00.direction.y = (float)auVar52._4_4_;
      collisionState_00.direction.z = (float)auVar52._8_4_;
      collisionState_00.cmb = (ICubeModelCollider *)in_stack_47._72_4_;
      collisionState_00.localToElipsoidSpace.m00 = (float)in_stack_47._76_4_;
      collisionState_00.localToElipsoidSpace.m10 = (float)in_stack_47._80_4_;
      collisionState_00.localToElipsoidSpace.m20 = (float)in_stack_47._84_4_;
      collisionState_00.localToElipsoidSpace.m30 = (float)in_stack_47._88_4_;
      collisionState_00.localToElipsoidSpace.m01 = (float)in_stack_47._92_4_;
      collisionState_00.localToElipsoidSpace.m11 = (float)in_stack_47._96_4_;
      collisionState_00.localToElipsoidSpace.m21 = (float)in_stack_47._100_4_;
      collisionState_00.localToElipsoidSpace.m02 = (float)in_stack_53;
      collisionState_00.localToElipsoidSpace.m12 = (float)in_stack_54;
      collisionState_00.localToElipsoidSpace.m22._0_2_ = in_stack_55;
      collisionState_00.localToElipsoidSpace.m22._2_2_ = in_stack_56;
      collisionState_00.localToElipsoidSpace.m32 = (float)in_stack_57;
      collisionState_00.localToElipsoidSpace.m03 = (float)in_stack_58;
      collisionState_00.localToElipsoidSpace.m13 = (float)in_stack_59;
      collisionState_00.localToElipsoidSpace.m23._0_2_ = in_stack_60;
      collisionState_00.localToElipsoidSpace.m23._2_2_ = in_stack_61;
      collisionState_00.localToElipsoidSpace.m33._0_2_ = in_stack_62;
      collisionState_00.localToElipsoidSpace.m33._2_2_ = in_stack_63;
      collisionState_00.scanAxis._0_2_ = in_stack_64;
      collisionState_00.scanAxis._2_2_ = in_stack_65;
      collisionState_00.minBounds.x = uVar31;
      collisionState_00.minBounds.y = uVar32;
      collisionState_00.minBounds.z = (short)ppCVar29;
      collisionState_00.maxBounds.x = (short)((uint)ppCVar29 >> 0x10);
      collisionState_00.maxBounds.y = uVar26;
      collisionState_00.maxBounds.z = uVar27;
      collisionState_00.firstHitScanAxis = (int32_t)fVar28;
      collisionState_00._160_2_ = uVar40;
      collisionState_00._162_2_ = uVar41;
      collisionState_00.scaledMaxRadius._0_2_ = (short)pVVar39;
      collisionState_00.scaledMaxRadius._2_2_ = (short)((uint)pVVar39 >> 0x10);
      collisionState_00.elipsoidSpaceOrigin.x._0_2_ = uVar35;
      collisionState_00.elipsoidSpaceOrigin.x._2_2_ = uVar36;
      collisionState_00.elipsoidSpaceOrigin.y._0_2_ = uVar37;
      collisionState_00.elipsoidSpaceOrigin.y._2_2_ = uVar38;
      collisionState_00.elipsoidSpaceOrigin.z = (float)method_00;
      collisionState_00.elipsoidSpaceDirection.x = (float)uVar34;
      collisionState_00.elipsoidSpaceDirection.y = (float)puVar23;
      collisionState_00.elipsoidSpaceDirection.z = (float)pVVar21;
      collisionState_00.elipsoidSpaceDistance = (float)pVVar20;
      CellTraverser::CellTraverser_Init(pCVar42,localOrigin,collisionState_00,pMVar14);
      uVar31 = SUB82(uStack_7,4);
      uVar26 = SUB82(uStack_7,6);
      uStack_7._4_4_ = (MonitorData *)&UNK_?;
      localPos_01.y = (float)(CellTraverser__Class *)uStack_7;
      localPos_01.x = (float)&pCStack_30;
      localPos_01.z._0_2_ = uVar31;
      localPos_01.z._2_2_ = uVar26;
      MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
      CubeMathFunctions_LocalPosToLocalIntVector(localPos_01,method_02);
      localPos_02.y = VStack_8.x;
      localPos_02.x = (float)&pCStack_30;
      localPos_02.z._0_2_ = VStack_8.y._0_2_;
      localPos_02.z._2_2_ = VStack_8.y._2_2_;
      MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
      CubeMathFunctions_LocalPosToLocalIntVector(localPos_02,(MethodInfo *)VStack_8.z);
      sVar66 = func_?();
      sVar67 = func_?();
      pMStack_16 = (MethodInfo *)&collisionState->maxBounds;
      uStack_7._4_4_ = (MonitorData *)pMStack_16;
      uStack_7._0_4_ = (CellTraverser__Class *)&UNK_?;
      sVar68 = func_?();
      if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp_1
                ((int)sVar66,(int)sVar67,(int)sVar68,(MethodInfo *)0x0);
      func_?();
      sVar66 = func_?();
      sVar67 = func_?();
      uStack_7._4_4_ = (MonitorData *)&UNK_?;
      sVar68 = func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp_1
                ((int)sVar66,(int)sVar67,(int)sVar68,(MethodInfo *)0x0);
      func_?();
      fVar28 = 0.0;
      fStack_69 = 0.0;
      fStack_70 = 0.0;
      pMStack_16 = (MethodInfo *)0x0;
      pMVar14 = (MethodInfo *)0x0;
      pMStack_18 = (MethodInfo *)0x0;
      do {
        sVar66 = func_?();
        if (sVar66 != 0) {
          sVar66 = func_?();
          if ((((uint)(TypeInfo__MVSweptElipsoidCheck->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_started == 0)) {
            func_?();
          }
          pCVar42 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
          if (pCVar42 == (CellTraverser *)0x0) goto code_?;
          CellTraverser::CellTraverser_get_VoxelPos
                    ((CellTraverser *)&pCStack_30,(MethodInfo *)pCVar42);
          sVar67 = func_?();
          if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
            func_?();
          }
          fStack_69 = (float)UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Abs_1
                                       ((int)sVar66 - (int)sVar67,(MethodInfo *)0x0);
          fVar28 = fStack_70;
          pMStack_16 = pMVar14;
        }
        sVar66 = func_?();
        if (sVar66 != 0) {
          sVar66 = func_?();
          if ((((uint)(TypeInfo__MVSweptElipsoidCheck->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_started == 0)) {
            func_?();
          }
          pCVar42 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
          if (pCVar42 == (CellTraverser *)0x0) goto code_?;
          CellTraverser::CellTraverser_get_VoxelPos
                    ((CellTraverser *)&pCStack_71,(MethodInfo *)pCVar42);
          sVar67 = func_?();
          if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
            func_?();
          }
          fVar28 = (float)UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Abs_1
                                    ((int)sVar66 - (int)sVar67,(MethodInfo *)0x0);
          pMStack_18 = pMVar14;
          fStack_70 = fVar28;
        }
        pMVar14 = (MethodInfo *)((int)&pMVar14->methodPointer + 1);
      } while ((int)pMVar14 < 3);
      fVar28 = (float)((int)fVar28 + 1);
      fStack_70 = fVar28;
      if ((((uint)(TypeInfo__MVSweptElipsoidCheck->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_started == 0)) {
        func_?();
      }
      pCVar42 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
      if (pCVar42 != (CellTraverser *)0x0) {
        IVar33 = CellTraverser::CellTraverser_get_VoxelPos
                           ((CellTraverser *)&pCStack_30,(MethodInfo *)pCVar42);
        uStack_72 = *(undefined2 *)(IVar33._0_4_ + 4);
        pCVar42 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
        if (pCVar42 != (CellTraverser *)0x0) {
          IVar33 = CellTraverser::CellTraverser_get_VoxelPos
                             ((CellTraverser *)&pCStack_30,(MethodInfo *)pCVar42);
          uVar34 = *IVar33._0_4_;
          iStack_73 = (int16_t)uVar34;
          iStack_74 = (int16_t)((uint)uVar34 >> 0x10);
          iStack_75 = *(int16_t *)(IVar33._0_4_ + 1);
          pCVar42 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
          if (pCVar42 != (CellTraverser *)0x0) {
            CellTraverser::CellTraverser_get_VoxelPos
                      ((CellTraverser *)&pCStack_30,(MethodInfo *)pCVar42);
            func_?();
            pfVar44 = (float *)((uint)uVar38 << 0x10);
            puVar76 = (undefined1 *)((uint)in_stack_63 << 0x10);
            do {
              do {
                sVar66 = func_?();
                sVar67 = func_?();
                if (sVar67 < sVar66) goto code_?;
                uVar31 = 0;
                sVar66 = func_?();
                sVar67 = func_?();
                if (sVar66 < sVar67) goto code_?;
                fVar77 = fVar28;
                if (-1 < (int)fStack_69 + 1) {
                  fStack_78 = (float)((int)fStack_69 + 2);
                  do {
                    uVar38 = (ushort)((uint)pfVar44 >> 0x10);
                    uVar26 = (undefined2)((uint)puVar76 >> 0x10);
                    iVar12 = (int)fVar28 + 1;
                    if (-1 < (int)fStack_70) {
                      do {
                        iVar79 = iStack_6;
                        fVar77 = uStack_5;
                        uVar80 = (ushort)((uint)pVVar39 >> 0x10);
                        if ((((uint)(TypeInfo__MVSweptElipsoidCheck->vtable).Equals.methodPtr &
                             0x2000000) != 0) &&
                           ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_started == 0)) {
                          func_?();
                        }
                        IVar33.z = iVar79;
                        IVar33._0_4_ = fVar77;
                        pCVar43 = collisionState;
                        MVSweptElipsoidCheck_HandleCube
                                  (vh,IVar33,radius,distance,collisionState,(MethodInfo *)0x0);
                        iVar81 = iStack_6;
                        fVar77 = uStack_5;
                        iVar79 = iStack_4;
                        iStack_73 = SUB42(fStack_3,0);
                        iStack_74 = (int16_t)((uint)fStack_3 >> 0x10);
                        if ((((uint)(TypeInfo__MV__WorldObject__IntVector->vtable).Equals.methodPtr
                             & 0x2000000) != 0) &&
                           ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_started == 0)) {
                          uVar38 = 0x1047;
                          func_?();
                        }
                        uVar27 = 0x1047;
                        i1_00.z = SUB42(fVar77,0);
                        i1_00._0_4_ = &stack0xfffffeb8;
                        i2_00.y = uVar80;
                        i2_00.x = iVar81;
                        i2_00.z = iStack_73;
                        IVar33 = MVWorldObject.dll::MV::WorldObject::IntVector::
                                 IntVector_op_Addition
                                           (i1_00,i2_00,(MethodInfo *)CONCAT22(uVar38,iVar79));
                        pVVar39 = (VoxelHit *)((uint)uVar80 << 0x10);
                        uVar26 = (undefined2)((uint)pCVar43 >> 0x10);
                        uStack_5 = *IVar33._0_4_;
                        iStack_6 = *(int16_t *)(IVar33._0_4_ + 1);
                        iVar12 = iVar12 + -1;
                      } while (iVar12 != 0);
                    }
                    iVar81 = iStack_6;
                    fVar82 = uStack_5;
                    iVar79 = iStack_4;
                    fVar77 = fStack_3;
                    uVar80 = (ushort)((uint)pVVar39 >> 0x10);
                    if ((((uint)(TypeInfo__MV__WorldObject__IntVector->vtable).Equals.methodPtr &
                         0x2000000) != 0) &&
                       ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_started == 0)) {
                      func_?();
                      uVar80 = (ushort)((uint)pVVar39 >> 0x10);
                    }
                    iV.z = SUB42(fVar77,0);
                    iV._0_4_ = (int)fVar28 + 1;
                    IVar33 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Multiply
                                       ((int32_t)(auStack_83 + 0x18),iV,
                                        (MethodInfo *)CONCAT22(uVar26,iVar79));
                    puVar76 = auStack_83 + 0x10;
                    i1.z = SUB42(fVar82,0);
                    i1._0_4_ = puVar76;
                    i2.y = uVar32;
                    i2.x = iVar81;
                    i2.z = (int16_t)*IVar33._0_4_;
                    IVar33 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Subtraction
                                       (i1,i2,(MethodInfo *)
                                              CONCAT22(uVar27,*(undefined2 *)(IVar33._0_4_ + 1)));
                    pfVar44 = IVar33._0_4_;
                    uStack_5 = *pfVar44;
                    iStack_6 = *(int16_t *)(pfVar44 + 1);
                    uVar27 = 0x1047;
                    i1_01.z = SUB42(*pfVar44,0);
                    i1_01._0_4_ = auStack_83 + 8;
                    i2_01.y = uVar80;
                    i2_01.x = *(undefined2 *)(pfVar44 + 1);
                    i2_01.z = SUB42(fStack_1,0);
                    IVar33 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Addition
                                       (i1_01,i2_01,(MethodInfo *)CONCAT22(uVar38,uStack_2));
                    pfVar44 = (float *)((uint)uVar38 << 0x10);
                    pVVar39 = (VoxelHit *)((uint)uVar80 << 0x10);
                    fStack_78 = (float)((int)fStack_78 + -1);
                    uStack_5 = *IVar33._0_4_;
                    iStack_6 = *(int16_t *)(IVar33._0_4_ + 1);
                    fVar77 = fStack_70;
                  } while (fStack_78 != 0.0);
                }
                if ((((uint)(TypeInfo__MVSweptElipsoidCheck->vtable).Equals.methodPtr & 0x2000000)
                     != 0) && ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_started == 0)) {
                  func_?();
                }
                pCVar42 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
                if (pCVar42 == (CellTraverser *)0x0) goto code_?;
                CellTraverser::CellTraverser_Step(pCVar42,(MethodInfo *)0x0);
code_?:
                if ((((uint)(TypeInfo__MVSweptElipsoidCheck->vtable).Equals.methodPtr & 0x2000000)
                     != 0) && ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_started == 0)) {
                  func_?();
                }
                pCVar42 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
                if (pCVar42 == (CellTraverser *)0x0) goto code_?;
                CellTraverser::CellTraverser_get_StepDir
                          ((CellTraverser *)auStack_83,(MethodInfo *)pCVar42);
                sVar66 = func_?();
                if (sVar66 == 0) {
                  if ((((uint)(TypeInfo__MVSweptElipsoidCheck->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_started == 0)) {
                    func_?();
                  }
                  pCVar42 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
                  if (pCVar42 != (CellTraverser *)0x0) {
                    IVar33 = CellTraverser::CellTraverser_get_VoxelPos
                                       ((CellTraverser *)&stack0xfffffec8,(MethodInfo *)pCVar42);
                    pCStack_71 = (CellTraverser__Class *)*IVar33._0_4_;
                    uStack_5 = (float)CONCAT22(uStack_5._2_2_,(short)pCStack_71);
                    pCVar42 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
                    if (pCVar42 != (CellTraverser *)0x0) {
                      IVar33 = CellTraverser::CellTraverser_get_VoxelPos
                                         ((CellTraverser *)&stack0xfffffec0,(MethodInfo *)pCVar42);
                      uStack_5 = (float)CONCAT22((short)((uint)*IVar33._0_4_ >> 0x10),
                                                 (int16_t)uStack_5);
                      pCVar42 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
                      if (pCVar42 != (CellTraverser *)0x0) {
                        IVar33 = CellTraverser::CellTraverser_get_VoxelPos
                                           ((CellTraverser *)(auStack_84 + 0x18),
                                            (MethodInfo *)pCVar42);
                        iVar12 = 0;
                        uVar34 = *IVar33._0_4_;
                        iStack_73 = (int16_t)uVar34;
                        iStack_74 = (int16_t)((uint)uVar34 >> 0x10);
                        iStack_6 = *(int16_t *)(IVar33._0_4_ + 1);
code_?:
                        sVar66 = func_?();
                        if (sVar66 == 0) goto code_?;
                        if ((((uint)(TypeInfo__MVSweptElipsoidCheck->vtable).Equals.methodPtr &
                             0x2000000) != 0) &&
                           ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_started == 0)) {
                          func_?();
                        }
                        pCVar42 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
                        if (pCVar42 == (CellTraverser *)0x0) goto code_?;
                        CellTraverser::CellTraverser_get_StepDir
                                  ((CellTraverser *)(auStack_84 + 0x10),(MethodInfo *)pCVar42);
                        sVar66 = func_?();
                        if (sVar66 != 0) goto code_?;
                        if ((((uint)(TypeInfo__MVSweptElipsoidCheck->vtable).Equals.methodPtr &
                             0x2000000) != 0) &&
                           ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_started == 0)) {
                          func_?();
                        }
                        pCVar42 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
                        if (pCVar42 == (CellTraverser *)0x0) goto code_?;
                        CellTraverser::CellTraverser_get_StepDir
                                  ((CellTraverser *)(auStack_84 + 8),(MethodInfo *)pCVar42);
                        sVar66 = func_?();
                        pfVar44 = &fStack_3;
                        sVar67 = func_?();
                        if (sVar66 == sVar67) {
                          func_?();
                          pfVar44 = (float *)&uStack_5;
                          func_?();
                        }
                        if (-1 < (int)fStack_69 + 1) {
                          iVar12 = (int)fStack_69 + 2;
                          do {
                            iVar79 = iStack_6;
                            fVar28 = uStack_5;
                            uVar26 = (undefined2)((uint)method_01 >> 0x10);
                            uVar38 = (ushort)((uint)pfVar44 >> 0x10);
                            if ((((uint)(TypeInfo__MVSweptElipsoidCheck->vtable).Equals.methodPtr &
                                 0x2000000) != 0) &&
                               ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_started == 0)) {
                              func_?();
                            }
                            pos_00.z = iVar79;
                            pos_00._0_4_ = fVar28;
                            pVVar39 = vh;
                            MVSweptElipsoidCheck_HandleCube
                                      (vh,pos_00,radius,distance,collisionState,(MethodInfo *)0x0);
                            iVar79 = iStack_6;
                            fVar28 = uStack_5;
                            uVar40 = uStack_2;
                            iStack_73 = SUB42(fStack_1,0);
                            iStack_74 = (int16_t)((uint)fStack_1 >> 0x10);
                            if ((((uint)(TypeInfo__MV__WorldObject__IntVector->vtable).Equals.
                                        methodPtr & 0x2000000) != 0) &&
                               ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_started == 0)) {
                              uVar26 = 0x1047;
                              func_?();
                            }
                            method_01 = (CellTraverser__Class *)CONCAT22(uVar26,uVar40);
                            i1_03.z = SUB42(fVar28,0);
                            i1_03._0_4_ = auStack_84;
                            i2_03.y = uVar31;
                            i2_03.x = iVar79;
                            i2_03.z = iStack_73;
                            IVar33 = MVWorldObject.dll::MV::WorldObject::IntVector::
                                     IntVector_op_Addition(i1_03,i2_03,(MethodInfo *)method_01);
                            pfVar44 = (float *)((uint)uVar38 << 0x10);
                            uStack_5 = *IVar33._0_4_;
                            iStack_6 = *(int16_t *)(IVar33._0_4_ + 1);
                            iVar12 = iVar12 + -1;
                          } while (iVar12 != 0);
                          goto code_?;
                        }
                        goto code_?;
                      }
                    }
                  }
                  goto code_?;
                }
                if ((((uint)(TypeInfo__MVSweptElipsoidCheck->vtable).Equals.methodPtr & 0x2000000)
                     != 0) && ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_started == 0)) {
                  func_?();
                }
                pCVar42 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
                if (pCVar42 == (CellTraverser *)0x0) goto code_?;
                IVar33 = CellTraverser::CellTraverser_get_VoxelPos
                                   ((CellTraverser *)&VStack_22.y,(MethodInfo *)pCVar42);
                pCStack_30 = (CellTraverser__Class *)*IVar33._0_4_;
                uStack_5 = (float)CONCAT22(uStack_5._2_2_,(short)pCStack_30);
                pCVar42 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
                if (pCVar42 == (CellTraverser *)0x0) goto code_?;
                IVar33 = CellTraverser::CellTraverser_get_VoxelPos
                                   ((CellTraverser *)&VStack_19.y,(MethodInfo *)pCVar42);
                uStack_5 = (float)CONCAT22((short)((uint)*IVar33._0_4_ >> 0x10),(int16_t)uStack_5);
                pCVar42 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
                if (pCVar42 == (CellTraverser *)0x0) goto code_?;
                IVar33 = CellTraverser::CellTraverser_get_VoxelPos
                                   ((CellTraverser *)&stack0xffffffa4,(MethodInfo *)pCVar42);
                uVar34 = *IVar33._0_4_;
                iStack_73 = (int16_t)uVar34;
                iStack_74 = (int16_t)((uint)uVar34 >> 0x10);
                iStack_6 = *(int16_t *)(IVar33._0_4_ + 1);
                fVar28 = fVar77;
              } while (collisionState->firstHitDetected == 0);
              sVar66 = func_?();
              iVar12 = collisionState->firstHitScanAxis;
              if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0)
                 && ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
                func_?();
              }
              iVar85 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Abs_1
                                 (sVar66 - iVar12,(MethodInfo *)0x0);
              iVar86 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_CeilToInt
                                 (collisionState->scaledMaxRadius,(MethodInfo *)0x0);
              fVar28 = fStack_70;
            } while (iVar85 <= iVar86);
code_?:
            return collisionState->firstHitDetected;
          }
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  func_?();
  pcVar87 = (code *)swi(3);
  bVar88 = (*pcVar87)();
  return bVar88;
code_?:
  iVar12 = iVar12 + 1;
  if (2 < iVar12) goto code_?;
  goto code_?;
code_?:
  if ((((uint)(TypeInfo__MVSweptElipsoidCheck->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_started == 0)) {
    func_?();
  }
  pCVar42 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
  if (pCVar42 == (CellTraverser *)0x0) goto code_?;
  CellTraverser::CellTraverser_get_StepDir
            ((CellTraverser *)(auStack_83 + 0x2c),(MethodInfo *)pCVar42);
  sVar66 = func_?();
  pfVar44 = &fStack_1;
  sVar67 = func_?();
  if (sVar66 == sVar67) {
    func_?();
    pfVar44 = (float *)&uStack_5;
    func_?();
  }
  uVar38 = (ushort)((uint)pfVar44 >> 0x10);
  if (-1 < (int)fVar77) {
    iVar12 = (int)fVar77 + 1;
    do {
      iVar79 = iStack_6;
      fVar28 = uStack_5;
      if ((((uint)(TypeInfo__MVSweptElipsoidCheck->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_started == 0)) {
        func_?();
      }
      pos.z = iVar79;
      pos._0_4_ = fVar28;
      uVar80 = (ushort)((uint)vh >> 0x10);
      MVSweptElipsoidCheck_HandleCube(vh,pos,radius,distance,collisionState,(MethodInfo *)0x0);
      iVar81 = iStack_6;
      fVar28 = uStack_5;
      iVar79 = iStack_4;
      iStack_73 = SUB42(fStack_3,0);
      iStack_74 = (int16_t)((uint)fStack_3 >> 0x10);
      if ((((uint)(TypeInfo__MV__WorldObject__IntVector->vtable).Equals.methodPtr & 0x2000000) != 0)
         && ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_started == 0)) {
        method_01 = (CellTraverser__Class *)&UNK_?;
        func_?();
      }
      uVar27 = 0x1047;
      i1_02.z = SUB42(fVar28,0);
      i1_02._0_4_ = auStack_83 + 0x24;
      i2_02.y = uVar80;
      i2_02.x = iVar81;
      i2_02.z = iStack_73;
      IVar33 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Addition
                         (i1_02,i2_02,(MethodInfo *)CONCAT22(uVar38,iVar79));
      pVVar39 = (VoxelHit *)((uint)uVar80 << 0x10);
      uStack_5 = *IVar33._0_4_;
      iStack_6 = *(int16_t *)(IVar33._0_4_ + 1);
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
code_?:
    pfVar44 = (float *)((uint)uVar38 << 0x10);
  }
code_?:
  if ((((uint)(TypeInfo__MVSweptElipsoidCheck->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_started == 0)) {
    func_?();
  }
  pCVar42 = TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser;
  if (pCVar42 == (CellTraverser *)0x0) goto code_?;
  CellTraverser::CellTraverser_Step(pCVar42,(MethodInfo *)0x0);
  fVar77 = fStack_70;
  goto code_?;
}


/* Boolean MVElipsoidCast(Ray, Transform, Bounds, Single, VoxelHit ByRef, HashSet`1[System.Int32],
   Int32) */

bool Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_MVElipsoidCast
               (Ray ray,Transform *transform,Bounds localBounds,float distance,VoxelHit *voxelHit,
               HashSet_1_System_Int32_ *ignoreWoIds,int32_t layerMask,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?(voxelHit,0,0x48);
  if ((((uint)(TypeInfo__MVSweptElipsoidCheck->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVSweptElipsoidCheck);
  }
  this = MVSweptElipsoidCheck_MVElipsoidCast_2
                   (ray,transform,localBounds,0,distance,ignoreWoIds,layerMask,(MethodInfo *)0x0);
  if (this != (List_1_VoxelHit_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
              Serialization::JsonProperty]::
              Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                        ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this,
                         MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Count__);
    if (pOVar1 != (Object *)0x0) {
      pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                Serialization::JsonProperty]::
                Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                          ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this,
                           MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Count__);
      if ((int)pOVar1 < 2) {
        pVVar2 = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::
                  List_1_VoxelHit__get_Item
                            ((VoxelHit *)&stack0xffffffb4,this,0,
                             MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Item_int_
                            );
        fVar3 = (pVVar2->point).y;
        fVar4 = (pVVar2->point).z;
        fVar5 = (pVVar2->normal).x;
        fVar6 = (pVVar2->normal).y;
        fVar7 = (pVVar2->normal).z;
        iVar8 = (pVVar2->cubePos).x;
        iVar9 = (pVVar2->cubePos).y;
        uVar10 = *(undefined4 *)&(pVVar2->cubePos).z;
        iVar11 = pVVar2->face;
        bVar12 = pVVar2->isCubeHit;
        uVar13 = *(undefined3 *)&pVVar2->field_0x25;
        iVar14 = pVVar2->woId;
        pCVar15 = pVVar2->cube;
        fVar16 = pVVar2->distance;
        pCVar17 = pVVar2->collider;
        pTVar18 = pVVar2->transform;
        uVar19 = *(undefined4 *)&pVVar2->field_0x3c;
        iVar20 = pVVar2->interactionFlags;
        (voxelHit->point).x = (pVVar2->point).x;
        (voxelHit->point).y = fVar3;
        (voxelHit->point).z = fVar4;
        (voxelHit->normal).x = fVar5;
        (voxelHit->normal).y = fVar6;
        (voxelHit->normal).z = fVar7;
        (voxelHit->cubePos).x = iVar8;
        (voxelHit->cubePos).y = iVar9;
        *(undefined4 *)&(voxelHit->cubePos).z = uVar10;
        voxelHit->face = iVar11;
        voxelHit->isCubeHit = bVar12;
        *(undefined3 *)&voxelHit->field_0x25 = uVar13;
        voxelHit->woId = iVar14;
        voxelHit->cube = pCVar15;
        voxelHit->distance = fVar16;
        voxelHit->collider = pCVar17;
        voxelHit->transform = pTVar18;
        *(undefined4 *)&voxelHit->field_0x3c = uVar19;
        voxelHit->interactionFlags = iVar20;
        return 1;
      }
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Hit_counter_greater_than_1_,(MethodInfo *)0x0);
    }
    return 0;
  }
  func_?();
  pcVar21 = (code *)swi(3);
  bVar12 = (*pcVar21)();
  return bVar12;
}


/* List`1[VoxelHit] MVElipsoidCastAll(Ray, Transform, Bounds, Single, HashSet`1[System.Int32],
   Int32) */

List_1_VoxelHit_ *
Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_MVElipsoidCastAll
          (Ray ray,Transform *transform,Bounds localBounds,float distance,
          HashSet_1_System_Int32_ *ignoreWoIds,int32_t layerMask,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVSweptElipsoidCheck->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVSweptElipsoidCheck);
  }
  pLVar1 = MVSweptElipsoidCheck_MVElipsoidCast_2
                     (ray,transform,localBounds,1,distance,ignoreWoIds,layerMask,(MethodInfo *)0x0);
  return pLVar1;
}


/* List`1[VoxelHit] MVElipsoidCastAll(Ray, Vector3, Quaternion, Single, HashSet`1[System.Int32],
   Int32) */

List_1_VoxelHit_ *
Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_MVElipsoidCastAll_1
          (Ray ray,Vector3 radius,Quaternion rotation,float distance,
          HashSet_1_System_Int32_ *ignoreWoIds,int32_t layerMask,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVSweptElipsoidCheck->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVSweptElipsoidCheck);
  }
  pLVar1 = MVSweptElipsoidCheck_MVElipsoidCast_3
                     (ray,radius,rotation,distance,1,ignoreWoIds,layerMask,(MethodInfo *)0x0);
  return pLVar1;
}


/* Boolean MVElipsoidCast(Ray, Vector3, Quaternion, Single, VoxelHit ByRef, HashSet`1[System.Int32],
   Int32) */

bool Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_MVElipsoidCast_1
               (Ray ray,Vector3 radius,Quaternion rotation,float distance,VoxelHit *voxelHit,
               HashSet_1_System_Int32_ *ignoreWoIds,int32_t layerMask,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?(voxelHit,0,0x48);
  if (((radius.x != 0.0) && (radius.y != 0.0)) && (radius.z != 0.0)) {
    if ((((uint)(TypeInfo__MVSweptElipsoidCheck->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVSweptElipsoidCheck);
    }
    this = MVSweptElipsoidCheck_MVElipsoidCast_3
                     (ray,radius,rotation,distance,0,ignoreWoIds,layerMask,(MethodInfo *)0x0);
    if (this == (List_1_VoxelHit_ *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      bVar2 = (*pcVar1)();
      return bVar2;
    }
    pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
              Serialization::JsonProperty]::
              Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                        ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this,
                         MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Count__);
    if (pOVar3 != (Object *)0x0) {
      pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                Serialization::JsonProperty]::
                Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                          ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this,
                           MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Count__);
      if ((int)pOVar3 < 2) {
        pfVar4 = (float *)func_?();
        fVar5 = pfVar4[1];
        fVar6 = pfVar4[2];
        fVar7 = pfVar4[3];
        fVar8 = pfVar4[4];
        fVar9 = pfVar4[5];
        fVar10 = pfVar4[6];
        fVar11 = pfVar4[7];
        fVar12 = pfVar4[8];
        fVar13 = pfVar4[9];
        fVar14 = pfVar4[10];
        pCVar15 = (Cube *)pfVar4[0xb];
        fVar16 = pfVar4[0xc];
        pCVar17 = (Collider *)pfVar4[0xd];
        pTVar18 = (Transform *)pfVar4[0xe];
        fVar19 = pfVar4[0xf];
        iVar20 = *(int64_t *)(pfVar4 + 0x10);
        (voxelHit->point).x = *pfVar4;
        (voxelHit->point).y = fVar5;
        (voxelHit->point).z = fVar6;
        (voxelHit->normal).x = fVar7;
        (voxelHit->normal).y = fVar8;
        (voxelHit->normal).z = fVar9;
        *(float *)&voxelHit->cubePos = fVar10;
        *(float *)&(voxelHit->cubePos).z = fVar11;
        voxelHit->face = (int32_t)fVar12;
        *(float *)&voxelHit->isCubeHit = fVar13;
        voxelHit->woId = (int32_t)fVar14;
        voxelHit->cube = pCVar15;
        voxelHit->distance = fVar16;
        voxelHit->collider = pCVar17;
        voxelHit->transform = pTVar18;
        *(float *)&voxelHit->field_0x3c = fVar19;
        voxelHit->interactionFlags = iVar20;
        return 1;
      }
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Hit_counter_greater_than_1_,(MethodInfo *)0x0);
    }
  }
  return 0;
}


/* List`1[VoxelHit] MVElipsoidCast(Ray, Transform, Bounds, Boolean, Single, HashSet`1[System.Int32],
   Int32) */

List_1_VoxelHit_ *
Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_MVElipsoidCast_2
          (Ray ray,Transform *transform,Bounds localBounds,bool all,float distance,
          HashSet_1_System_Int32_ *ignoreWoIds,int32_t layerMask,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  puVar1 = (undefined8 *)func_?(&stack0xffffffe0,&localBounds,0);
  puStack_2 = (undefined *)((float)*puVar1 * _UNK_?);
  func_?(&stack0xffffffe0,&localBounds,0);
  func_?(&stack0xffffffe0,&localBounds,0);
  if (transform != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
              ((Vector3 *)&stack0xffffffd4,transform,(MethodInfo *)0x0);
    pVVar3 = (Vector3 *)func_?(&stack0xffffffd4,&localBounds,0);
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint
                        ((Vector3 *)&stack0xffffffd4,transform,*pVVar3,(MethodInfo *)0x0);
    uVar4 = pVVar3->x;
    uVar5 = pVVar3->y;
    fVar6 = pVVar3->z;
    pVVar3 = MathFunctions::MathFunctions_MultiplyVector
                        ((Vector3 *)&stack0xfffffff0,(Vector3 *)&puStack_2,
                         (Vector3 *)&stack0xffffffc8,(MethodInfo *)0x0);
    fVar7 = pVVar3->z;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)(auStack_8 + 4),transform,(MethodInfo *)0x0);
    uVar9._0_4_ = pVVar3->x;
    uVar9._4_4_ = pVVar3->y;
    fVar10 = pVVar3->z;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    VVar11.y = (float)uVar5;
    VVar11.x = (float)uVar4;
    VVar11.z = fVar6;
    b.z = fVar10;
    b.x = (float)(int)uVar9;
    b.y = (float)(int)((ulonglong)uVar9 >> 0x20);
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                        ((Vector3 *)(auStack_8 + 4),VVar11,b,(MethodInfo *)0x0);
    uVar12 = pVVar3->x;
    uVar13 = pVVar3->y;
    uVar9._0_4_ = pVVar3->z;
    pRVar14 = &ray;
    pVVar3 = (Vector3 *)func_?();
    puVar15 = &UNK_?;
    b_00.y = (float)uVar13;
    b_00.x = (float)uVar12;
    b_00.z = (float)uVar9;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                        ((Vector3 *)(auStack_8 + 4),*pVVar3,b_00,(MethodInfo *)0x0);
    uVar16 = pVVar3->x;
    uVar17 = pVVar3->y;
    ray.m_Direction.z = pVVar3->z;
    ray.m_Origin.z = (float)&ray;
    ray.m_Origin.y = (float)&UNK_?;
    ray.m_Direction.x = (float)uVar16;
    ray.m_Direction.y = (float)uVar17;
    func_?();
    uVar9._4_4_ = ray.m_Origin.y;
    uVar9._0_4_ = ray.m_Origin.x;
    ray.m_Origin.y = 0.0;
    ray.m_Origin.x = (float)transform;
    fVar6 = ray.m_Origin.z;
    fVar10 = ray.m_Direction.x;
    pQVar18 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                        ((Quaternion *)auStack_8,transform,(MethodInfo *)0x0);
    auStack_8._0_4_ = pQVar18->x;
    auStack_8._4_4_ = pQVar18->y;
    fStack_19 = pQVar18->z;
    fStack_20 = pQVar18->w;
    if ((((uint)(TypeInfo__MVSweptElipsoidCheck->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_started == 0)) {
      localBounds.m_Center.z = (float)TypeInfo__MVSweptElipsoidCheck;
      localBounds.m_Center.y = (float)&UNK_?;
      func_?();
    }
    localBounds.m_Center.z = 0.0;
    localBounds.m_Center.y = (float)layerMask;
    localBounds.m_Center.x = (float)ignoreWoIds;
    ray.m_Direction.z = distance;
    ray.m_Origin.y = (float)auStack_8._0_4_;
    ray.m_Origin.z = (float)auStack_8._4_4_;
    ray.m_Direction.x = fStack_19;
    ray.m_Direction.y = fStack_20;
    ray_00.m_Origin.y = uVar9._4_4_;
    ray_00.m_Origin.x = (float)uVar9;
    ray_00.m_Origin.z = fVar6;
    ray_00.m_Direction.x = fVar10;
    ray_00.m_Direction.y = (float)uVar9;
    ray_00.m_Direction.z = uVar9._4_4_;
    ray.m_Origin.x = fVar7;
    fVar21 = (float)puVar15;
    VVar11.x = (float)pRVar14;
    VVar11 = (Vector3)CONCAT84(VVar11._0_8_,VVar11.x);
    rotation.y = (float)auStack_8._4_4_;
    rotation.x = (float)auStack_8._0_4_;
    rotation.z = fStack_19;
    rotation.w = fStack_20;
    pLVar22 = MVSweptElipsoidCheck_MVElipsoidCast_3
                        (ray_00,VVar11,rotation,distance,all,ignoreWoIds,layerMask,(MethodInfo *)0x0
                        );
    return pLVar22;
  }
  func_?();
  pcVar23 = (code *)swi(3);
  pLVar22 = (List_1_VoxelHit_ *)(*pcVar23)();
  return pLVar22;
}


/* List`1[VoxelHit] MVElipsoidCast(Ray, Vector3, Quaternion, Single, Boolean,
   HashSet`1[System.Int32], Int32) */

List_1_VoxelHit_ *
Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_MVElipsoidCast_3
          (Ray ray,Vector3 radius,Quaternion rotation,float distance,bool all,
          HashSet_1_System_Int32_ *ignoreWoIds,int32_t layerMask,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?(&puStack_1,0,0x48);
  if ((((uint)(TypeInfo__MVSweptElipsoidCheck->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVSweptElipsoidCheck);
  }
  this = (List_1_UnityEngine_UIVertex_ *)TypeInfo__MVSweptElipsoidCheck->static_fields->voxelHits;
  if (this != (List_1_UnityEngine_UIVertex_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
    List_1_UnityEngine_UIVertex__Clear
              (this,MethodInfo__System__Collections__Generic__List<VoxelHit>__Clear__);
    pVVar2 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                       ((Vector3 *)&stack0xffffffd8,(InputToPlayerMovementAndroid *)&ray,
                        (MethodInfo *)0x0);
    uVar3._0_4_ = pVVar2->x;
    uVar3._4_4_ = pVVar2->y;
    fVar4 = pVVar2->z;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      pVStack_5 = TypeInfo__UnityEngine__Vector3;
      func_?();
    }
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                       ((Vector3 *)&stack0xffffffd8,(MethodInfo *)0x0);
    lhs.z = fVar4;
    lhs.x = (float)(int)uVar3;
    lhs.y = (float)(int)((ulonglong)uVar3 >> 0x20);
    bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Equality
                      (lhs,*pVVar2,(MethodInfo *)0x0);
    if (bVar6 == 0) {
      if (all != 0) {
        if ((((uint)(TypeInfo__MVSweptElipsoidCheck->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_started == 0)) {
          func_?();
        }
        this_00 = (HashSet_1_UnityEngine_Vector3_ *)
                  TypeInfo__MVSweptElipsoidCheck->static_fields->foundWos;
        if (this_00 == (HashSet_1_UnityEngine_Vector3_ *)0x0) goto code_?;
        System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
        HashSet_1_UnityEngine_Vector3__Clear
                  (this_00,MethodInfo__System__Collections__Generic__HashSet<int>__Clear__);
      }
      iVar7 = 0;
      fVar4 = 0.0;
      do {
        fVar8 = (float10)func_?();
        if (fVar4 < (float)fVar8) {
          fVar8 = (float10)func_?();
          fVar4 = (float)fVar8;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < 3);
      puVar9 = (undefined8 *)func_?();
      uVar3 = *puVar9;
      fVar10 = *(float *)(puVar9 + 1);
      if ((((uint)(TypeInfo__CollisionDetectionGlobalBuffers->vtable).Equals.methodPtr & 0x2000000)
           != 0) && ((TypeInfo__CollisionDetectionGlobalBuffers->_1).cctor_started == 0)) {
        func_?();
      }
      position.z = fVar10;
      position.x = (float)(int)uVar3;
      position.y = (float)(int)((ulonglong)uVar3 >> 0x20);
      overlapAmount =
           UnityEngine.PhysicsModule.dll::UnityEngine::Physics::Physics_OverlapSphereNonAlloc_1
                     (position,fVar4,
                      TypeInfo__CollisionDetectionGlobalBuffers->static_fields->colliderBuffer,
                      layerMask,(MethodInfo *)0x0);
      ray_01.m_Origin.y = ray.m_Origin.y;
      ray_01.m_Origin.x = ray.m_Origin.x;
      ray_01.m_Origin.z = ray.m_Origin.z;
      ray_01.m_Direction.x = ray.m_Direction.x;
      ray_01.m_Direction.y = ray.m_Direction.y;
      ray_01.m_Direction.z = ray.m_Direction.z;
      hitAmount = UnityEngine.PhysicsModule.dll::UnityEngine::Physics::Physics_SphereCastNonAlloc_2
                            (ray_01,fVar4,
                             TypeInfo__CollisionDetectionGlobalBuffers->static_fields->rayHitBuffer,
                             distance,layerMask,(MethodInfo *)0x0);
      hits = (RaycastHit__Array *)&ray;
      overlapResult = (Collider__Array *)&UNK_?;
      puVar9 = (undefined8 *)func_?();
      uVar3 = *puVar9;
      fVar4 = *(float *)(puVar9 + 1);
      fVar10 = (float)uVar3;
      fVar11 = (float)((ulonglong)uVar3 >> 0x20);
      if ((((uint)(TypeInfo__SharedCollisionFunctions->vtable).Equals.methodPtr & 0x2000000) != 0)
         && ((TypeInfo__SharedCollisionFunctions->_1).cctor_started == 0)) {
        func_?(TypeInfo__SharedCollisionFunctions);
        uVar3 = CONCAT44(fVar11,fVar10);
      }
      origin.z = fVar4;
      origin.x = (float)(int)uVar3;
      origin.y = (float)(int)((ulonglong)uVar3 >> 0x20);
      this_04 = (HashSet_1_System_Int32_ *)
                SharedCollisionFunctions::SharedCollisionFunctions_GetPhysicsCollisionData_1
                          (overlapAmount,overlapResult,hitAmount,hits,origin,(MethodInfo *)0x0);
      iVar7 = 0;
      if (this_04 == (HashSet_1_System_Int32_ *)0x0) goto code_?;
      while( true ) {
        pIVar12 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items
                           ((Collection_1_VoxelHit_ *)this_04,(MethodInfo *)0x0);
        if ((int)pIVar12 <= iVar7) break;
        pPVar13 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                           ((PhysicsCollisionDatasWrapper *)this_04,iVar7,(MethodInfo *)0x0);
        if (pPVar13 == (PhysicsCollisionData *)0x0) goto code_?;
        wo = MVWorldObjectClientManager::MVWorldObjectClientManager_GetMVObject
                       ((pPVar13->fields).transform,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__SharedCollisionFunctions->vtable).Equals.methodPtr & 0x2000000) != 0)
           && ((TypeInfo__SharedCollisionFunctions->_1).cctor_started == 0)) {
          func_?();
        }
        bVar6 = SharedCollisionFunctions::SharedCollisionFunctions_IgnoreCollision
                          (wo,ignoreWoIds,(MethodInfo *)0x0);
        if (bVar6 == 0) {
          if (all != 0) {
            if ((((uint)(TypeInfo__MVSweptElipsoidCheck->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_started == 0)) {
              this_04 = (HashSet_1_System_Int32_ *)&UNK_?;
              func_?();
            }
            this_01 = (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)
                      TypeInfo__MVSweptElipsoidCheck->static_fields->foundWos;
            if (wo == (MVWorldObjectClient *)0x0) goto code_?;
            pIVar12 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                     Collection_1_VoxelHit__get_Items
                               ((Collection_1_VoxelHit_ *)wo,(MethodInfo *)0x0);
            if (this_01 == (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)0x0)
            goto code_?;
            bVar6 = System.Core.dll::System::Collections::Generic::HashSet`1[GoogleMobileAds::Api::
                    NativeAdType]::HashSet_1_GoogleMobileAds_Api_NativeAdType__Contains
                              (this_01,(NativeAdType__Enum)pIVar12,
                               MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_
                              );
            if (bVar6 != 0) goto code_?;
          }
          pCVar14 = (CanvasGroup *)radius.z;
          if ((((uint)(TypeInfo__MVSweptElipsoidCheck->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_started == 0)) {
            func_?();
          }
          voxelHit = (VoxelHit *)&puStack_1;
          handleObjectsInsideBoxCollider = all ^ 1;
          pCVar15 = (Collider *)(uint)handleObjectsInsideBoxCollider;
          ray_00.m_Direction.y._0_1_ = handleObjectsInsideBoxCollider;
          ray_00._0_16_ = rotation;
          ray_00.m_Direction.y._1_3_ = 0;
          ray_00.m_Direction.z = (float)voxelHit;
          radius_00.y = (float)iVar7;
          radius_00.x = distance;
          radius_00.z = (float)pCVar14;
          fVar4 = rotation.x;
          fVar10 = rotation.y;
          pCVar16 = (Cube *)rotation.z;
          fVar11 = rotation.w;
          fVar17 = distance;
          iVar18 = iVar7;
          this_04 = ignoreWoIds;
          bVar6 = MVSweptElipsoidCheck_SphereHitDetectOnWo
                            (ray_00,radius_00,rotation,0.0,distance,iVar7,wo,
                             (PhysicsCollisionDatasWrapper *)ignoreWoIds,
                             handleObjectsInsideBoxCollider,voxelHit,ignoreWoIds,(MethodInfo *)0x0);
          if (bVar6 != 0) {
            if ((((uint)(TypeInfo__MVSweptElipsoidCheck->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_started == 0)) {
              func_?();
            }
            this_02 = (List_1_GameTierProgressBar_TierProgressData_ *)
                      TypeInfo__MVSweptElipsoidCheck->static_fields->voxelHits;
            if (this_02 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0)
            goto code_?;
            item.progressText = (Text *)pVStack_5;
            item.progressBar = (ProgressBar *)puStack_1;
            item.progressDivider = (GameObject *)fStack_19;
            item.progressBarTextBubble = (GamePassesTextBubble *)fStack_20;
            item.avatarHead = (GamePassesTextBubble *)fStack_21;
            item.avatarHeadImage = (RawImage *)fStack_22;
            item.avatarHeadUI = (GameObject *)IStack_23._0_4_;
            item.disabledProgressBar = (ProgressBar *)stack0xffffff9c;
            item.disabledProgressDivider = (GameObject *)puStack_24;
            item.disabledBarTextBubble = (GamePassesTextBubble *)fVar4;
            item.tierIconTempUnlock = (GameObject *)fVar10;
            item.tierIconNumber = (GameObject *)pCVar16;
            item.endResultProgressBar = (ProgressBar *)fVar11;
            item.tempProgress = (GameObject *)pCVar15;
            item.disabledTempProgress = (GameObject *)voxelHit;
            item.freeTryTextBubble = (GamePassesTextBubble *)fVar17;
            item.hoverInputHandler = (HoverInputHandler *)iVar18;
            item.LockedTierIcon = pCVar14;
            mscorlib.dll::System::Collections::Generic::List`1[GameTierProgressBar+TierProgressData]
            ::List_1_GameTierProgressBar_TierProgressData__Add
                      (this_02,item,
                       MethodInfo__System__Collections__Generic__List<VoxelHit>__Add_VoxelHit_);
            this_03 = (HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)
                      TypeInfo__MVSweptElipsoidCheck->static_fields->foundWos;
            if (wo == (MVWorldObjectClient *)0x0) goto code_?;
            item_00 = (UnityWebRequest *)
                      mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                      Collection_1_VoxelHit__get_Items
                                ((Collection_1_VoxelHit_ *)wo,(MethodInfo *)0x0);
            if (this_03 == (HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)0x0)
            goto code_?;
            System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Networking::
            UnityWebRequest]::HashSet_1_UnityEngine_Networking_UnityWebRequest__Add
                      (this_03,item_00,
                       MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
            if (all == 0) break;
          }
        }
code_?:
        iVar7 = iVar7 + 1;
      }
    }
    if ((((uint)(TypeInfo__MVSweptElipsoidCheck->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_started == 0)) {
      func_?();
    }
    return TypeInfo__MVSweptElipsoidCheck->static_fields->voxelHits;
  }
code_?:
  func_?(0);
  pcVar25 = (code *)swi(3);
  pLVar26 = (List_1_VoxelHit_ *)(*pcVar25)();
  return pLVar26;
}


/* Void MoveAxisAlignedRectBackward(Vector3[], Vector3, Vector3) */

void Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_MoveAxisAlignedRectBackward
               (Vector3__Array *pointsOnProjectPlane,Vector3 startOrigin,Vector3 dir,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = dir.z;
  func_?(&stack0xffffffd0,dir._0_8_,dir.z,startOrigin._0_8_,startOrigin.z,0);
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                      ((Vector3 *)&stack0xffffffe0,(MethodInfo *)0x0);
  uVar3 = pVVar2->x;
  uVar4 = pVVar2->y;
  fVar5 = pVVar2->z;
  VVar6.z = fVar1;
  VVar6.x = dir.x;
  VVar6.y = dir.y;
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_UnaryNegation
            ((Vector3 *)&stack0xffffffe0,VVar6,(MethodInfo *)0x0);
  func_?(&stack0xffffffb8,uVar3,uVar4,fVar5);
  uVar7 = 0;
  if (pointsOnProjectPlane != (Vector3__Array *)0x0) {
    pVVar2 = pointsOnProjectPlane->vector;
    pVVar8 = pVVar2;
    for (; (int)uVar7 < (int)pointsOnProjectPlane->max_length; uVar7 = uVar7 + 1) {
      if (pointsOnProjectPlane->max_length <= uVar7) goto code_?;
      fVar1 = pVVar8->x;
      fVar5 = pVVar8->y;
      fVar9 = pVVar8->z;
      cVar10 = func_?(&stack0xffffffd0);
      if (cVar10 != '\0') {
        uVar11 = 0;
        func_?(&stack0xffffffb8);
        func_?(&stack0xffffffd0,fVar1,fVar5,fVar9,uVar11);
      }
      pVVar8 = pVVar8 + 1;
    }
    if (_UNK_? < 0.0) {
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      a.z = dir.z;
      a.x = dir.x;
      a.y = dir.y;
      pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_UnaryNegation
                          (&dir,a,(MethodInfo *)0x0);
      pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                          (&dir,*pVVar8,0.0,(MethodInfo *)0x0);
      fVar9 = pVVar8->x;
      fVar12 = pVVar8->y;
      dir.z = pVVar8->z;
      for (uVar7 = 0; (int)uVar7 < (int)pointsOnProjectPlane->max_length; uVar7 = uVar7 + 1) {
        if (pointsOnProjectPlane->max_length <= uVar7) goto code_?;
        VVar6 = *pVVar2;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?();
        }
        b.y = fVar12;
        b.x = fVar9;
        b.z = dir.z;
        pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                            ((Vector3 *)&stack0xffffffec,VVar6,b,(MethodInfo *)0x0);
        fVar5 = pVVar8->y;
        fVar1 = pVVar8->z;
        pVVar2->x = pVVar8->x;
        pVVar2->y = fVar5;
        pVVar2->z = fVar1;
        pVVar2 = pVVar2 + 1;
      }
    }
    return;
  }
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
code_?:
  func_?();
  func_?();
  goto code_?;
}


/* Void MoveAxisAlignedRectOutOfBox(Vector3[], Vector3, Vector3, Vector3) */

void Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_MoveAxisAlignedRectOutOfBox
               (Vector3__Array *axisAlignedRect,Vector3 localNormal,Vector3 localHit,
               Vector3 localDir,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = 0;
  if ((((uint)(TypeInfo__MVSweptElipsoidCheck->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVSweptElipsoidCheck);
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  a.z = localNormal.z;
  a.x = localNormal.x;
  a.y = localNormal.y;
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_UnaryNegation
                      (&localNormal,a,(MethodInfo *)0x0);
  uVar3 = pVVar2->x;
  uVar4 = pVVar2->y;
  func_?(&TypeInfo__MVSweptElipsoidCheck->static_fields->collisionPlane0,uVar3,uVar4,
                  pVVar2->z,localHit._0_8_);
  localNormal.z = 0.0;
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
            ((Vector3 *)&stack0xffffffec,(MethodInfo *)0x0);
  a_00.z = localDir.z;
  a_00.x = localDir.x;
  a_00.y = localDir.y;
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_UnaryNegation
            ((Vector3 *)&stack0xffffffec,a_00,(MethodInfo *)0x0);
  func_?();
  localHit.z = 0.0;
  if (axisAlignedRect != (Vector3__Array *)0x0) {
    pVVar2 = axisAlignedRect->vector;
    for (; (int)localHit.z < (int)axisAlignedRect->max_length;
        localHit.z = (float)((int)localHit.z + 1)) {
      if (axisAlignedRect->max_length <= (uint)localHit.z) goto code_?;
      func_?();
      if ((((uint)(TypeInfo__MVSweptElipsoidCheck->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_started == 0)) {
        func_?();
      }
      cVar5 = func_?();
      if ((cVar5 != '\0') && (localNormal.z < (float)uVar1)) {
        localNormal.z = (float)uVar1;
      }
    }
    if (localNormal.z != _UNK_?) {
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      a_01.z = localDir.z;
      a_01.x = localDir.x;
      a_01.y = localDir.y;
      pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                          (&localDir,a_01,(float)((uint)localNormal.z ^ _UNK_?),
                           (MethodInfo *)0x0);
      fVar7 = pVVar6->x;
      fVar8 = pVVar6->y;
      localDir.z = pVVar6->z;
      for (uVar9 = 0; (int)uVar9 < (int)axisAlignedRect->max_length; uVar9 = uVar9 + 1) {
        if (axisAlignedRect->max_length <= uVar9) goto code_?;
        localNormal.z = pVVar2->z;
        uVar10 = pVVar2->x;
        fVar11 = pVVar2->y;
        a_02.y = fVar11;
        a_02.x = (float)uVar10;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?();
        }
        b.y = fVar8;
        b.x = fVar7;
        axisAlignedRect = (Vector3__Array *)0x0;
        a_02.z = localNormal.z;
        b.z = localDir.z;
        fVar8 = localNormal.z;
        pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                            ((Vector3 *)&stack0xffffffe0,a_02,b,(MethodInfo *)0x0);
        fVar12 = pVVar6->y;
        fVar7 = pVVar6->z;
        pVVar2->x = pVVar6->x;
        pVVar2->y = fVar12;
        pVVar2->z = fVar7;
        pVVar2 = pVVar2 + 1;
        fVar7 = fVar11;
      }
    }
    return;
  }
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
code_?:
  func_?();
  func_?();
  goto code_?;
}


/* Boolean RayCast(Ray, Vector3 ByRef, Plane) */

bool Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_RayCast
               (Ray ray,Vector3 *hit,Plane collPlane,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fStack_1 = 0.0;
  cVar2 = func_?(&collPlane,ray.m_Origin.x,ray.m_Origin.y,ray.m_Origin.z,ray.m_Direction.x,
                          ray.m_Direction._4_8_,&fStack_1,0);
  if (cVar2 == '\0') {
    return 0;
  }
  uVar3 = 0;
  pRVar4 = &ray;
  pVVar5 = &VStack_6;
  puVar7 = (undefined8 *)func_?();
  uVar8 = *puVar7;
  uVar9 = *(undefined4 *)(puVar7 + 1);
  InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
            (&VStack_6,(InputToPlayerMovementAndroid *)&ray,(MethodInfo *)0x0);
  puVar7 = (undefined8 *)func_?(&stack0xffffffc8,&stack0xffffffd4,0,pVVar5,pRVar4,uVar3);
  fStack_10 = fStack_1;
  VStack_6._4_8_ = *puVar7;
  fVar11 = *(float *)(puVar7 + 1);
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
  }
  a.z = fVar11;
  a.x = VStack_6.y;
  a.y = VStack_6.z;
  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     ((Vector3 *)&stack0xffffffc8,a,fStack_10,(MethodInfo *)0x0);
  auVar12._4_4_ = uVar9;
  auVar12._0_4_ = (int)((ulonglong)uVar8 >> 0x20);
  auVar12._8_4_ = 0;
  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                     ((Vector3 *)&stack0xffffffc8,(Vector3)(auVar12 << 0x20),*pVVar5,
                      (MethodInfo *)0x0);
  fVar13 = pVVar5->y;
  fVar11 = pVVar5->z;
  hit->x = pVVar5->x;
  hit->y = fVar13;
  hit->z = fVar11;
  return 1;
}


/* Void SetFoundHitVariables(VoxelHit ByRef, PhysicsCollisionData, Int32, InteractionFlags) */

void Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_SetFoundHitVariables
               (VoxelHit *voxelHit,PhysicsCollisionData *collisionData,int32_t woId,
               InteractionFlags__Enum interactionFlag,MethodInfo *method)

{
  voxelHit->isCubeHit = 1;
  voxelHit->woId = woId;
  if (collisionData != (PhysicsCollisionData *)0x0) {
    voxelHit->collider = (collisionData->fields).collider;
    voxelHit->transform = (collisionData->fields).transform;
    *(InteractionFlags__Enum *)&voxelHit->interactionFlags = interactionFlag;
    *(MethodInfo **)((int)&voxelHit->interactionFlags + 4) = method;
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Boolean SphereHitDetectOnWo(Ray, Vector3, Quaternion, Single, Single, Int32, MVWorldObjectClient,
   PhysicsCollisionDatasWrapper, Boolean, VoxelHit ByRef, HashSet`1[System.Int32]) */

bool Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck_SphereHitDetectOnWo
               (Ray ray,Vector3 radius,Quaternion rotation,float maxRadius,float distance,int32_t i,
               MVWorldObjectClient *wo,PhysicsCollisionDatasWrapper *collisionData,
               bool handleObjectsInsideBoxCollider,VoxelHit *voxelHit,
               HashSet_1_System_Int32_ *ignoreWoIds,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?(voxelHit,0,0x48);
  iVar1 = func_?(wo,TypeInfo__ICubeModelCollider);
  if (iVar1 == 0) {
    if ((collisionData != (PhysicsCollisionDatasWrapper *)0x0) &&
       (pPVar2 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                            (collisionData,i,(MethodInfo *)0x0),
       pPVar2 != (PhysicsCollisionData *)0x0)) {
      if ((pPVar2->fields).isInsideCollider != 0) {
        return 0;
      }
      pPVar2 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                          (collisionData,i,(MethodInfo *)0x0);
      if (wo != (MVWorldObjectClient *)0x0) {
        woId = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)wo,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__SharedCollisionFunctions->vtable).Equals.methodPtr & 0x2000000) != 0)
           && ((TypeInfo__SharedCollisionFunctions->_1).cctor_started == 0)) {
          func_?();
        }
        SharedCollisionFunctions::SharedCollisionFunctions_SetToNoneVoxelHit
                  (voxelHit,pPVar2,(int32_t)woId,(MethodInfo *)0x0);
        return 1;
      }
    }
    goto code_?;
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                      (&VStack_4,(MethodInfo *)0x0);
  uStack_5._0_4_ = pVVar3->x;
  uStack_5._4_4_ = pVVar3->y;
  fVar6 = pVVar3->z;
  if ((((uint)(TypeInfo__UnityEngine__Matrix4x4->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Matrix4x4->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Matrix4x4);
  }
  pos.z = fVar6;
  pos.x = (float)uStack_5;
  pos.y = uStack_5._4_4_;
  pMVar7 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                      ((Matrix4x4 *)&stack0xffffff74,pos,rotation,radius,(MethodInfo *)0x0);
  fVar8 = pMVar7->m00;
  VStack_4.x = pMVar7->m10;
  VStack_4.y = pMVar7->m20;
  VStack_4.z = pMVar7->m30;
  fStack_9 = pMVar7->m01;
  fStack_10 = pMVar7->m11;
  uStack_5._0_4_ = pMVar7->m21;
  uStack_5._4_4_ = pMVar7->m31;
  fVar6 = pMVar7->m02;
  fVar11 = pMVar7->m12;
  fVar12 = pMVar7->m22;
  fVar13 = pMVar7->m32;
  fVar14 = pMVar7->m03;
  fVar15 = pMVar7->m13;
  fVar16 = pMVar7->m23;
  fVar17 = pMVar7->m33;
  fVar18 = pMVar7->m21;
  fVar19 = pMVar7->m31;
  if ((((uint)(TypeInfo__MVSweptElipsoidCheck->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_started == 0)) {
    func_?();
    fVar18 = (float)uStack_5;
    fVar19 = uStack_5._4_4_;
  }
  pMVar20 = TypeInfo__MVSweptElipsoidCheck->static_fields;
  (pMVar20->elipsoidSpaceToWorld).m00 = fVar8;
  (pMVar20->elipsoidSpaceToWorld).m10 = VStack_4.x;
  (pMVar20->elipsoidSpaceToWorld).m20 = VStack_4.y;
  (pMVar20->elipsoidSpaceToWorld).m30 = VStack_4.z;
  (pMVar20->elipsoidSpaceToWorld).m01 = fStack_9;
  (pMVar20->elipsoidSpaceToWorld).m11 = fStack_10;
  (pMVar20->elipsoidSpaceToWorld).m21 = fVar18;
  (pMVar20->elipsoidSpaceToWorld).m31 = fVar19;
  (pMVar20->elipsoidSpaceToWorld).m02 = fVar6;
  (pMVar20->elipsoidSpaceToWorld).m12 = fVar11;
  (pMVar20->elipsoidSpaceToWorld).m22 = fVar12;
  (pMVar20->elipsoidSpaceToWorld).m32 = fVar13;
  (pMVar20->elipsoidSpaceToWorld).m03 = fVar14;
  (pMVar20->elipsoidSpaceToWorld).m13 = fVar15;
  (pMVar20->elipsoidSpaceToWorld).m23 = fVar16;
  (pMVar20->elipsoidSpaceToWorld).m33 = fVar17;
  pfVar21 = (float *)func_?();
  fVar6 = pfVar21[1];
  fVar11 = pfVar21[2];
  fVar12 = pfVar21[3];
  fVar13 = pfVar21[4];
  fVar14 = pfVar21[5];
  fVar15 = pfVar21[6];
  fVar16 = pfVar21[7];
  fVar17 = pfVar21[8];
  fVar8 = pfVar21[9];
  fVar18 = pfVar21[10];
  fVar19 = pfVar21[0xb];
  fVar22 = pfVar21[0xc];
  fVar23 = pfVar21[0xd];
  fVar24 = pfVar21[0xe];
  fVar25 = pfVar21[0xf];
  pMVar20 = TypeInfo__MVSweptElipsoidCheck->static_fields;
  (pMVar20->worldToElipsoidSpace).m00 = *pfVar21;
  (pMVar20->worldToElipsoidSpace).m10 = fVar6;
  (pMVar20->worldToElipsoidSpace).m20 = fVar11;
  (pMVar20->worldToElipsoidSpace).m30 = fVar12;
  (pMVar20->worldToElipsoidSpace).m01 = fVar13;
  (pMVar20->worldToElipsoidSpace).m11 = fVar14;
  (pMVar20->worldToElipsoidSpace).m21 = fVar15;
  (pMVar20->worldToElipsoidSpace).m31 = fVar16;
  (pMVar20->worldToElipsoidSpace).m02 = fVar17;
  (pMVar20->worldToElipsoidSpace).m12 = fVar8;
  (pMVar20->worldToElipsoidSpace).m22 = fVar18;
  (pMVar20->worldToElipsoidSpace).m32 = fVar19;
  (pMVar20->worldToElipsoidSpace).m03 = fVar22;
  (pMVar20->worldToElipsoidSpace).m13 = fVar23;
  (pMVar20->worldToElipsoidSpace).m23 = fVar24;
  (pMVar20->worldToElipsoidSpace).m33 = fVar25;
  pIVar26 = TypeInfo__ICubeModelCollider;
  if (wo == (MVWorldObjectClient *)0x0) {
    pIVar27 = (ICubeModelCollider *)0x0;
code_?:
    MVSweptElipsoidCheck_GetBoundRays(ray,pIVar27,(MethodInfo *)0x0);
    if ((collisionData == (PhysicsCollisionDatasWrapper *)0x0) ||
       (pPVar2 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                            (collisionData,i,(MethodInfo *)0x0),
       pPVar2 == (PhysicsCollisionData *)0x0)) goto code_?;
    pBVar28 = (BoxCollider *)(pPVar2->fields).collider;
    pPStack_29 = PhysicsCollisionDatasWrapper::PhysicsCollisionDatasWrapper_get_Item
                          (collisionData,i,(MethodInfo *)0x0);
    pRStack_30 = TypeInfo__MVSweptElipsoidCheck->static_fields->raysGetBoundRays;
    uStack_5 = CONCAT44(TypeInfo__ICubeModelCollider,(float)uStack_5);
    pIVar27 = (ICubeModelCollider *)0x0;
    if ((wo == (MVWorldObjectClient *)0x0) ||
       (pIVar27 = (ICubeModelCollider *)func_?(), pIVar27 != (ICubeModelCollider *)0x0)) {
      if (pBVar28 == (BoxCollider *)0x0) {
        chunk = (BoxCollider *)0x0;
code_?:
        bVar31 = MVSweptElipsoidCheck_LayerScan
                           (voxelHit,radius,maxRadius,chunk,distance,pIVar27,pPStack_29,ray,pRStack_30
                            ,(MethodInfo *)0x0);
        if (bVar31 == 0) {
          return 0;
        }
        if (handleObjectsInsideBoxCollider == 0) {
          return 1;
        }
        if ((((uint)(TypeInfo__MVSweptElipsoidCheck->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVSweptElipsoidCheck->_1).cctor_started == 0)) {
          func_?();
        }
        MVSweptElipsoidCheck_HandleObjectsInsideBoxCollider
                  (ray,radius,rotation,maxRadius,distance,i,collisionData,voxelHit,
                   TypeInfo__MVSweptElipsoidCheck->static_fields->raysGetBoundRays,ignoreWoIds,
                   (MethodInfo *)0x0);
        return 1;
      }
      bVar32 = (TypeInfo__UnityEngine__BoxCollider->_1).naturalAligment;
      if (((((Collider__Class *)pBVar28->klass)->_1).naturalAligment < bVar32) ||
         ((((Collider__Class *)pBVar28->klass)->_1).typeHierarchy[bVar32 - 1] !=
          (Il2CppClass *)TypeInfo__UnityEngine__BoxCollider)) {
        bVar33 = false;
      }
      else {
        bVar33 = true;
      }
      chunk = (BoxCollider *)0x0;
      if (bVar33) {
        chunk = pBVar28;
      }
      if (chunk != (BoxCollider *)0x0) goto code_?;
      goto code_?;
    }
  }
  else {
    pIVar27 = (ICubeModelCollider *)func_?(wo,TypeInfo__ICubeModelCollider);
    if (pIVar27 != (ICubeModelCollider *)0x0) goto code_?;
    func_?(wo,pIVar26);
code_?:
    func_?();
  }
  func_?();
code_?:
  func_?();
  pcVar34 = (code *)swi(3);
  bVar31 = (*pcVar34)();
  return bVar31;
}


/* MVSweptElipsoidCheck() */

void Assembly-CSharp.dll::MVSweptElipsoidCheck::MVSweptElipsoidCheck__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pHVar1 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>
                          );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (pHVar1,
             MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__HashSet__
            );
  TypeInfo__MVSweptElipsoidCheck->static_fields->debugTestedIntVector =
       (HashSet_1_MV_WorldObject_IntVector_ *)pHVar1;
  this = (CellTraverser *)func_?(TypeInfo__CellTraverser);
  CellTraverser::CellTraverser__ctor(this,(MethodInfo *)0x0);
  TypeInfo__MVSweptElipsoidCheck->static_fields->cellTraverser = this;
  pMVar2 = TypeInfo__MVSweptElipsoidCheck->static_fields;
  (pMVar2->collisionPlane).m_Normal.x = 0.0;
  (pMVar2->collisionPlane).m_Normal.y = 0.0;
  (pMVar2->collisionPlane).m_Normal.z = 0.0;
  (pMVar2->collisionPlane).m_Distance = 0.0;
  pMVar2 = TypeInfo__MVSweptElipsoidCheck->static_fields;
  (pMVar2->collisionPlane0).m_Normal.x = 0.0;
  (pMVar2->collisionPlane0).m_Normal.y = 0.0;
  (pMVar2->collisionPlane0).m_Normal.z = 0.0;
  (pMVar2->collisionPlane0).m_Distance = 0.0;
  pHVar1 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
           func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (pHVar1,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  TypeInfo__MVSweptElipsoidCheck->static_fields->foundWos = (HashSet_1_System_Int32_ *)pHVar1;
  this_00 = (List_1_VoxelHit_ *)
            func_?(TypeInfo__System__Collections__Generic__List<VoxelHit>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            ((List_1_UnityEngine_Vector4_ *)this_00,
             MethodInfo__System__Collections__Generic__List<VoxelHit>__List__);
  TypeInfo__MVSweptElipsoidCheck->static_fields->voxelHits = this_00;
  pVVar3 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,8);
  TypeInfo__MVSweptElipsoidCheck->static_fields->cachedCornersElipsoidSpace = pVVar3;
  pVVar3 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,4);
  uVar4 = 0x48;
  fVar5 = 0.0;
  TypeInfo__MVSweptElipsoidCheck->static_fields->cachedFaceElipsoidSpace = pVVar3;
  ppVStack_6 = &pVStack_7;
  func_?();
  puVar8 = puStack_9;
  puStack_9 = (undefined *)0x4;
  pMVar2 = TypeInfo__MVSweptElipsoidCheck->static_fields;
  (pMVar2->vhCached).point.x = (float)pVStack_7;
  (pMVar2->vhCached).point.y = (float)puStack_10;
  (pMVar2->vhCached).point.z = (float)pVStack_11;
  (pMVar2->vhCached).normal.x = (float)puVar8;
  (pMVar2->vhCached).normal.y = (float)ppVStack_6;
  (pMVar2->vhCached).normal.z = fVar5;
  (pMVar2->vhCached).cubePos.x = (short)uVar4;
  (pMVar2->vhCached).cubePos.y = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&(pMVar2->vhCached).cubePos.z = in_stack_12;
  (pMVar2->vhCached).face = in_stack_13;
  *(undefined4 *)&(pMVar2->vhCached).isCubeHit = in_stack_14;
  (pMVar2->vhCached).woId = in_stack_15;
  (pMVar2->vhCached).cube = pCStack_16;
  (pMVar2->vhCached).distance = fStack_17;
  (pMVar2->vhCached).collider = pCStack_18;
  (pMVar2->vhCached).transform = pTStack_19;
  *(undefined4 *)&(pMVar2->vhCached).field_0x3c = uStack_20;
  (pMVar2->vhCached).interactionFlags = iStack_21;
  pVStack_11 = TypeInfo__UnityEngine__Vector3;
  pVVar3 = (Vector3__Array *)func_?();
  puStack_10 = (undefined *)0x2;
  TypeInfo__MVSweptElipsoidCheck->static_fields->cornerPointsLocalSpaceCalculateAxisAlignedRect =
       pVVar3;
  pVStack_7 = TypeInfo__UnityEngine__Vector3;
  pVVar3 = (Vector3__Array *)func_?();
  TypeInfo__MVSweptElipsoidCheck->static_fields->minMaxCalculateAxisAlignedRect = pVVar3;
  pVVar3 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,3);
  if (pVVar3 == (Vector3__Array *)0x0) {
    func_?();
code_?:
    func_?();
    func_?();
  }
  else {
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    pVVar22 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                       (&VStack_23,(MethodInfo *)0x0);
    fVar24 = pVVar22->y;
    fVar5 = pVVar22->z;
    if (pVVar3->max_length == 0) goto code_?;
    pVVar3->vector[0].x = pVVar22->x;
    pVVar3->vector[0].y = fVar24;
    pVVar3->vector[0].z = fVar5;
    pVVar22 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_forward
                       (&VStack_23,(MethodInfo *)0x0);
    fVar24 = pVVar22->y;
    fVar5 = pVVar22->z;
    if (1 < pVVar3->max_length) {
      pVVar3->vector[1].x = pVVar22->x;
      pVVar3->vector[1].y = fVar24;
      pVVar3->vector[1].z = fVar5;
      pVVar22 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_right
                         (&VStack_23,(MethodInfo *)0x0);
      fVar24 = pVVar22->y;
      fVar5 = pVVar22->z;
      if (2 < pVVar3->max_length) {
        pVVar3->vector[2].x = pVVar22->x;
        pVVar3->vector[2].y = fVar24;
        pVVar3->vector[2].z = fVar5;
        TypeInfo__MVSweptElipsoidCheck->static_fields->testVectorGetMaxAngleLocalAxisVector = pVVar3
        ;
        pRVar25 = (Ray__Array *)func_?();
        TypeInfo__MVSweptElipsoidCheck->static_fields->raysGetBoundRays = pRVar25;
        pVVar3 = (Vector3__Array *)func_?();
        TypeInfo__MVSweptElipsoidCheck->static_fields->circleCornersGetBoundRays = pVVar3;
        pVVar3 = (Vector3__Array *)func_?();
        TypeInfo__MVSweptElipsoidCheck->static_fields->pointsOnPlane = pVVar3;
        return;
      }
      goto code_?;
    }
  }
  func_?();
  func_?();
code_?:
  func_?();
  func_?();
  pcVar26 = (code *)swi(3);
  (*pcVar26)();
  return;
}

