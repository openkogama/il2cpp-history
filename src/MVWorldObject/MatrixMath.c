
/* Matrix4x4 Inverse(Matrix4x4) */

Matrix4x4 *
MVWorldObject.dll::MatrixMath::MatrixMath_Inverse
          (Matrix4x4 *__return_storage_ptr__,Matrix4x4 m,MethodInfo *method)

{
  func_?(__return_storage_ptr__,0,0x40);
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_Item_1
                     (&m,0,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_Item_1(&m,4,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_Item_1(&m,8,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_Item_1(&m,0xc,(MethodInfo *)0x0)
  ;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_Item_1
                     (&m,1,(MethodInfo *)0x0);
  fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_Item_1
                     (&m,5,(MethodInfo *)0x0);
  fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_Item_1
                     (&m,9,(MethodInfo *)0x0);
  fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_Item_1
                     (&m,0xd,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_Item_1(&m,2,(MethodInfo *)0x0);
  fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_Item_1
                     (&m,6,(MethodInfo *)0x0);
  pMVar7 = &m;
  fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_Item_1
                     (pMVar7,10,(MethodInfo *)0x0);
  fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_Item_1
                     (&m,0xe,(MethodInfo *)0x0);
  fVar10 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_Item_1
                     (&m,3,(MethodInfo *)0x0);
  fVar11 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_Item_1
                     (&m,7,(MethodInfo *)0x0);
  fVar12 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_Item_1
                     (&m,0xb,(MethodInfo *)0x0);
  fVar13 = 0.0;
  fVar14 = 2.10195e-44;
  fVar15 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_Item_1
                     (&m,0xf,(MethodInfo *)0x0);
  fVar16 = fVar11 * (float)pMVar7 - fVar10 * fVar6;
  fVar17 = fVar12 * (float)pMVar7 - fVar10 * fVar8;
  fVar18 = fVar15 * (float)pMVar7 - fVar10 * fVar9;
  fVar19 = fVar12 * fVar6 - fVar11 * fVar8;
  fVar20 = fVar15 * fVar6 - fVar11 * fVar9;
  fVar21 = fVar15 * fVar8 - fVar12 * fVar9;
  fVar22 = (fVar21 * fVar3 - fVar20 * fVar4) + fVar19 * fVar5;
  fVar23 = (float)((uint)((fVar21 * fVar2 - fVar18 * fVar4) + fVar17 * fVar5) ^
                 __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
  fVar24 = (fVar20 * fVar2 - fVar18 * fVar3) + fVar16 * fVar5;
  fVar25 = (float)((uint)((fVar19 * fVar2 - fVar17 * fVar3) + fVar16 * fVar4) ^
                 __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
  fVar26 = _UNK_? /
          (fVar23 * fVar13 + fVar22 * fVar1 + fVar24 * fVar14 + fVar25 * 6.4036557e-29);
  fVar27 = fVar16 * fVar14;
  fVar28 = fVar11 * fVar2 - fVar10 * fVar3;
  fVar29 = fVar12 * fVar2 - fVar10 * fVar4;
  fVar30 = fVar15 * fVar2 - fVar10 * fVar5;
  fVar31 = fVar12 * fVar3 - fVar11 * fVar4;
  fVar10 = fVar15 * fVar3 - fVar11 * fVar5;
  fVar32 = fVar15 * fVar4 - fVar12 * fVar5;
  fVar33 = fVar28 * fVar14;
  fVar11 = fVar6 * fVar2 - (float)pMVar7 * fVar3;
  fVar12 = fVar8 * fVar2 - (float)pMVar7 * fVar4;
  fVar2 = fVar9 * fVar2 - (float)pMVar7 * fVar5;
  fVar15 = fVar8 * fVar3 - fVar6 * fVar4;
  fVar34 = 8.96831e-44;
  fVar35 = 0.0;
  fVar3 = fVar9 * fVar3 - fVar6 * fVar5;
  fVar4 = fVar9 * fVar4 - fVar8 * fVar5;
  pMVar7 = __return_storage_ptr__;
  func_?();
  m.m22 = fVar26 * fVar22;
  m.m32 = 0.0;
  m.m12 = 0.0;
  m.m02 = (float)__return_storage_ptr__;
  m.m31 = (float)&UNK_?;
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
            (__return_storage_ptr__,0,m.m22,(MethodInfo *)0x0);
  m.m33 = 0.0;
  m.m23 = (float)((uint)(fVar19 * 6.4036557e-29 + (fVar21 * fVar13 - fVar20 * fVar14)) ^
                 __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field) * fVar26;
  m.m13 = 5.60519e-45;
  m.m03 = (float)__return_storage_ptr__;
  m.m32 = (float)&UNK_?;
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
            (__return_storage_ptr__,4,m.m23,(MethodInfo *)0x0);
  m.m33 = (float)&UNK_?;
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
            (__return_storage_ptr__,8,
             (fVar31 * 6.4036557e-29 + (fVar32 * fVar13 - fVar10 * fVar14)) * fVar26,
             (MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
            (__return_storage_ptr__,0xc,
             (float)((uint)((fVar4 * fVar34 - fVar3 * fVar35) + fVar15 * 6.404321e-29) ^
                    __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field) *
             fVar26,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
            (__return_storage_ptr__,1,fVar26 * fVar23,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
            (__return_storage_ptr__,5,
             (fVar17 * 6.4036557e-29 + (fVar21 * fVar1 - fVar18 * fVar14)) * fVar26,(MethodInfo *)0x0)
  ;
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
            (__return_storage_ptr__,9,
             (float)((uint)(fVar29 * 6.4036557e-29 + (fVar32 * fVar1 - fVar30 * fVar14)) ^
                    __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field) *
             fVar26,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
            (__return_storage_ptr__,0xd,
             ((fVar4 * fVar1 - fVar2 * fVar35) + fVar12 * 6.404321e-29) * fVar26,(MethodInfo *)0x0
            );
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
            (__return_storage_ptr__,2,fVar26 * fVar24,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
            (__return_storage_ptr__,6,
             (float)((uint)(fVar16 * 6.4036557e-29 + (float)pMVar7) ^
                    __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field) *
             fVar26,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
            (__return_storage_ptr__,10,
             (fVar28 * 6.4036557e-29 + (fVar10 * fVar1 - fVar30 * fVar13)) * fVar26,(MethodInfo *)0x0)
  ;
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
            (__return_storage_ptr__,0xe,
             (float)((uint)((fVar3 * fVar1 - fVar2 * fVar34) + fVar11 * 6.404321e-29) ^
                    __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field) *
             fVar26,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
            (__return_storage_ptr__,3,fVar26 * fVar25,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
            (__return_storage_ptr__,7,(fVar27 + (fVar19 * fVar1 - fVar17 * fVar13)) * fVar26,
             (MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
            (__return_storage_ptr__,0xb,
             (float)((uint)(fVar33 + (fVar31 * fVar1 - fVar29 * fVar13)) ^
                    __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field) *
             fVar26,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
            (__return_storage_ptr__,0xf,
             ((fVar15 * fVar1 - fVar12 * fVar34) + fVar11 * fVar35) * fVar26,(MethodInfo *)0x0);
  return __return_storage_ptr__;
}


/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* Matrix4x4 MakeInverseTransform(Vector3, Vector3, Quaternion) */

Matrix4x4 *
MVWorldObject.dll::MatrixMath::MatrixMath_MakeInverseTransform
          (Matrix4x4 *__return_storage_ptr__,Vector3 position,Vector3 scale,Quaternion orientation,
          MethodInfo *method)

{
  func_?(&pIStack_1,0,0x40);
  func_?(__return_storage_ptr__,0,0x40);
  fVar2 = _UNK_? / scale.x;
  fVar3 = (float)((uint)orientation.y ^
                  __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
  fVar4 = (float)((uint)orientation.z ^
                  __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
  fVar5 = _UNK_? / scale.y;
  fVar6 = (float)((uint)orientation.x ^
                  __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
  iVar7 = 0;
  fVar8 = fVar6 * fVar6 + orientation.w * orientation.w + fVar3 * fVar3 + fVar4 * fVar4;
  do {
    switch(iVar7) {
    case 0:
      fVar6 = fVar6 / fVar8;
      iVar7 = iVar7 + 1;
      break;
    case 1:
      fVar3 = fVar3 / fVar8;
      iVar7 = iVar7 + 1;
      break;
    case 2:
      fVar4 = fVar4 / fVar8;
      iVar7 = iVar7 + 1;
      break;
    case 3:
      rotation.y = fVar3;
      rotation.x = fVar6;
      rotation.z = fVar4;
      rotation.w = orientation.w / fVar8;
      point.y = (float)((uint)position.y ^
                       __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
      point.x = (float)((uint)position.x ^
                       __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
      point.z = (float)((uint)position.z ^
                       __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
      pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                         ((Vector3 *)&stack0xffffffe4,rotation,point,(MethodInfo *)0x0);
      uVar10 = pVVar9->x;
      uVar11 = pVVar9->y;
      fVar5 = fVar5 * (float)uVar11;
      q.y = fVar3;
      q.x = fVar6;
      q.z = fVar4;
      q.w = orientation.w / fVar8;
      MatrixMath_ToRotationMatrix((Matrix4x4 *)&pIStack_1,q,(MethodInfo *)0x0);
      func_?();
      fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_Item_1
                        ((Matrix4x4 *)&pIStack_1,0,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
                (__return_storage_ptr__,0,fVar2 * fVar8,(MethodInfo *)0x0);
      fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_Item_1
                        ((Matrix4x4 *)&pIStack_1,4,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
                (__return_storage_ptr__,4,fVar2 * fVar8,(MethodInfo *)0x0);
      fVar6 = 0.0;
      fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_Item_1
                        ((Matrix4x4 *)&pIStack_1,8,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
                (__return_storage_ptr__,8,fVar2 * fVar8,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
                (__return_storage_ptr__,0xc,fVar2 * (float)uVar10,(MethodInfo *)0x0);
      fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_Item_1
                        ((Matrix4x4 *)&pIStack_1,1,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
                (__return_storage_ptr__,1,fVar8 * 6.405081e-29,(MethodInfo *)0x0);
      fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_Item_1
                        ((Matrix4x4 *)&pIStack_1,5,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
                (__return_storage_ptr__,5,fVar8 * 6.405081e-29,(MethodInfo *)0x0);
      fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_Item_1
                        ((Matrix4x4 *)&pIStack_1,9,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
                (__return_storage_ptr__,9,fVar8 * 6.405081e-29,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
                (__return_storage_ptr__,0xd,fVar5,(MethodInfo *)0x0);
      fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_Item_1
                         ((Matrix4x4 *)&pIStack_1,2,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
                (__return_storage_ptr__,2,fVar5 * 0.0,(MethodInfo *)0x0);
      fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_Item_1
                         ((Matrix4x4 *)&pIStack_1,6,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
                (__return_storage_ptr__,6,fVar5 * 0.0,(MethodInfo *)0x0);
      fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_Item_1
                         ((Matrix4x4 *)&pIStack_1,10,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
                (__return_storage_ptr__,10,fVar5 * 0.0,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
                (__return_storage_ptr__,0xe,fVar6,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
                (__return_storage_ptr__,3,0.0,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
                (__return_storage_ptr__,7,0.0,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
                (__return_storage_ptr__,0xb,0.0,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
                (__return_storage_ptr__,0xf,1.0,(MethodInfo *)0x0);
      return __return_storage_ptr__;
    default:
      uVar12 = func_?(&TypeInfo__System__IndexOutOfRangeException);
      this_00 = (IndexOutOfRangeException *)func_?(uVar12);
      func_?(this_00);
      method_00 = (MethodInfo *)0x0;
      message = (String *)func_?(&StringLiteral_Invalid_Quaternion_index_);
      mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
                (this_00,message,method_00);
      puStack_13 = (undefined *)func_?(&MethodInfo__UnityEngine__Quaternion__get_Item_int_)
      ;
      pIStack_1 = this_00;
      bVar14 = func_?();
      uRam_? = in_stack_15;
      bVar16 = (byte)((uint)extraout_ECX >> 8);
      bVar17 = (byte)((uint)unaff_EBX >> 8);
      *in_stack_18 =
           *in_stack_18 + in_stack_19 +
           (CARRY1(bVar16,bVar17) ||
           CARRY1(bVar16 + bVar17,
                  (char)((ushort)((ushort)bVar14 * (ushort)*(byte *)(extraout_ECX + -0x5e)) >> 8) !=
                  '\0'));
      func_?((int)in_stack_20 + -0x40,0,0x40,puStack_13);
      this = *(Matrix4x4 **)((int)in_stack_20 + 8);
      func_?(this,0,0x40);
      MatrixMath_ToRotationMatrix
                ((Matrix4x4 *)((int)in_stack_20 + -0x40),
                 *(Quaternion *)((int)in_stack_20 + 0x24),(MethodInfo *)0x0);
      func_?(this,0,0x40);
      fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_Item_1
                         ((Matrix4x4 *)((int)in_stack_20 + -0x40),0,(MethodInfo *)0x0);
      *(float *)((int)in_stack_20 + 8) = fVar5;
      UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
                (this,0,*(float *)((int)in_stack_20 + 8) *
                        *(float *)((int)in_stack_20 + 0x18),(MethodInfo *)0x0);
      fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_Item_1
                         ((Matrix4x4 *)((int)in_stack_20 + -0x40),4,(MethodInfo *)0x0);
      *(float *)((int)in_stack_20 + 8) = fVar5;
      UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
                (this,4,*(float *)((int)in_stack_20 + 8) *
                        *(float *)((int)in_stack_20 + 0x1c),(MethodInfo *)0x0);
      fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_Item_1
                         ((Matrix4x4 *)((int)in_stack_20 + -0x40),8,(MethodInfo *)0x0);
      *(float *)((int)in_stack_20 + 8) = fVar5;
      UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
                (this,8,*(float *)((int)in_stack_20 + 8) *
                        *(float *)((int)in_stack_20 + 0x20),(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
                (this,0xc,*(float *)((int)in_stack_20 + 0xc),(MethodInfo *)0x0);
      fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_Item_1
                         ((Matrix4x4 *)((int)in_stack_20 + -0x40),1,(MethodInfo *)0x0);
      *(float *)((int)in_stack_20 + 8) = fVar5;
      UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
                (this,1,*(float *)((int)in_stack_20 + 8) *
                        *(float *)((int)in_stack_20 + 0x18),(MethodInfo *)0x0);
      fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_Item_1
                         ((Matrix4x4 *)((int)in_stack_20 + -0x40),5,(MethodInfo *)0x0);
      *(float *)((int)in_stack_20 + 8) = fVar5;
      UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
                (this,5,*(float *)((int)in_stack_20 + 8) *
                        *(float *)((int)in_stack_20 + 0x1c),(MethodInfo *)0x0);
      fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_Item_1
                         ((Matrix4x4 *)((int)in_stack_20 + -0x40),9,(MethodInfo *)0x0);
      *(float *)((int)in_stack_20 + 8) = fVar5;
      UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
                (this,9,*(float *)((int)in_stack_20 + 8) *
                        *(float *)((int)in_stack_20 + 0x20),(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
                (this,0xd,*(float *)((int)in_stack_20 + 0x10),(MethodInfo *)0x0);
      fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_Item_1
                         ((Matrix4x4 *)((int)in_stack_20 + -0x40),2,(MethodInfo *)0x0);
      *(float *)((int)in_stack_20 + 8) = fVar5;
      UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
                (this,2,*(float *)((int)in_stack_20 + 8) *
                        *(float *)((int)in_stack_20 + 0x18),(MethodInfo *)0x0);
      fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_Item_1
                         ((Matrix4x4 *)((int)in_stack_20 + -0x40),6,(MethodInfo *)0x0);
      *(float *)((int)in_stack_20 + 8) = fVar5;
      UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
                (this,6,*(float *)((int)in_stack_20 + 8) *
                        *(float *)((int)in_stack_20 + 0x1c),(MethodInfo *)0x0);
      fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_Item_1
                         ((Matrix4x4 *)((int)in_stack_20 + -0x40),10,(MethodInfo *)0x0);
      *(float *)((int)in_stack_20 + 8) = fVar5;
      UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
                (this,10,*(float *)((int)in_stack_20 + 8) *
                         *(float *)((int)in_stack_20 + 0x20),(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
                (this,0xe,*(float *)((int)in_stack_20 + 0x14),(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
                (this,3,0.0,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
                (this,7,0.0,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
                (this,0xb,0.0,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
                (this,0xf,1.0,(MethodInfo *)0x0);
      return this;
    }
  } while( true );
}


/* Matrix4x4 MakeTransform(Vector3, Vector3, Quaternion) */

Matrix4x4 *
MVWorldObject.dll::MatrixMath::MatrixMath_MakeTransform
          (Matrix4x4 *__return_storage_ptr__,Vector3 position,Vector3 scale,Quaternion orientation,
          MethodInfo *method)

{
  func_?(auStack_1,0,0x40);
  func_?(__return_storage_ptr__,0,0x40);
  MatrixMath_ToRotationMatrix((Matrix4x4 *)auStack_1,orientation,(MethodInfo *)0x0);
  func_?(__return_storage_ptr__,0,0x40);
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_Item_1
                    ((Matrix4x4 *)auStack_1,0,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
            (__return_storage_ptr__,0,fVar2 * scale.x,(MethodInfo *)0x0);
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_Item_1
                    ((Matrix4x4 *)auStack_1,4,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
            (__return_storage_ptr__,4,fVar2 * scale.y,(MethodInfo *)0x0);
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_Item_1
                    ((Matrix4x4 *)auStack_1,8,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
            (__return_storage_ptr__,8,fVar2 * scale.z,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
            (__return_storage_ptr__,0xc,1.12104e-44,(MethodInfo *)0x0);
  fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_Item_1
                    ((Matrix4x4 *)auStack_1,1,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
            (__return_storage_ptr__,1,fVar3 * 6.4055184e-29,(MethodInfo *)0x0);
  fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_Item_1
                    ((Matrix4x4 *)auStack_1,5,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
            (__return_storage_ptr__,5,fVar3 * (float)auStack_1,(MethodInfo *)0x0);
  fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_Item_1
                    ((Matrix4x4 *)auStack_1,9,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
            (__return_storage_ptr__,9,fVar3 * 1.4013e-45,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
            (__return_storage_ptr__,0xd,fVar2 * scale.z,(MethodInfo *)0x0);
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_Item_1
                    ((Matrix4x4 *)auStack_1,2,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
            (__return_storage_ptr__,2,fVar2 * 6.4055184e-29,(MethodInfo *)0x0);
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_Item_1
                    ((Matrix4x4 *)auStack_1,6,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
            (__return_storage_ptr__,6,fVar2 * (float)auStack_1,(MethodInfo *)0x0);
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_Item_1
                    ((Matrix4x4 *)auStack_1,10,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
            (__return_storage_ptr__,10,fVar2 * 1.4013e-45,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
            (__return_storage_ptr__,0xe,6.4055106e-29,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
            (__return_storage_ptr__,3,0.0,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
            (__return_storage_ptr__,7,0.0,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
            (__return_storage_ptr__,0xb,0.0,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
            (__return_storage_ptr__,0xf,1.0,(MethodInfo *)0x0);
  return __return_storage_ptr__;
}


/* Void ToRotationMatrix(Matrix4x4 ByRef, Quaternion) */

void MVWorldObject.dll::MatrixMath::MatrixMath_ToRotationMatrix
               (Matrix4x4 *kRot,Quaternion q,MethodInfo *method)

{
  func_?(kRot,0,0x40);
  fVar1 = q.z + q.z;
  fVar2 = q.y + q.y;
  fVar3 = q.w * fVar2;
  fVar4 = q.x * fVar1;
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
            (kRot,0,_UNK_? - (q.z * fVar1 + q.y * fVar2),(MethodInfo *)0x0);
  value = q.x * fVar2 - q.w * fVar1;
  fVar5 = 5.60519e-45;
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
            (kRot,4,value,(MethodInfo *)0x0);
  fVar4 = fVar4 + fVar3;
  fVar3 = 1.12104e-44;
  puVar6 = &UNK_?;
  pMVar7 = kRot;
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
            (kRot,8,fVar4,(MethodInfo *)0x0);
  puVar8 = &UNK_?;
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
            (kRot,1,q.x * fVar2 + q.w * fVar1,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
            (kRot,5,_UNK_? - (value + (float)puVar6),(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
            (kRot,9,fVar3 - (float)pMVar7,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
            (kRot,2,(float)puVar8 - fVar4,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
            (kRot,6,fVar3 + (float)pMVar7,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1
            (kRot,10,_UNK_? - (fVar5 + (float)puVar6),(MethodInfo *)0x0);
  return;
}

