
/* Quaternion Conjugate(Quaternion) */

Quaternion *
MVWorldObject.dll::QuaternionMath::QuaternionMath_Conjugate
          (Quaternion *__return_storage_ptr__,Quaternion q,MethodInfo *method)

{
  uVar1 = __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field;
  __return_storage_ptr__->x =
       (float)((uint)q.x ^ __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field)
  ;
  __return_storage_ptr__->y = (float)((uint)q.y ^ uVar1);
  __return_storage_ptr__->z = (float)((uint)q.z ^ uVar1);
  __return_storage_ptr__->w = q.w;
  return __return_storage_ptr__;
}


/* Quaternion Inverse(Quaternion) */

Quaternion *
MVWorldObject.dll::QuaternionMath::QuaternionMath_Inverse
          (Quaternion *__return_storage_ptr__,Quaternion q,MethodInfo *method)

{
  fVar1 = (float)((uint)q.x ^
                 __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
  fVar2 = (float)((uint)q.z ^
                  __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
  fVar3 = (float)((uint)q.y ^
                 __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
  iVar4 = 0;
  fVar5 = q.w * q.w + fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2;
  q.x = fVar1;
  q.z = fVar2;
  do {
    switch(iVar4) {
    case 0:
      fVar1 = fVar1 / fVar5;
      iVar4 = iVar4 + 1;
      q.x = fVar1;
      break;
    case 1:
      fVar3 = fVar3 / fVar5;
      iVar4 = iVar4 + 1;
      break;
    case 2:
      fVar2 = fVar2 / fVar5;
      iVar4 = iVar4 + 1;
      q.z = fVar2;
      break;
    case 3:
      __return_storage_ptr__->x = q.x;
      __return_storage_ptr__->y = fVar3;
      __return_storage_ptr__->z = q.z;
      __return_storage_ptr__->w = q.w / fVar5;
      return __return_storage_ptr__;
    default:
      uVar6 = func_?();
      this = (IndexOutOfRangeException *)func_?(uVar6);
      func_?(this);
      method_00 = (MethodInfo *)0x0;
      message = (String *)func_?(&StringLiteral_Invalid_Quaternion_index_);
      mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
                (this,message,method_00);
      func_?();
      cVar7 = (undefined1 *)0xffffffef < &stack0xfffffff4;
      uVar8 = func_?();
      uRam_? = (undefined1)uVar8;
      uRam_? = uRam_?;
      *extraout_ECX = *extraout_ECX + (char)((ushort)uVar8 >> 8) + cVar7;
      pcVar9 = (code *)swi(3);
      pQVar10 = (Quaternion *)(*pcVar9)();
      return pQVar10;
    }
  } while( true );
}


/* Single MagnitudeSquared(Quaternion) */

float MVWorldObject.dll::QuaternionMath::QuaternionMath_MagnitudeSquared
                (Quaternion q,MethodInfo *method)

{
  return q.w * q.w + q.x * q.x + q.y * q.y + q.z * q.z;
}

