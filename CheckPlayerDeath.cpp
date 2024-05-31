bool CheckPlayerDeath(Object &player, Scene &scene)
{
    for (auto& obj : scene) {
        if (obj.enemy.enabled) {
            Collision collision = CheckCollision(player, obj);
            if (collision.exists) {
                return true;
            }
        }
    }
    return false;
}
