
/* IAsyncResult BeginInvoke(VoxelHit, Ray, AsyncCallback, Object) */

IAsyncResult *
Assembly-CSharp.dll::Bullet+OnHitDelegate::Bullet_OnHitDelegate_BeginInvoke
          (Bullet_OnHitDelegate *this,VoxelHit hit,Ray lineOfFire,AsyncCallback *callback,
          Object *object,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  uStack_2 = 0;
  uVar3 = func_?(TypeInfo__VoxelHit,&stack0x00000008);
  uStack_2 = CONCAT44(uStack_2._4_4_,uVar3);
  uVar3 = func_?(TypeInfo__UnityEngine__Ray,(undefined1 *)((int)&hit.interactionFlags + 4))
  ;
  uStack_2 = CONCAT44(uVar3,(undefined4)uStack_2);
  pIVar4 = (IAsyncResult *)func_?(this,&uStack_2,lineOfFire.m_Direction.z,callback);
  return pIVar4;
}

