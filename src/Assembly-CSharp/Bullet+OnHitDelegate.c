
/* IAsyncResult BeginInvoke(VoxelHit, Ray, AsyncCallback, Object) */

IAsyncResult *
Assembly-CSharp.dll::Bullet+OnHitDelegate::Bullet_OnHitDelegate_BeginInvoke
          (Bullet_OnHitDelegate *this,VoxelHit hit,Ray lineOfFire,AsyncCallback *callback,
          Object *object,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Ray);
    func_?(&TypeInfo__VoxelHit);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  uStack_2 = func_?(TypeInfo__VoxelHit,&stack0x00000008);
  uStack_3 = func_?(TypeInfo__UnityEngine__Ray,
                             (undefined1 *)((int)&hit.interactionFlags + 4));
  pIVar4 = (IAsyncResult *)func_?(this,&uStack_2,lineOfFire.m_Direction.z,callback);
  return pIVar4;
}

